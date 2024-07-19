#include <iostream>
using namespace std;

void updateNumber(int &n){
    n++;
    cout<<"updated number: "<<n<<endl;
}
int main()
{
    int n = 5;
    updateNumber(n);
    cout<<"N: "<<n<<endl;
}