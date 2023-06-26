#include<iostream>
#include<conio.h>
using namespace std;
int rhombus(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
            cout<<" ";
        for(int j=1;j<=n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
};
int main()
{
    int i;
    cout<<"Enter the width of the rhombus: \t";
    cin>>i;
    rhombus(i);
    getch();
    return 0;
}