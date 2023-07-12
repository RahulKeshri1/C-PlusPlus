/*Write a Program in C++ to find all the possible sub arrays in the given array and print their Sum respectively.
-Notes-----------------------------------------------------------------------------------------------------------
⇒Sub array: Sub arrays are a part of an array.
    ⇒Formula=nC2 + n=n(n+1)/2
    Example:- arr[3]={5,6,8}
            sub arrays are: 5   5 6     5 6 8       6       6 8     8   
                            1    2        3         4        5      6
            ∵Here Total No. of elements are 3.
            ∴Total No. of sub arrays are 6{according to formula}.
⇒It is continuous part of the array. It can not be broken.
-----------------------------------------------------------------------------------------------------------------*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the Array.:\t";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements in the Array.:\t";

    int i,j,sum,k,counter=1;
    for(i=0;i<size;i++)
        cin>>arr[i];

    cout<<"Total Sub Arrays are:\t"<<(size*(size+1)/2)<<endl;
    
    for(j=0;j<size;j++)
    {
        
        for(i=j;i<size;i++)
        {
            sum=0;
            cout<<counter<<" Sub array:\t";
            
            for(int k=j;k<=i;k++)
            {
                cout<<arr[k]<<" ";
                sum=sum+arr[k];
            }
            counter++;
            cout<<endl<<"And their sum:-\t"<<sum<<endl;
        }
    }
    getch();
    return 0;
}