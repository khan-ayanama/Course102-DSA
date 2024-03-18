#include <iostream>
#include <map>
#include <string>

int main()
{
    // Create a map of strings to integers (key, value)
    std::map<std::string, int> fruits;

    // Insert elements using [] operator (similar to associative arrays)
    fruits["apple"] = 10;
    fruits["banana"] = 5;
    fruits["orange"] = 12;
    fruits["banana"] = 7; // Updates the value for existing key

    // Access elements using key
    int apple_count = fruits["apple"];
    std::cout << "Number of apples: " << apple_count << std::endl;

    // Check if a key exists
    if (fruits.count("mango") > 0)
    {
        std::cout << "Mango is in the map." << std::endl;
    }
    else
    {
        std::cout << "Mango is not in the map." << std::endl;
    }

    // Iterate over elements using a range-based for loop (key-value pairs)
    for (const auto &fruit : fruits)
    {
        std::cout << fruit.first << ": " << fruit.second << std::endl;
    }

    // Remove an element using key
    fruits.erase("banana");

    return 0;
}
