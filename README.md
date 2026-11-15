# Problems & Solutions

A curated collection of competitive-programming and data-structures & algorithms
solutions, organized by judge. Every solution is written in modern C++ and lives
in the folder of the platform it belongs to.

![Language](https://img.shields.io/badge/language-C%2B%2B17-blue)
![Solutions](https://img.shields.io/badge/solutions-524-brightgreen)
![Platforms](https://img.shields.io/badge/platforms-9-orange)

---

## Overview

This repository documents a continuous problem-solving practice. It contains
solutions to problems from LeetCode, Codeforces, GeeksforGeeks, Coding Ninjas
(Code360), beecrowd, AtCoder, Timus, UVa, and NeetCode.

The goals of the repository are:

- Keep every solved problem in one searchable place.
- Record the reasoning behind a solution next to the code.
- Compare approaches (brute force vs. optimal) for the same problem.
- Track progress over time through a clear, predictable folder structure.

---

## Repository Structure

```
Problems-Solutions/
├── AtCoder/                  # AtCoder Beginner Contest solutions
├── beecrowd/                 # beecrowd (formerly URI) problems
│   ├── AD_HOC/
│   ├── Beginner/
│   └── Strings/
├── Codeforces/               # Codeforces rounds, sheets, and ladders
│   ├── ICPC Assiut University Community/
│   ├── Implementation - Constructive/
│   ├── Two Pointer Method/
│   └── ...
├── CodingNinjas/             # Coding Ninjas / Code360 problems
├── geeksforgeeks/            # GeeksforGeeks practice problems
├── LeetCode/                 # LeetCode problems and daily challenges
│   ├── Daily Challange/      # solutions from the daily challenge
│   ├── Contests/
│   ├── Binary Tree/
│   └── ...
├── Neet Code/                # NeetCode practice
├── Timus-RUS/                # Timus Online Judge
├── Uva/                      # UVa Online Judge
├── test.cpp                  # scratch file for quick experiments
└── README.md
```

Sub-folders group problems by topic (arrays, trees, DP, graphs, …), by
difficulty, or by the contest/sheet they came from.

---

## Platforms Covered

| Platform | Folder | Solutions |
| --- | --- | ---: |
| [LeetCode](https://leetcode.com/) | `LeetCode/` | 258 |
| [Codeforces](https://codeforces.com/) | `Codeforces/` | 137 |
| [Coding Ninjas / Code360](https://www.naukri.com/code360/) | `CodingNinjas/` | 58 |
| [GeeksforGeeks](https://www.geeksforgeeks.org/) | `geeksforgeeks/` | 58 |
| [beecrowd](https://judge.beecrowd.com/) | `beecrowd/` | 5 |
| [AtCoder](https://atcoder.jp/) | `AtCoder/` | 4 |
| [Timus](https://acm.timus.ru/) | `Timus-RUS/` | 2 |
| [UVa](https://onlinejudge.org/) | `Uva/` | 2 |
| [NeetCode](https://neetcode.io/) | `Neet Code/` | 1 |
| **Total** | | **524** |

The LeetCode count includes one SQL solution; all others are C++. Counts reflect
the files currently tracked in the repository.

### Topic Coverage

| Topic | Where to look |
| --- | --- |
| Arrays, hashing, prefix sums | `LeetCode/Array HashMap or etc/` |
| Binary trees & traversal | `LeetCode/Binary Tree/`, `CodingNinjas/Binary Tree/`, `geeksforgeeks/Binary Tree/` |
| Linked lists | `LeetCode/Linked List/`, `CodingNinjas/Linked List/` |
| Stacks & queues | `LeetCode/Stack Queue/`, `geeksforgeeks/Stack and Queue/` |
| Two pointers & sliding window | `LeetCode/Two Pointer and sliding window/`, `CodingNinjas/two pointers and sliding window/` |
| Dynamic programming | `LeetCode/DP/`, `geeksforgeeks/DP/` |
| Greedy | `LeetCode/Greedy/`, `CodingNinjas/Greedy/`, `geeksforgeeks/greedy/` |
| Bit manipulation | `LeetCode/Bit Manipulation/`, `geeksforgeeks/Bit Manipulations/` |
| Recursion & searching | `LeetCode/Recursion/`, `Codeforces/ICPC Assiut University Community/Sheet #7 (Recursion)/` |

---

## Conventions

- **One problem per file.** The file name is the problem title with spaces
  replaced by underscores, or the platform's problem number.
- **Contest indexing is preserved.** Prefixes such as `A_`, `B_`, `C_` match the
  problem's position in its contest.
- **Problem link at the top.** Where available, a short comment records the
  original problem URL for reference.
- **Platform-native signatures.**
  - LeetCode and similar judges: a `Solution` class exposing the required
    method, with no `main`.
  - Standalone judges: a complete program with `main()` that reads from standard
    input and writes to standard output.
- **No third-party dependencies.** Solutions use the C++ standard library only.
- **Build artifacts are ignored.** `.vscode/`, `.cph/`, compiled binaries, and
  local environment files are excluded via `.gitignore`.

---

## Running a Solution

### Standalone programs

Most solutions outside `LeetCode/` are complete programs:

```bash
g++ -std=c++17 -O2 -Wall "Codeforces/800*/A_Race.cpp" -o a_race
./a_race
```

Then paste the sample input from the problem statement.

### LeetCode-style solutions

Files under `LeetCode/`, `CodingNinjas/`, and `geeksforgeeks/` usually define a
`Solution` class instead of a `main`. Paste the class into the platform's editor,
or wrap it in a small local test harness:

```cpp
#include <bits/stdc++.h>
using namespace std;

// Paste the solution class here.

int main() {
    vector<int> nums = {2, 7, 11, 15};
    Solution sol;
    for (int i : sol.twoSum(nums, 9)) cout << i << ' ';
    cout << '\n';
}
```

Some linked-list and tree solutions assume node definitions supplied by the
judge; add the matching `struct` when compiling locally.

---

## Adding a New Solution

1. Pick the platform folder, then the topic or contest sub-folder.
2. Name the file after the problem: `1234. Problem Title.cpp` or
   `A_Problem_Title.cpp`.
3. Add the problem URL as a comment at the top.
4. Keep the solution self-contained and compile it with `-std=c++17 -Wall`.
5. Commit with a short message naming the problem, for example:

```bash
git add "LeetCode/Two Pointer and sliding window/125. Valid Palindrome.cpp"
git commit -m "add 125. Valid Palindrome"
```

---

## Notes

- Some problems have both a brute-force and an optimized solution, kept as
  separate files with suffixes such as `optimal`.
- `test.cpp` is a scratch pad for quick experiments and is not a solution.
- This repository is a personal practice log, so explanations are intentionally
  brief; the code and the linked problem statement are the primary reference.

---

## Author

**Sumon Debnath**

- GitHub: [@sumondebnath](https://github.com/sumondebnath)

---

## License

No license is declared for this repository. The solutions are shared for
reference and learning; please consult the original problem statements on the
respective platforms for their terms of use.
