#include <iostream>
using namespace std;
int main(){
    // SWITCH STATEMENT
    // int number = 13;

    // switch (number)
    // {
    // case 1:
    //     cout<<"Number is One"<<endl;
    //     break;
    // case 2:
    //     cout<<"Number is Two"<<endl;
    //     break;
    // case 3:
    //     cout<<"Number is Three"<<endl;
    //     break;
    // case 4:
    //     cout<<"Number is Four"<<endl;
    //     break;
    
    // default:
    //     cout<<"Invalid Entry"<<endl;
    //     break;
    // }

    // Total Minimium Notes in sum Total of sumTotal
    int sumTotal = 1330;
    switch (sumTotal)
    {
    case 1330:
        cout<<"Total number of Notes of 500 is "<<sumTotal/500<<endl;
        sumTotal = sumTotal%500;
    case 2:
        cout<<"Total number of Notes of 200 is "<<sumTotal/200<<endl;
        sumTotal = sumTotal % 200;
    case 3:
        cout<<"Total number of Notes of 100 is "<<sumTotal/100<<endl;
        sumTotal = sumTotal % 100;
    case 4:
        cout<<"Total number of Notes of 50 is "<<sumTotal/50<<endl;
        sumTotal = sumTotal % 50;
    case 5:
        cout<<"Total number of Notes of 20 is "<<sumTotal/20<<endl;
        sumTotal = sumTotal % 20;
    case 6:
        cout<<"Total number of Notes of 10 is "<<sumTotal/10<<endl;
        break;
    
    default:
        cout<<"Invalid Data"<<endl;
        break;
    }
}