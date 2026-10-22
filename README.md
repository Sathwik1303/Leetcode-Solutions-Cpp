# LeetCode Solutions in C++

A structured repository dedicated to tracking my problem-solving journey on [LeetCode](https://leetcode.com/). This repository serves as a personal archive of optimized solutions implemented strictly in **C++**, focusing on efficient data structures, algorithmic paradigms, and clean code practices.

---

## 👤 Profiles & Contact

For verification of submissions and professional networking, please refer to the following profiles:

*   **LeetCode Profile:** [@Sathwik1303](https://leetcode.com)
*   **GitHub Profile:** [@Sathwik1303](https://github.com)

---

## 📊 Repository Metrics

<!-- Replace YOUR_LEETCODE_USERNAME with your actual LeetCode handle below -->
<p align="left">
  <img src="https://herokuapp.com" alt="LeetCode Stats" />
</p>

### Language Specification
*   **Language:** C++ (Standard: C++17 / C++20)
*   **Environment:** GCC / Clang

---

## 📁 Repository Structure

The directory is organized systematically by problem difficulty and topic to ensure seamless navigation:

```text
├── .github/              # CI/CD workflows (if applicable)
├── Easy/                 # Solutions for Easy level problems
│   └── 0001-Two-Sum/
│       └── solution.cpp
├── Medium/               # Solutions for Medium level problems
│   └── 0049-Group-Anagrams/
│       └── solution.cpp
└── Hard/                 # Solutions for Hard level problems
    └── 0023-Merge-k-Sorted-Lists/
        └── solution.cpp
```

---

## 📈 Progress Log

Below is an overview of selected problems solved, tracking their programmatic classification, optimal complexities, and direct references.

| # | Problem Title | Difficulty | Time Complexity | Space Complexity | Solution Link |
| :--- | :--- | :---: | :---: | :---: | :---: |
| 0001 | [Two Sum](https://leetcode.com) | <font color="green">Easy</font> | \(\mathcal{O}(N)\) | \(\mathcal{O}(N)\) | [Code](./Easy/0001-Two-Sum/solution.cpp) |
| 0049 | [Group Anagrams](https://leetcode.com) | <font color="orange">Medium</font> | \(\mathcal{O}(N \cdot K \log K)\) | \(\mathcal{O}(N \cdot K)\) | [Code](./Medium/0049-Group-Anagrams/solution.cpp) |
| 0023 | [Merge k Sorted Lists](https://leetcode.com) | <font color="red">Hard</font> | \(\mathcal{O}(N \log K)\) | \(\mathcal{O}(K)\) | [Code](./Hard/0023-Merge-k-Sorted-Lists/solution.cpp) |

*(Note: The progress log table is updated continuously as new implementations are committed.)*

---

## 🛠️ Local Development & Compilation

To compile and execute any solution locally, ensure you have a standard `g++` compiler installed.

```bash
# Navigate to the specific problem directory
cd Easy/0001-Two-Sum/

# Compile the C++ source file using C++17 standard
g++ -std=c++17 solution.cpp -o solution

# Execute the binary
./solution
```

---

## 📜 License

This repository is distributed under the **MIT License**. You are free to reference these implementations for educational purposes. For further details, please review the [LICENSE](LICENSE) file.
