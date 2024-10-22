#include <iostream>
using namespace std;

int main()
{
    // PRINTING PATTERN OF STARS
    int num = 4;
    int i = 0;
    while (i < num)
    {
        int j = 0;
        while (j < num)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}