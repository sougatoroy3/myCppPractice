#include<iostream>
using namespace std;

// 2D array initialization, take input, display output, add and sub

int main()
{
    int myArray[5][5]; // 5 rows and 5 columns normal declaration
    int myArray1[2][2]= {1,2,3,4}; //declaration with intitialization
    int myArray2[3][3]={{1,1,1},{3,3,3},{2,2,2}}; //declaration with intitialization

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<myArray2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter values for 5x5 matrix "<<endl;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>myArray[i][j];
        }
        cout<<endl;
    }
    cout<<"Values for 5x5 matrix is"<<endl;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<myArray[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}