#include <iostream>
using namespace std;
int main()
{
    // Pattern-01
    // int n = 3;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<char('A'+i)<<" ";
    //     }
    //     cout<<endl;
    // }


    // Pattern-02
    // int n = 3;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<char('A'+j)<<" ";
    //     }
    //     cout<<endl;
    // }

    // Pattern-03
    // int n = 3;
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<char('A'+count)<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // Pattern-04
    // int n = 3;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<char('A'+j+i)<<" ";
    //     }
    //     cout<<endl;
    // }

    // Pattern-05
    // int n = 3;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<char('A'+i-1)<<" ";
    //     }
    //     cout<<endl;
    // }

    // Pattern-06
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<char('D'-i+j)<<" ";
        }
        cout<<endl;
    }
    
}