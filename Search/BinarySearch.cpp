/*Write a Program in C++ to implement Binary Search.*/
/*Binary Search is an algorithm in which we search for the key using divide an conquer method.
It's time complexity is O(log n){base of log is 2}.*/

#include<iostream>
#include<conio.h>
using namespace std;

//Function to Implement Binary Search.
int BinarySearch(int arr[],int size,int key)
{
    int index=0;
    int start=0;
    int last=size-1;
    while(start<=last)
    {
        int mid=(start+last)/2;
        if(arr[mid]==key)
            return mid+1;
        else if(arr[mid]>key)
            last=mid-1;
        else if(arr[mid]<key)
            start=mid+1;
    }
    return -1;
};

int main()
{
    int size;
    cout<<"Enter the size of the Array:\t";
    cin>>size;

    int arr[size];
    cout<<"Enter the Elements in the Array in sorted order:\t";
    for(int i=0;i<size;i++)
        cin>>arr[i];

    int key;
    cout<<"Enter the Number you want to search in the Array:\t";
    cin>>key;

    cout<<key<<" is present at ";
    cout<<BinarySearch(arr,size,key);
    cout<<" Position.";
    getch();
    return 0;
}