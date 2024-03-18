#include <iostream>
#include <set>

int main()
{
    // Create a set of integers
    std::set<int> numbers;

    // Insert elements
    numbers.insert(5);
    numbers.insert(3);
    numbers.insert(1);
    numbers.insert(5); // Duplicate ignored

    // Check if an element exists
    if (numbers.count(2))
    {
        std::cout << "2 exists in the set." << std::endl;
    }
    else
    {
        std::cout << "2 does not exist in the set." << std::endl;
    }

    // Access elements (not possible directly due to sorted order)

    // Print the size of the set
    std::cout << "Size of the set: " << numbers.size() << std::endl;

    // Iterate over elements using a range-based for loop
    for (int element : numbers)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Remove an element
    numbers.erase(3);

    // Check if the set is empty
    if (numbers.empty())
    {
        std::cout << "The set is now empty." << std::endl;
    }
    else
    {
        std::cout << "The set is not empty." << std::endl;
    }

    return 0;
}
