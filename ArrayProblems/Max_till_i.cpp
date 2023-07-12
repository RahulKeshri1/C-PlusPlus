/*Write a Program in C++ to find the maximum till i.
Problem:
    Given an array a[] of size n. For every i from 0 to n-1 
    output max(a[0],a[1],...,a[i]).
--Notes----------------------------------------------------------------------
⇒Properties:-
    ⇒Max till i become constant or increases as the value of i increases.
    ⇒It is non decreasing in nature.
-----------------------------------------------------------------------------*/
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
    
    int i;

    for(i=0;i<size;i++)
        cin>>arr[i];
    
    int mx=-199999;
    for(i=0;i<size;i++)
    {
        mx=max(arr[i],mx);
        cout<<"Maximum elements in the array till "<<i<<"th position is:\t";
        cout<<mx;
        cout<<endl; 
    }
    getch();
    return 0;
}