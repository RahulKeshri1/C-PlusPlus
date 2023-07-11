/*Write a Program in C++ to Implement Bubble Sort.

-Notes----------------------------------------------------------------------------------------------------
⇒It is named "Bubble Sort" because in this algorithm 
    the greatest element comes at the last(top) like a bubble in the water(liquid).

⇒In this sorting technique the algorithm is 
    to repetedly swap two adjacent elments if they are in wrong order.

⇒It's time complexity is O(n^2).
---------------------------------------------------------------------------------------------------------*/

#include<iostream>
#include<conio.h>
using namespace std;

string BubbleSort(int arr[],int size)
{
    int i;

    int counter=1;
    while(counter<size-1)    
    {
        for(i=0;i<size-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return "";
};

int main()
{
    int size;
    cout<<"Enter the size of the Array.:\t";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements in the Array:\t";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    
    cout<<BubbleSort(arr,size);

    getch();
    return 0;
}