/*Write a program in C++ to revers a number taken as input from the user.*/

#include<iostream>
#include<conio.h>
using namespace std;

//Function to reverse a number
int reverse(int n)
{
    int i,size,rem,num,org;
    num=0;
    org=n;
    size=to_string(n).length();
    for(i=0;i<=size;i++)
    {
        rem=n%10;
        num=num*10+rem;
        n=n/10;
    }

    cout<<"Entered Number is:\t"<<org<<"\n"<<"After reversing the number is: \t"<<num;
    return 0;
};

int main()
{
    int i;
    cout<<"Enter the Number you want to reverse:\t";
    cin>>i;
    reverse(i);
    getch();
    return 0;
}