/*Write a program in C++ to convert Decimal Number into HexaDecimal Number.*/

#include<iostream>
#include<conio.h>
using namespace std;

//Function to convert Decimal Number into HexaDecimal Number.
int convert(int n)
{
    int i,arr[100],k;
    int org=n;
    k=0;

    /*to divide the number and store the remainder*/
    for(i=0;n>0;i++)
    {
        arr[i]=n%16;
        n=n/16;
        k++;
    }

    cout<<"Entered No. in Decimal Format is:\t "<<org<<"\n After convertion into HexaDecimal Format :\t";

    /*to print the remainder from bottom to top*/
    for(i=k-1;i>=0;i--)
    {
        switch(arr[i])
        {
            case 10: 
                    cout<<"A";
                    break;
            case 11: 
                    cout<<"B";
                    break;
            case 12: 
                    cout<<"C";
                    break;
            case 13: 
                    cout<<"D";
                    break;
            case 14: 
                    cout<<"E";
                    break;
            case 15: 
                    cout<<"F";
                    break;
            default:
                    cout<<arr[i];
        }
    }
    return 0;
};

int main()
{
    int i;
    cout<<"Enter the Number in Decimal Form to convert into HexaDecimal Form:\t";
    cin>>i;
    convert(i);
    getch();
    return 0;
}