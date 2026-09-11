# Tracking C++ Vector Reallocation

I wrote this script to test how a vector changes its location in memory when it runs out of space. 

## How It Works
1. I created a vector with 3 numbers and printed its memory address (`0x598d9af25020`).
2. I added a 4th number using `push_back()`.
3. Because the vector was full, the OS moved everything to a new address (`0x598d9af25450`).

## The Dangling Pointer Problem
After the move, the old address was deleted. When I tried to read it anyway using my first pointer, it printed random garbage data: `-1730564315`. 

This proves why using `reserve()` is necessary when working with arrays that grow dynamically—otherwise, your pointers will point to dead memory and crash your app.
