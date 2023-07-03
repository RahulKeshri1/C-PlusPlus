/*Write a program in C++ to convert Binary No. into Decimal No.*/

#include<iostream>
#include<conio.h>
using namespace std;
int convert(int n)
{
    int size;
    int rem,i,j,p;
    int sum=0,org=n;
    size=to_string(n).length();  //to_string(num).length()=This is a function to find the length(No. of digits) of a number.
    for(int i=1;i<=size;i++)
    {
        p=1;
        for(j=2;j<=i;j++)
        {
            p=p*2;
        }
        
        rem=n%10;
        sum=sum+(rem*p);
        n=n/10;
    }
    cout<<"Entered No. is "<<org<<" after conversion in Decimal Format is: \t"<<sum;
    return 0;
};
int main()
{
    int i;
    cout<<"Enter the number in Binary Format to convert in Decimal Format: \t";
    cin>>i;
    convert(i);
    getch();
    return 0;
}