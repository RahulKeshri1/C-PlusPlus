#include<iostream>
#include<conio.h>
using namespace std;
int pallindrome(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<"  ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        for(int l=2;l<=i;l++)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
};
int main()
{
    int i;
    cout<<"Enter the number of lines: \t";
    cin>>i;
    pallindrome(i);
    getch();
    return 0;
}