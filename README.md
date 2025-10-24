# LeetCode Solutions

A collection of C++ solutions to various LeetCode problems. This repository contains implementations of popular coding interview questions with clean, efficient solutions.

## 📋 Problems Solved

### Array & Two Pointers
| Problem | Solution File | Difficulty | Description |
|---------|--------------|------------|-------------|
| [Two Sum](https://leetcode.com/problems/two-sum/) | [TwoSum.cpp](TwoSum.cpp) | Easy | Find two numbers that add up to a target value |
| [3Sum](https://leetcode.com/problems/3sum/) | [3sum.cpp](3sum.cpp) | Medium | Find all unique triplets that sum to zero |
| [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | [ContainerwithMostWater.cpp](ContainerwithMostWater.cpp) | Medium | Find the maximum water area between two lines |
| [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | [ProductExceptItself.cpp](ProductExceptItself.cpp) | Medium | Calculate product of all elements except current |

### String Problems
| Problem | Solution File | Difficulty | Description |
|---------|--------------|------------|-------------|
| [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [longestNonRepeatingSubstring.cpp](longestNonRepeatingSubstring.cpp) | Medium | Find length of longest substring without repeating characters |
| [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) | [LongestPrefix.cpp](LongestPrefix.cpp) | Easy | Find the longest common prefix among strings |
| [String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/) | [StrToInt.cpp](StrToInt.cpp) | Medium | Implement the atoi function |
| [Largest 3-Same-Digit Number](https://leetcode.com/problems/largest-3-same-digit-number-in-string/) | [Largest3digitString.cpp](Largest3digitString.cpp) | Easy | Find largest good integer in a string |

### Integer Operations
| Problem | Solution File | Difficulty | Description |
|---------|--------------|------------|-------------|
| [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | [RevInt.cpp](RevInt.cpp) | Medium | Reverse digits of an integer |
| [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | [IntPalindrome.cpp](IntPalindrome.cpp) | Easy | Determine if an integer is a palindrome |
| [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | [RomantoInt.cpp](RomantoInt.cpp) | Easy | Convert Roman numeral to integer |
| [Integer to Roman](https://leetcode.com/problems/integer-to-roman/) | [inttoRoman.cpp](inttoRoman.cpp) | Medium | Convert integer to Roman numeral |
| [Power of Three](https://leetcode.com/problems/power-of-three/) | [powerOf3.cpp](powerOf3.cpp) | Easy | Check if a number is a power of three |
| [Power of Four](https://leetcode.com/problems/power-of-four/) | [poweof4.cpp](poweof4.cpp) | Easy | Check if a number is a power of four |

### Linked List
| Problem | Solution File | Difficulty | Description |
|---------|--------------|------------|-------------|
| [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | [Add2Nums.cpp](Add2Nums.cpp) | Medium | Add two numbers represented as linked lists |

### Binary Search & Sorting
| Problem | Solution File | Difficulty | Description |
|---------|--------------|------------|-------------|
| [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | [Median0f2sortedArrays.cpp](Median0f2sortedArrays.cpp) | Hard | Find median of two sorted arrays |

### Dynamic Programming
| Problem | Solution File | Difficulty | Description |
|---------|--------------|------------|-------------|
| [Maximum Energy Boost](https://leetcode.com/problems/maximum-energy-boost-from-two-drinks/) | [maxEnergy.cpp](maxEnergy.cpp) | Medium | Find maximum energy boost with dynamic programming |

## 🚀 How to Use

### Prerequisites
- C++ compiler (C++11 or later recommended)
- Basic understanding of C++ and data structures

### Compiling Individual Solutions

Each file contains a complete solution class. To use a solution:

1. Include the necessary headers
2. Copy the solution code
3. Create a main function to test the solution

Example:
```cpp
#include <iostream>
#include <vector>
// Include the solution file

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}
```

### Visual Studio Project

This repository includes Visual Studio project files:
- `Leetcode.sln` - Solution file
- `Leetcode.vcxproj` - Project file
- `Leetcode.vcxproj.filters` - Project filters

Open the `.sln` file in Visual Studio to work with all solutions in an IDE environment.

## 📝 Solution Approach

Most solutions follow these principles:
- **Efficiency**: Optimized time and space complexity
- **Clarity**: Clean, readable code with meaningful variable names
- **Edge Cases**: Handling of boundary conditions and special cases
- **Standard Library**: Utilizing C++ STL where appropriate

## 🤝 Contributing

Feel free to:
- Add new solutions
- Optimize existing solutions
- Add comments and explanations
- Report bugs or issues

## 📄 License

This project is open source and available for educational purposes.

## 🔗 Resources

- [LeetCode](https://leetcode.com/) - Practice platform
- [C++ Reference](https://en.cppreference.com/) - C++ documentation
- [C++ STL](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/) - Standard Template Library guide

---

**Note**: Solutions are commented out in most files. Uncomment the code to use it in your projects.
