#include <iostream>
using namespace std;

class Hero
{
    // Properties
    int health;
};

class Student
{
public:
    int roll;

private:
    char section;

public:
    int getSection()
    {
        return section;
    }

    int getRoll()
    {
        return roll;
    }

    void setSection(char ch)
    {
        section = ch;
    }

    void setRoll(int rl)
    {
        roll = rl;
    }
};
int main()
{
    // OOPs --> It is a method of programming which ensures more readable, accessable and reusable code where instead of functions we create a class which stores varaibles and it's properties.

    // Class --> Class is a userdefined datatype which creates an instance or object
    // Object --> Property + Behaviour
    // Object is an instance of class

    // First Example
    Hero IronMan;
    cout << sizeof(IronMan) << endl;

    // Note: If class is empty it takes 1 byte of memory otherwise it will take memory of the datatypes which are initialize inside class but with little tweak, you can find it by studying padding and Greedy Algorithm
    // Padding and Greedy Alignment

    // Acess Modifiers --> It explains what properties can be access by certain part of class, It has three types:
    // 1. Private --> Only inside of class
    // 2. Public --> From anywhere
    // 3. Protected --> Inside class and subclass

    Student Jameel;

    // Accesing Roll number which is public
    Jameel.roll = 20;
    cout << "Roll: " << Jameel.roll << endl;

    // You can't access section because it's private
    // cout<<"Section: "<<Jameel.section<<endl;

    // Getters and Setters
    // Getters and Setters are the function which get the values from the class or set the value of the class

    Jameel.setRoll(55);
    cout << Jameel.getRoll() << endl;
}