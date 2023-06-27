/* Write a program in C++ to print 0-1 pattern in pyramidal structure */

#include<iostream>
#include<conio.h>
using namespace std;
int Ol(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
                cout<<"1 ";
            else
                cout<<"0 ";
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
    Ol(i);
    getch();
    return 0;
}
