/* create an array of structures and 
accept input and display structure 
name-person datamember-name,age,salary*/

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
    Person p[100];

    cout<<"Enter Person detaails"<<endl;

    for(int i=0; i<2; i++)
    {
        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }

    cout<<"DETAILS"<<endl;
    for(int i=0; i<2; i++)
    {
        cout<<"DETAILS OF PERSON "<<(i+1)<<" ARE AS FOLLOWS "<<endl;
        cout<<"NAME   -> "<<p[i].name<<endl;
        cout<<"AGE    -> "<<p[i].age<<endl;
        cout<<"SALARY -> "<<p[i].salary<<endl;
    }
    return 0;
}