#include<iostream>
#include<conio.h>
using namespace std;
int zigzag(int n)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)%4==0)
                cout<<"* ";
            else if(i==2 && j%4==0)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
};
int main()
{
    int i;
    cout<<"Enter the range: \t";
    cin>>i;
    zigzag(i);
    getch();
    return 0;
}