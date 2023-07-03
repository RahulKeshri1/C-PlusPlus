/*Write a Program in C++
to find the sum of First n Natural Numbers.*/

#include<iostream>
#include<conio.h>
using namespace std;

int sum(int n)
{
    int tot=0;
    for(int i=1;i<=n;i++)
    {
        tot=tot+i;
    }
    return tot;
};

int main()
{
    int i;
    cout<<"Enter the last term till which you want to find the sum: \t";
    cin>>i;
    cout<<"Sum of "<<i<<" natural numbers is:\t"<<sum(i);
    getch();
    return 0;
}