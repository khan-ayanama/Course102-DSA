#include <iostream>
using namespace std;
int main()
{
    // Pattern-01
    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }

    // Pattern-02
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k<<' ';
        }
        for (int l = 1; l <= i-1; l++)
        {
            cout<<i-l<<" ";
        }
        cout<<endl;
    }
    
    
}