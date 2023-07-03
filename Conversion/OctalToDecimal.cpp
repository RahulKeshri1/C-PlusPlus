/*Write a Program in C++ to convert Octal Number into Decimal Number.*/

#include<iostream>
#include<conio.h>
using namespace std;

//Function to calculate the power.
int pow(int n,int p)
{
    int power=1;
    for(int i=1;i<=p;i++)
    {
        power=power*n;
    }
    return power;
};

//Function to convert Octal Number into Decimal Number.
int convert(int n)
{
    int size,i,rem,sum;
    sum=0;
    size=to_string(n).length();
    for(i=0;i<size;i++)
    {
        rem=n%10;
        sum=sum+rem*pow(8,i);
        n=n/10;
    }
    return sum;
};

int main()
{
    int i,org;
    cout<<"Enter the No. in Octal form to convert into Decimal form : \t";
    cin>>i;
    org=i;
    cout<<"Entered No. in Octal Format is:\t "<<org<<"\n After convertion into Decimal Form :\t"<<convert(i);
    getch();
    return 0;
}
