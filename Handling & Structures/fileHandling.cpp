#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char arr[100];
    cout<<"Enter name and age- "<<endl;
    cin.getline(arr,100);
    // in case we only cin, anything after a space is ignored that's why we used this command. You may check it for yourself.


    // FILE WRITE OPERATION
    // like we use int x or  float y
    ofstream myfile("xyz.txt", ios::app); // ofstream data type and myfile is name
    //ios::app to append so that the prev contents aren't overwritten
    myfile<<arr;
    myfile.close();
    cout<<"File write operation performed successfully."<<endl;


    // FILE READ OPERATION
    cout<<"FILE READ OPERATION"<<endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1, 100);
    cout<<"array content: "<<arr1<<endl;
    cout<<"File Read Operation successful."<<endl;
    obj.close();


    return 0;
}