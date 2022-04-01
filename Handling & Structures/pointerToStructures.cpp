/* create a variable of struct type, 
create a pointer and point to it and 
use pointer to take input and 
display the output*/

#include<iostream>
#include<string> // to use the class string
using namespace std;

struct Person
{
    string name; 
    int age;
    double salary;
};

int main()
{
    Person p1;

    cout<<"Enter details of person"<<endl<<"Name "<<endl<<"Age "<<endl<<"Salary"<<endl;
    /*cin>>p1.name;
    cin>>p1.age;
    cin>>p1.salary;

    cout<<"DETAILS OF PERSON ARE AS FOLLOWS "<<endl;
    cout<<"NAME   -> "<<p1.name<<endl;
    cout<<"AGE    -> "<<p1.age<<endl;
    cout<<"SALARY -> "<<p1.salary<<endl;*/

    Person *ptr = &p1;

    cin>>ptr->name;
    cin>>ptr->age;
    cin>>ptr->salary;


    cout<<"DETAILS OF PERSON ARE AS FOLLOWS "<<endl;
    cout<<"NAME   -> "<<ptr->name<<endl;
    cout<<"AGE    -> "<<ptr->age<<endl;
    cout<<"SALARY -> "<<ptr->salary<<endl;
    return 0;
}