# memcheck

A C-based memory debugging tool using LD_PRELOAD.

## Goal

Build a tool that tracks memory allocations and helps
detect memory leaks in C programs.

## Planned Features

- Intercept malloc and free
- Track memory allocations
- Report outstanding allocations
- Support calloc and realloc
- Detect selected memory management errors
- Provide automated tests

## Project Structure

- src/: Main implementation
- tests/: Test programs
- NOTES.md: Development notes

## Status

Initial project setup completed.

