# AlphaHeap C Library

![AlphaHeap Logo](Assets/alphaheap_logo.jpg)

A lightweight C library designed to make dynamic memory allocation easier and safer, giving developers full control over custom error handling.

## Features
- Simplified memory allocation for arrays.
- Flexible custom error handling (lets the developer define how and where errors are reported).
- Clean separation of concerns with modular headers.

## New Update - v1.1a
- Added new function : `auto_free()`.
- Added test folder.
- Make the code clean and easier to read.
- Check out the [Usage Manual](Usage.md) to know more.
---

## Project Structure
```text
    AlphaHeap/
    ├── Assets/
    │   └── alphaheap_logo.jpg   
    ├── src/
    │   ├── aheap.c
    │   └── aheap.h
    ├── Test/
    │   ├── htest
    │   ├── test.c
    │   └── test.exe
    ├── .gitignore
    ├── LICENSE
    ├── Usage.md
    └── README.md
```

---

## How to Install
1. Clone the project using git
```bash
git clone https://github.com/ahmedtekouk/AlphaHeap.git
```
2. Go to the project directory
4. Now you can use the files `aheap.h` and `aheap.c` in your C project
5. Check out the [Usage Tutorial](Usage.md) to learn how to use the library
