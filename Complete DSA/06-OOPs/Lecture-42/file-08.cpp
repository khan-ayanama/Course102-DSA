#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    Hero()
    {
        cout << "Simple Constructor Called" << endl;
        name = new char[100];
    }

    // Paramentized consturcot
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor (shallow copy)
    // Hero(Hero& temp){
    //     cout<<"Copy constructor called"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    // copy constructor (Deep copy)
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << endl;
        cout << "[ Name: " << this->name << ", ";
        cout << "health: " << this->health << ", ";
        cout << "level: " << this->level << " ]";

        cout << endl;
    }
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int staticFunction()
    {
        cout << "RAndom function" << endl;
    }
};

int Hero::timeToComplete = 5;
int main()
{
    // Static Keyword
    cout << Hero::timeToComplete << endl;
    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;
    // I is not recommended
    b.timeToComplete = 10;
    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;

    // Static function
    // You can direcly call these funciton
    // they dont' have this keyword
    Hero::staticFunction();
}