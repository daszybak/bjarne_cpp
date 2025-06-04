#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream rand_file("/dev/random", ios::in | ios::binary);
    if (!rand_file) {
        cerr << "Couldn't open /dev/random\n";
        return 1;
    }

    unsigned number;
    rand_file.read(reinterpret_cast<char*>(&number), sizeof(number));
    if (!rand_file) {
        cerr << "Couldn't read from /dev/random\n";
        return 1;
    }

    number %= 3;
    vector<string> possibilities = {"rock", "paper", "scissors"};
    
    map<string, unsigned int> map = {{"rock", 0}, {"paper", 1}, {"scissors", 2}};

    cout << "Welcome to the game of rock, paper, scissors.\n";
    cout << "Please enter 'rock', 'paper' or 'scissors' without the '':\n";
    string played; cin >> played;
    if (map.find(played) == map.end()) {
        cerr << "Invalid choice\n";
    }
    unsigned _played = map[played];

    cout << "The computer played " << possibilities[number] << "\n";

    if (number == _played) {
        cout << "Draw\n";
    } else if (((_played + 2) % 3) == number) {
        cout << "You won\n";
    } else {
        cout << "You lost\n";
    }
}

