// Preprocessor directive
#include <iostream> // Input/Output

// Using the std namespace all over the program
using namespace std;

// Main Program starts from here
int main(){
    // Rules from Variable naming
    // 1. Can contain alphabets, numbers and underscores
    // 2. Can't start with numbers
    // 3. Can't use reserve keywords (eg:- int, cout etc)
    // 4. Case Sensitive
    // 5. Can't contain special symbols like %, #, $ etc


    // SIZE OF VARIABLES
    int num = 4;
    int size = sizeof(num);
    cout<<"Size of num is "<<size<<endl;
}