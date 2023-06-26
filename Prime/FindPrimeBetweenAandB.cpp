#include<iostream>
#include<conio.h>
using namespace std;
int prime(int a,int b)
{
    int i,j,count=0;
    cout<<"Prime Numbers between "<<a<<" and "<<b<<" excluding "<<a<<" and "<<b<<" are :";
    for(i=a+1;i<b;i++)
    {
        count=0;
        if(i==3)
            count++;

        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==0)
            cout<<i<<" ";
    }
    return 0;
};

int main()
{
    int x,y;
    cout<<"Enter the two numbers between you want to find the Prime Numbers: \t ";
    cin>>x>>y;
    prime(x,y);
    getch();
    return 0;
}