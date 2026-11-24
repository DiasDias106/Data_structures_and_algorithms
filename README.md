# Algorithms and Data Structures (C++)

C++ exercises from the Algorithms and Data Structures course (1st year, 2nd semester, Computer Engineering).

Files are grouped by topic. Files that share a name with a `_v2`, `_v3`, ... suffix are different practice attempts at the same exercise.

| Folder | Contents |
|---|---|
| `01_pointers_and_dynamic_memory` | Pointers, `new`/`delete`, deep vs. shallow copy |
| `02_parameter_passing` | Pass by value, by reference and by pointer (variables and arrays) |
| `03_structs` | Defining and using `struct` |
| `04_strings` | `std::string` and `char` arrays |
| `05_c_arrays` | C-style arrays, 2D arrays, template functions |
| `06_std_array` | `std::array` container |
| `07_std_vector` | `std::vector`: insert, print, sum, average, remove (`removeX`, `delDup`) |
| `08_matrices` | Matrices with `vector<vector<int>>`: transpose, symmetric check, identity |
| `09_sorting_algorithms` | Bubble sort, `std::sort` with custom comparators, `isSorted` |
| `10_search_algorithms` | Linear search, binary search, `std::find` |
| `11_recursion` | Factorial, summation, product by repeated addition |
| `12_stack_linked_list` | Stack implemented as a linked list (push/pop at head) |
| `13_queue_linked_list` | Queue implemented as a linked list (insert at tail, remove at head) |
| `14_doubly_linked_list` | Doubly linked list (insert/remove at head, tail and position) |
| `15_std_forward_list` | `std::forward_list` container |
| `16_std_list` | `std::list` container |
| `17_binary_search_tree` | Binary search tree (insert and print) |
| `18_exam_exercises` | Exercises from past exams |

## Build

```bash
g++ -std=c++17 file.cpp -o program
```
