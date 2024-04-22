#include <iostream>
using namespace std;
int main()
{
    // PATTERN PRINTING

    // 1. Pattern-01
    // int num = 4;
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 1; j <= num; j++)
    //     {
    //         cout<<j<<" ";
    //     }cout<<endl;
        
    // }

    // int num2 =  3;

    // for (int i = 1; i <= num2; i++)
    // {
    //     for (int j = 1; j <= num2*num2; j++)
    //     {
    //         cout<<j<<" ";
    //         if((j*j)%3==0) cout<<endl;
    //     }cout<<endl;
        
    // }
    


    // Pattern-02
    // int num = 3;
    // int count = 1;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num; j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }cout<<endl;
        
    // }

    // Pattern-03
    // int num = 3;
    // int count = 0;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num; j++)
    //     {
    //         cout<<(num*num) - count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
        
    // }
    
    // Last Pattern
    int num = 5;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num-i+1; j++)
        {
            cout<<j<<" ";
        }

        for (int k = 1; k <= i-1; k++)
        {
            cout<<"* ";
        }

        
        for (int k = 1; k <= i-1; k++)
        {
            cout<<"* ";
        }


        for (int j = 1; j <= num-i+1; j++)
        {
            cout<<num-j+1<<" ";
        }
        cout<<endl;
        
        
    }
    
    
}