#include <iostream>
using namespace std;
int main()
{
    // Pattern-01
    // int num = 4;
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }

    // Pattern-02
    // int num = 4;
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
        
    // }

    // Pattern-03
    // int n = 4;
    // int count = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // Pattern-04
    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<i+j-1<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // Pattern-05
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
    
    
}