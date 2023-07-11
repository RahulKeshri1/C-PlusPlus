/*Write a Program in C++ to Implement Selection Sort.

In this sorting technique we sort the elements by picking the smallest/largest
number and swap it from the starting element step by step and after all the elements are swaped with the smallest 
the resultant array is get sorted.
It's time complexity is O(n^2).*/

#include<iostream>
#include<conio.h>

using namespace std;

string SelectionSort(int arr[],int size)
{
    int temp,i;
    for(i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return "";
};

int main()
{
    int size;
    cout<<"Enter the size of the Array.:\t";
    cin>>size;

    int arr[size];
    cout<<"Enter the Elements in the Array:\t";
    for(int i=0;i<size;i++)
        cin>>arr[i];

    cout<<"After sorting the Array :\t";
    cout<<SelectionSort(arr,size);
    getch();
    return 0;
}