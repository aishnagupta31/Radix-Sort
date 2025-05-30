# Radix Sort in C++

This repository contains an implementation of **Radix Sort** using **Counting Sort** as a subroutine in C++. The program reads multiple test cases and sorts the input integers using the radix sort technique.

---

## 📌 How It Works

- `maxElement` finds the largest number in the array to determine the number of digits.
- `countsort` performs a stable counting sort based on the current digit place (ones, tens, etc.).
- `radixSort` calls `countsort` iteratively for each digit position.
- The main function handles multiple test cases.

---

## 📎 Sample Input Format

2
5
170 45 75 90 802
4
24 2 66 1

## 📎 Sample Output

45 75 90 170 802
1 2 24 66

## 🔧 How to Compile & Run

Make sure you have a C++ compiler installed (e.g., `g++`).

```bash
g++ RadixSort.cpp -o RadixSort
./RadixSort
