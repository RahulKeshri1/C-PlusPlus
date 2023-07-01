/*Write a program in C++ to take a number as input from the user and check whether the number is Prime or Not*/

#include<iostream>
#include<conio.h>
using namespace std;

int check(int n)
{
    int i,count=0;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count!=0)
        cout<<n<<" is not a Prime Number";
    else
        cout<<n<<" is a Prime Number";
    return 0;
};

int main()
{
    int x;
    cout<<"Enter the number you want to check for Prime Number : \t";
    cin>>x;
    check(x);
    getch();
    return 0;
}