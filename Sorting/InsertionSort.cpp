/*Write a Program in C++ to Implement Insertion Sort.

-Notes----------------------------------------------------------------------------------------------------
⇒In this sorting technique the algorithm is 
    to insert an element from unsorted array to its correct position in sorted array.

⇒It's time complexity is O(n^2).
---------------------------------------------------------------------------------------------------------*/

#include<iostream>
#include<conio.h>
using namespace std;

//Function to Implement Insertion Sort.
string InsertionSort(int arr[],int size)
{
    int i;
    for(i=1;i<size;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";

    return "";
};

int main()
{
    int size;
    cout<<"Enter the size of the Array.:\t";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the Array.:\t";
    for(int i=0;i<size;i++)
        cin>>arr[i];

    cout<<"After sorting the Array.:\t";
    cout<<InsertionSort(arr,size);

    getch();
    return 0;
}