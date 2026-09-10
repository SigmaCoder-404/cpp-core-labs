# C++ Core Inventory Management System

A high-performance command-line inventory tool written in modern C++ showcasing low-level memory optimizations, safe iterator mechanics, and data structures.

##  Core Features & Concepts Demonstrated
- **Low-Level Memory Optimization:** Utilizes `std::vector::reserve` to prevent costly vector reallocations and preserve cache locality.
- **Modern C++ Standards:** Implements `std::string_view` for efficient, zero-allocation string passing.
- **Safe Iteration Control:** Handles boundary-safe element erasure through precise mutable/constant iterator workflows (`cbegin`, `cend`, `rbegin`).

##  Performance Analysis
This system explicitly bypasses the classic C++ Iterator Erasure trap by utilizing non-invalidating element deletion algorithms. It computes continuous total calculations at $O(N)$ efficiency with minimal memory overhead.

## Getting Started (Linux)

### Prerequisites
Make sure you have a modern compiler like `g++` installed:
```bash
sudo apt update && sudo apt install build-essential
```

### Build & Run
1. Clone the repository:
   ```bash
   git clone https://github.com
   ```
2. Compile the source code:
   ```bash
   g++ -std=c++20 main.cpp -o inventory
   ```
3. Run the executable:
   ```bash
   ./inventory
   ```

