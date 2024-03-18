#include <iostream>
using namespace std;
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
    // Static vs Dynamic Allocation

    // Static Allocation
    Student Naeem;
    Naeem.setRoll(55);
    Naeem.setSection('A');

    cout << "Roll is : " << Naeem.roll << endl;
    cout << "Section is " << Naeem.getSection() << endl;

    // Dynamically

    Student *Jameel = new Student;
    (*Jameel).setRoll(13);
    Jameel->setSection('M');

    cout << "Roll is " << (*Jameel).roll << endl;
    cout << "Section is " << Jameel->getSection() << endl;
}