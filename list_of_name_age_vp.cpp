#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Please enter a list of names and their age: \n";
    cout << "For example: Karlo 17\n";
    set<string> seen;
    vector<string> names; vector<int> ages;
    string name;
    int age;
    while (cin >> name >> age) {
        if ((name == "NoName" && age == 0) || seen.find(name) != seen.end()) {
            break;
        } else {
            seen.insert(name);
            names.push_back(name);
            ages.push_back(age);
        }
    }
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << " " << ages[i] << "\n";
    }
}

