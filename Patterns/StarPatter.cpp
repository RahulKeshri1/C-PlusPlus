#include<iostream>
#include<conio.h>
using namespace std;
int star(int n)
{
    int i,j,k,l;
    for(i=1;i<=n;i++)    //Upper Portion
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(k=1;k<=2*i-1;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(k=2*i-1;k>=1;k--)
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
    cout<<"Enter the No. of lines: \t";
    cin>>i;
    star(i);
    getch();
    return 0;
}