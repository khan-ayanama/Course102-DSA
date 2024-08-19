#include <iostream>
using namespace std;

// global variable
int score = 15;

void a(int& i){
    cout<<score<<endl;
}


int main()
{
    // GLOBAL VARIABLE
    // A variable shared between functions
    // Using global variable is bad practice because it can affect the whole program if something changes.
    
    cout<<score<<endl;
}