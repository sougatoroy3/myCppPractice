#include<iostream>
using namespace std;

int main()
{
    int var=5;

    // datatype *pointername;
    // all of them have the same size of 2 bytes cause its saving the address itself
    int *ip;
    double *dp;
    float *fp;
    char *ch;
    //passing the variable
    ip=&var;
    cout<<"Variable value is "<<var<<endl;
    cout<<"Address in pointer is "<<ip<<endl;
    cout<<"Pointer pointing to value "<<*ip<<endl;

    // using pointer to change the value of var
    *ip=6;
    cout<<"Variable value is "<<var<<endl;
    cout<<"Address in pointer is "<<ip<<endl;
    cout<<"Pointer pointing to value "<<*ip<<endl;



}