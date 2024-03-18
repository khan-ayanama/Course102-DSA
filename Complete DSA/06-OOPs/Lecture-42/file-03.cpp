#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    // Default Constructor
    Hero()
    {
        cout << "Contructor is called" << endl;
    }

    // Parametrized Constructor
    Hero(int value)
    {
        cout << "Parametrized contructor is called " << value << endl;
    }
};
int main()
{
    // Constructor
    // Constructor invokes at the time of object creation.
    // By default constructor created you don't need to declare manually if you don't want.

    // Creating constructor
    Hero *stark = new Hero;
    Hero *rogers = new Hero(42);
}