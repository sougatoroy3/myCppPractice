// the keyword 'struct' is used 

#include<iostream>
using namespace std;

struct Person
{
    char name[100];
    int age;
    double salary;
};

int main()
{
    Person p1;
    cout<<"Enter the person's Details as follows "<<endl<<"Name - "<<endl;
    cin.getline(p1.name,100);

    cout<<"Age - "<<endl;
    cin>>p1.age;

    cout<<"Salary - "<<endl;
    cin>>p1.salary;

    cout<<"PERSON DETAILS ARE AS FOLLOWS: "<<endl;
    cout<<"NAME   -> "<<p1.name<<endl;
    cout<<"AGE    -> "<<p1.age<<endl;
    cout<<"SALARY -> "<<p1.salary<<endl;

    return 0;
}