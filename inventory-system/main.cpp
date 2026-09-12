#include <iostream>
#include <vector>
#include <string>
#include <string_view>


struct Item
{
    std::string name;
    int quantity;
    double price;
};


void findItem(const std::vector<Item>& inventory, std::string_view name)
{
    for(auto it = inventory.cbegin(); it != inventory.cend(); ++it)
    {
        if(it->name == name)
        {
            std::cout << "Found: " << name << std::endl;
            std::cout << "Quantity: " << it->quantity << std::endl;
            std::cout << "Price: " << "$" << it->price << std::endl;
        } 
    }
}




void printBackwards(const std::vector<Item>& inventory)
{
    for(auto it = inventory.rbegin(); it != inventory.rend(); ++it)
    {
        std::cout << it->name << std::endl;
    }
}



void findMiddleItem(const std::vector<Item>& inventory)
{
    auto middle = inventory.begin() + inventory.size() / 2;
    std::cout << middle->name << std::endl;
}





void removeNullQuantities(std::vector<Item>& inventory)
{
    auto it = inventory.begin();
    while (it != inventory.end())
    {
        if (it->quantity == 0)
        {
            it = inventory.erase(it);
        }
        else
        {
            ++it;
        }
    }
}




double totalInventoryValue(const std::vector<Item>& inventory)
{
    double total = 0.0;
    for(auto it = inventory.cbegin(); it != inventory.cend(); ++it) // Clean const_iterators
    {
        total += (it->quantity * it->price);
    }
    return total;
}



int main()
{
    std::vector<Item> inventory{
        {"Keyboard", 0, 45000},
        {"Mouse", 12, 15000},
        {"Monitor", 3, 180000},
        {"USB Cable", 0, 5000},
        {"Headphones", 7, 35000}
    };





    // findItem(inventory, "Monitor");


    // printBackwards(inventory);

    // findMiddleItem(inventory);




    // for(auto it = inventory.begin(); it != inventory.end(); ++it) {
    //    std::cout << it->name << " " << "Qty: " << it->quantity  << " " << "$" << it->price << std::endl;
    // }


    // auto it = inventory.begin();
    // std::cout << it->name << std::endl;
    // inventory.push_back({"Webcam", 4, 50000});
    //I dont think its still guaranteed because the array gets resized to acommadate new elements and the location is changed.


    // inventory.reserve(100);
    // std::cout << "new cap: " <<  inventory.capacity(); //100 if new_cap doesnt exceed this no reallocation happends


     removeNullQuantities(inventory);
    std::cout << "Total inventory value: " << "$" << totalInventoryValue(inventory);







   

    std::cin.get();

}
