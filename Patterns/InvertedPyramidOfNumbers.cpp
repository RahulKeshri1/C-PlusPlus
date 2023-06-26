#include<iostream>
#include<conio.h>
using namespace std;

int Pyramid(int n)
{
    for(int i=1;i<=n;i++)
    {
        int k=1;
        for(int j=n;j>=i;j--)
        {
            cout<<k++<<" ";
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
    Pyramid(i);
    getch();
    return 0;
}