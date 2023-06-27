/*Write a program in C++ to print Floyds Triangle*/ 

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,n,k;

    k=1;

    cout<<"Enter the number of lines: \t";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    getch();
    return 0;
}
