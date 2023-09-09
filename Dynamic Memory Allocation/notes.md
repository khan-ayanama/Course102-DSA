# Notes

## Return by reference

```c++
    #include <iostream>

    // Function to return a reference to an integer
    int& returnByReference(int &x) {
        x += 10;  // Modify the original value
        return x; // Return a reference to the modified value
    }

    int main() {
        int num = 5;
        int &result = returnByReference(num);

        std::cout << "Modified value: " << result << std::endl; // Output: 15
        std::cout << "Original value: " << num << std::endl;    // Output: 15, since 'num' was modified

        result = 30; // Modifying 'result' also modifies 'num'

        std::cout << "Modified value: " << num << std::endl;    // Output: 30, since 'num' was modified through 'result'

        return 0;
    }

```

* Note: In this avoid declaring local variable inside the function as it is declared locally you won't be able to access it outside the function.

```c++
    int& returnByReference(int &x) {
        // Here num is declared locally it can't be access outside the function
       int num = x =10;
       return num;
    }
```

## To delete in Dynamic memory allocation

```delete keyword

    int *num = new int;
    delete num;
    if array:
        delete []num
```

## What is void pointer

## What is Address typecasting

## Dynamic memory allocation of 2-D arrays

## Jaggered Array --> Dynamically
