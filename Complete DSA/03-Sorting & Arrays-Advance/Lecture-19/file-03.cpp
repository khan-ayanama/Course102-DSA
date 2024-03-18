#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Vector

    // Declaring Vector
    vector<int> num;

    // Declaring vector when you already know size and with certain element
    vector<int> num2(4,2);

    cout<<"Printing num2: ";
    for (int i:num2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // Copying vector into another
    vector<int> num3(num2);

    cout<<"Copied Element: ";
    for(int i:num3){
        cout<<i<<" ";
    }
    cout<<endl;

    // Size of a vector --> How many elements
    cout<<"Size of vector: "<<num.size()<<endl;

    // Capacity --> Memory allocated for vector
    cout<<"Capacity: "<<num.capacity()<<endl;

    // Adding Element at last
    num.push_back(2);
    num.push_back(5);
    num.push_back(28);

    // Accesing Eleement
    cout<<"Front element: "<<num.front()<<endl;
    cout<<"Back Element: "<<num.back()<<endl;

    // Deleting Element from back
    num.pop_back();

    // Size of vector
    int size = num.size();

    for (int i = 0; i < size; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    
}