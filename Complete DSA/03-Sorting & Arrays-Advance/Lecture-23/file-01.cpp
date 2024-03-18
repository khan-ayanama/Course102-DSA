#include <iostream>
using namespace std;
int main()
{
    // 2-D Arrays

    // Create 2-D array
    // int arr[row][col]

    // Initialization of an array
    // M-1
    int arr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // M-2
    int arr3[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // M-3
    int arr[3][4];

    // Input in 2-D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output in 2-D Array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}