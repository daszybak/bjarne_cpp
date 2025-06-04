# Build and run main.cpp
run:
    make main
    ./main


# Check CPU analysis
perf:
	perf stat -e cache-misses,cache-references,cycles,instructions ./main

# Check system call analysis
trace:
	strace -c ./main

mem:
	valgrind --tool=massif ./main

