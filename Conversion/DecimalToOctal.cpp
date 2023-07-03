/*Write a program in C++ to convert Decimal Number into Octal Number.*/

#include<iostream>
#include<conio.h>
using namespace std;
int arr[100];

/*Function to convert Decimal No. into Octal No.*/
int convert(int n)
{
    int org=n;
    int i,k=0;
    for(i=0;n>0;i++)
    {
        arr[i]=n%8;
        n=n/8;
        k++;
    }

    cout<<"Entered No. in Decimal Format is :\t "<<org<<"\n After convertion into Octal :\t";
    for(i=k-1;i>=0;i--)
    {
        cout<<arr[i];
    }
    return 0;
};

int main()
{
    int i;
    cout<<"Enter the Number in Decimal Form :\t";
    cin>>i;
    convert(i);
    getch();
    return 0;
}