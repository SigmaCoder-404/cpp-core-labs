#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{10, 20, 30};
    
    //Before Reallocation
    int* result1 = &numbers[0];
    std::cout << "--- Before Reallocation ---" << std::endl;
    std::cout << "Address:  " << result1 << std::endl;
    std::cout << "Size:     " << numbers.size() << std::endl;
    std::cout << "Capacity: " << numbers.capacity() << std::endl;

    // Triggering the reallocation threshold
    numbers.push_back(40);

    //After Reallocation
    int* result2 = &numbers[0];
    std::cout << "\n--- After Reallocation ---" << std::endl;
    std::cout << "Address:  " << result2 << std::endl;
    std::cout << "Size:     " << numbers.size() << std::endl;
    std::cout << "Capacity: " << numbers.capacity() << std::endl;

    std::cin.get();
    return 0;
}
