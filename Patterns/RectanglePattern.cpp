#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,row,col;

    cout<<"Enter the no. of rows \t";
    cin>>row;
    cout<<"Enter the no. of columns \t";
    cin>>col;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}