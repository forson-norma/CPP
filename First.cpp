// Deals with Inheritance and Polymorphism
// 1. If the base class had a constructor, create one for Derived class

#include <iostream>

using namespace std;

class Norma
{
    public:
    string name;
    int age;
    Norma(string Name, int Age)
    {
        name = Name;
        age = Age;
    }

    virtual void echoDeets()
    {
        cout<<"s'up"<<endl;
    }
};

class subNorm : public Norma
{
    string middleName;
    public:
    subNorm(string Name, int Age, string midName): Norma(Name, Age)
    {
        middleName = midName;
    }
    void echoDeets()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<middleName<<endl;
    }
};


int main()
{
    subNorm Norms("Norma", 22, "NanaYaa");
    Norma* baseClass = &Norms;

    baseClass->echoDeets();


    return 0;

}