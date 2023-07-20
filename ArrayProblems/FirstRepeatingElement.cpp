/*Write a Program in C++ to find the index of the First Repeating element in an array.
Problem:
    ⇒Given an array arr[] of size N. The task is to find the first repeating element in the array of 
    integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.*/


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
    int i,j;
    for(i=0;i<size;i++)
        cin>>arr[i];

    for(j=0;j<size;j++)
    {
        for(i=j+1;i<size;i++)
        {
            if(arr[j]==arr[i])
            {
                cout<<"Position of the first element which is repeating is:\t"<<j+1<<" and the number is:\t"<<arr[j];
                return 0;
            }
        }
    }
    cout<<"There is no repeating element in this list.";
    getch();
    return 0;
}