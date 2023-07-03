/*Write a program in C++ to convert Decimal Number into Binary Number.*/

#include<iostream>
#include<conio.h>
using namespace std;
int arr[100];

/*Function to convert Decimal No. into Binary No.*/
int convert(int n)
{
    int i=0;     //to increase the index of the array;
    int org=n;   //to store the original number;
    
    /*to divide the number and store the remainder*/
    do
    {
        arr[i]=n%2;  //to store the remainder;
        n=n/2;
        i++;
    }while(n!=0);

    cout<<"Entered No. in Decimal Format is:\t "<<org<<"\n After convertion into Binary:\t";

    /*to print the remainder from bottom to top*/
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
    return 0;
};

int main()
{
    int i;
    cout<<"Enter the No. in Decimal form to convert into Binary form : \t";
    cin>>i;
    convert(i);
    getch();
    return 0;
}