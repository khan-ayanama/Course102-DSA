#include <iostream>
using namespace std;
int main()
{
    int amount = 1878;
    int Rs500, Rs200,Rs100, Rs50, Rs20, Rs1;

    switch (1)
    {
    case 1:
        Rs500 = amount/500;
        amount = amount%500;
        cout << "No of 500 Rupee =" << Rs500 << endl;
    case 2:
        Rs200 = amount/200;
        amount = amount%200;
        cout << "No of 200 Rupee =" << Rs200 << endl;
    case 3:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "No of 100 Rupee =" << Rs100 << endl;

    case 4:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "No of 50 Rupee =" << Rs50 << endl;

    case 5:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "No of 20 Rupee =" << Rs20 << endl;

    case 6:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "No of 1 Rupee =" << Rs1 << endl;
    }
    return 0;
}