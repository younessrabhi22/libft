# Libft

A clean and optimized re‑implementation of essential C standard library functions, developed as part of the 42 School curriculum. The goal of this project is to build a personal, reliable library that can be reused in all future C projects.

## 📌 Overview

Libft recreates key standard functions for handling memory, strings, characters, numbers, and basic data operations. This project builds a strong foundation in low‑level C programming, pointer manipulation, and clean code design.

## ✨ Features

### 🔹 Memory Functions

* `memset` — Fill memory with a value
* `bzero` — Zero‑initialize memory
* `memcpy`, `memmove` — Copy memory safely
* `memcmp`, `memchr` — Compare or search in memory

### 🔹 String Handling

* `strlen`, `strlcpy`, `strlcat` — Length and safe copying
* `strchr`, `strrchr`, `strncmp` — Character and substring search

### 🔹 Character Checks & Conversions

* `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`
* `toupper`, `tolower`

### 🔹 Numeric & Utility Functions

* `atoi` — Convert string to integer
* `calloc` — Memory allocation with zeroing
* `strdup` — Duplicate strings

### 🔹 Additional Custom Functions

* `substr` — Extract substring
* `strjoin` — Join two strings
* `strtrim` — Trim characters from both ends
* `split` — Split string by delimiter
* `itoa` — Convert integer to string
* `strmapi`, `striteri` — Apply function to each character

---

## 📂 Project Structure

```
libft/
│── libft.h
│── Makefile
│── ft_*.c
```

---

## 🛠️ Compilation

Generate the static library:

```
make
```

This creates **libft.a**, ready to be linked:

```
cc main.c libft.a -o program
```

Include it in your code:

```c
#include "libft.h"
```

---

## 🎯 What I Learned

* Understanding the internal behavior of essential C library functions
* Mastering pointers and memory manipulation
* Efficient handling of strings and dynamic allocation
* Writing modular, clean, and norm-compliant C code
* Structuring a reusable library for future projects

### 🧰 🟦 What I Learned About Makefiles

Working on Libft taught me how to build a solid Makefile — a skill that becomes **critical** in large-scale C projects.

#### 🔹 1. Automating Compilation

Makefiles automate all compilation steps:

* Collects all `.c` files automatically
* Compiles only modified files
* Generates the final `libft.a` cleanly

This saves time, improves consistency, and reduces human errors.

#### 🔹 2. Using Standard Targets

I learned how to create professional build targets:

* `make` → build the library
* `make clean` → remove object files
* `make fclean` → full clean (objects + library)
* `make re` → rebuild everything

These are the **exact same targets** used in 42’s major projects (Minishell, Cub3D…).

#### 🔹 3. Pattern Rules & Automatic Variables

I learned to use powerful Makefile variables:

* `$@` → target name
* `$<` → first dependency
* `$^` → all dependencies

These make the Makefile shorter, smarter, and easier to maintain.

#### 🔹 4. Object Files = Faster Builds

By generating `.o` files, the project becomes:

* Faster to compile (only changes are recompiled)
* Easier to debug
* Cleaner and more scalable

Big projects with dozens of `.c` files rely on this.

#### 🔹 5. Portability & Clean Structure

A good Makefile ensures:

* No hard-coded compilation commands
* No manual file handling
* Works on any machine, on any evaluator account

This makes your project more professional and reliable.

#### 🔹 6. Preparing for Larger 42 Projects

Makefile knowledge becomes essential for:

* **ft_printf**
* **get_next_line**
* **so_long**
* **minishell**
* **cub3d**
* **philosophers**

These projects rely heavily on clean structure and scalable build systems.

## 📄 License

You may use or modify this project freely.

---

Feel free to ⭐ the repo and explore improvements!
