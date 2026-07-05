# HackerRankGym

A hands-on code repository for practicing [HackerRank](https://www.hackerrank.com/) challenges. Solutions are organized by challenge track and day, with one self-contained C++ source file per problem for local compilation and testing.

## Requirements

- A C++ compiler with C++17 support (e.g. `g++`)
- Linux or WSL2 (tested on WSL2 with `g++` 11+)

Verify your setup:

```bash
g++ --version
```

## Project Layout

```
HackerRankGym/
├── 30_Days_of_Code/           # 30 Days of Code challenge solutions
│   ├── Day0_Hello_World.cpp
│   ├── Day1_Data_Types.cpp
│   ├── Day2_Operators.cpp
│   └── ...
├── LICENSE
└── README.md
```

Each solution lives in a topic subdirectory (e.g. `30_Days_of_Code/`) and follows the naming pattern `Day<N>_<Topic>.cpp`. Source files are written to match HackerRank's online judge format and can also be built and run locally against sample input.

## Build & Run

From a solution directory:

```bash
cd 30_Days_of_Code
g++ -std=c++17 -Wall -o Day0_Hello_World Day0_Hello_World.cpp
./Day0_Hello_World
```

General form:

```bash
cd <track_directory>
g++ -std=c++17 -Wall -o <program_name> <source>.cpp
./<program_name>
```

Compiler flags:

| Flag | Purpose |
|------|---------|
| `-std=c++17` | Use the C++17 standard (common on HackerRank) |
| `-Wall` | Enable common compiler warnings |

Pipe sample input for quick checks:

```bash
echo -e "2\nHacker\nRank" | ./Day6_Lets_Review
```

## Solutions

### 30 Days of Code

| Day | File | Topic |
|-----|------|-------|
| 0 | `Day0_Hello_World.cpp` | Hello World, basic I/O |
| 1 | `Day1_Data_Types.cpp` | Primitive data types, `scanf`/`printf` style I/O |
| 2 | `Day2_Operators.cpp` | Arithmetic operators, meal cost calculation |
| 3 | `Day3_Intro_to_Conditional_Statements.cpp` | `if` / `else` branching |
| 4 | `Day4_Class_vs_Instance.cpp` | Classes, constructors, member functions |
| 5 | `Day5_Loops.cpp` | `for` loops, multiplication table |
| 6 | `Day6_Lets_Review.cpp` | Strings, even/odd index extraction |
| 7 | `Day7_Arrays.cpp` | Arrays, reversal |
| 8 | `Day8_Dictionaries_and_Maps.cpp` | `map` / hash maps, frequency counting |
| 9 | `Day9_Recursion_3.cpp` | Recursion, factorial |
| 10 | `Day10_Binary_Numbers.cpp` | Binary conversion, consecutive `1`s in binary |

```bash
# Day 6 — even/odd indexed characters
g++ -std=c++17 -Wall -o Day6_Lets_Review Day6_Lets_Review.cpp
echo -e "2\nHacker\nRank" | ./Day6_Lets_Review
# Hce akr
# Rn ak

# Day 10 — max consecutive 1s in binary representation
g++ -std=c++17 -Wall -o Day10_Binary_Numbers Day10_Binary_Numbers.cpp
echo "5" | ./Day10_Binary_Numbers
# 1
```

## Adding a New Solution

1. Create a new `.cpp` file under the appropriate track directory (e.g. `30_Days_of_Code/Day11_Custom_Sort.cpp`).
2. Keep the solution self-contained — read from `stdin`, write to `stdout`, as HackerRank expects.
3. Build and test locally before submitting:

```bash
cd 30_Days_of_Code
g++ -std=c++17 -Wall -o Day11_Custom_Sort Day11_Custom_Sort.cpp
./Day11_Custom_Sort < sample_input.txt
```

4. Submit the same source on the [HackerRank 30 Days of Code](https://www.hackerrank.com/domains/tutorials/30-days-of-code) page.

## Notes

- **Local vs. online**: These files are meant for both local practice and direct copy-paste submission on HackerRank. Avoid platform-specific code.
- **Input handling**: HackerRank problems often mix formatted input (`cin >>`) and line-based input (`getline`). When switching between them, call `cin.ignore()` after `cin >>` to consume the leftover newline before the next `getline`.
- **Includes**: Early-day solutions use standard headers (`<iostream>`, `<vector>`, etc.). Later days may use `<bits/stdc++.h>` for brevity, matching common competitive-programming style on HackerRank.
- **Boilerplate**: Some files include HackerRank-provided helper functions (`ltrim`, `rtrim`, `split`) — keep them when present; the online judge expects that structure.

## License

MIT License — see [LICENSE](LICENSE).
