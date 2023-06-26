#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,k,n;

    cout<<"Enter the number of lines: \t";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {                             //if(j<=n-i)
            cout<<" ";                //    cout<<" ";
        }                             //else
        for(k=1;k<=i;k++)             //    cout<<"*";
        {
            cout<<"*";
        }
        cout<<endl;
    }
    getch();
    return 0;
}