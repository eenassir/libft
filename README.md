### 📚 libft – 42 Project

## 📌 Description

libft is a foundational project at 1337 / 42 Network that consists of recreating a custom C library by reimplementing standard C functions and building additional utility functions.
The goal of this project is to strengthen understanding of C programming, memory management, and low-level system behavior, while enforcing strict coding standards and good software practices.

## 🎯 Objectives

- Understand how standard C library functions work internally

- Master memory allocation and pointer manipulation

- Learn to write reusable, clean, and well-structured C code

- Respect the 42 Norm and project constraints

## 🛠️ Functions Implemented

# Part 1 – Libc Functions

</> Reimplementation of standard C library functions such as:

- ft_memset

- ft_bzero

- ft_memcpy

- ft_memmove

- ft_strlen

- ft_strlcpy

- ft_strlcat

- ft_strncmp

- ft_strchr

- ft_strrchr

- ft_strnstr

- ft_atoi

- ft_isalpha, ft_isdigit, ft_isalnum

- ft_isascii, ft_isprint

- ft_toupper, ft_tolower

- ft_calloc

- ft_strdup

# Part 2 – Additional Functions

</> Utility functions not found in libc:

- ft_substr

- ft_strjoin

- ft_strtrim

- ft_split

- ft_itoa

- ft_strmapi

- ft_striteri

- ft_putchar_fd

- ft_putstr_fd

- ft_putendl_fd

- ft_putnbr_fd

# Bonus Part – Linked List Functions

</> Implementation of basic linked list utilities:

- ft_lstnew

- ft_lstadd_front

- ft_lstadd_back

- ft_lstsize

- ft_lstlast

- ft_lstdelone

- ft_lstclear

- ft_lstiter

- ft_lstmap

## 🧪 Compilation & Usage

# Build the library
    make

This will generate:

libft.a

Use it in your project

#include "libft.h"

Compile with:

gcc main.c libft.a

# 🧹 Makefile Rules

- make – compile the library

- make clean – remove object files

- make fclean – remove object files and libft.a

- make re – rebuild everything

## 📏 Coding Standard

- Written in C

- Complies with the 42 Norm

- No memory leaks

- No forbidden functions

## 👨‍💻 Author
EL MEHDI ENASSIRI
, 1337 School – 42 Network