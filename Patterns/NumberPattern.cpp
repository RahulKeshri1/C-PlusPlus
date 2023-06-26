#include<iostream>
#include<conio.h>
using namespace std;
int number(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
};
int main()
{
    int i;
    cout<<"Enter the No. of Lines: \t";
    cin>>i;
    number(i);
    getch();
    return 0;
}