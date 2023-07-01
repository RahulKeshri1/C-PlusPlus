/*Write a Program in C++ to check whether the Number is Armstrong or Not
==> An armstrong number is any number of n digits 
which is equal to the sum of nth power of digits in the number*/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//Function to check Armstrong.
int armstrong(int n)
{
    int i,rem,num,org,len;
    org=n;
    num=0;
    len=to_string(n).length();
    while(n>0)
    {
        rem=n%10;
        num=num+pow(rem,len);
        n=n/10;
    }
    if(org==num)
        cout<<"Entered Number is an Armstrong Number!!";
    else
        cout<<"Entered Number is not an Armstrong Number";
    return 0;
};

int main()
{
    int i;
    cout<<"Enter the No. to check for Armstrong: \t";
    cin>>i;
    armstrong(i);
    getch();
    return 0;
}