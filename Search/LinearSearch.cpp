/*Write a Program in C++ to Implement Linear Search.*/
/*Linear Search is an algorithm in which key is compared to every elements of the array.
It's time complexity is O(n).*/


#include<iostream>
#include<conio.h>
using namespace std;

//Function to Implement Linear Search.
int LinearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
            return i+1;
    }
    return -1;
};

int main()
{
    int size;
    cout<<"Enter the Size of the Array:\t";
    cin>>size;

    int arr[size];
    cout<<"Enter the Elements in the Array:\t";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element you want to search in the Array:\t";
    cin>>key;

    cout<<key<<" is Present at ";
    cout<<LinearSearch(arr,size,key);
    cout<<" Position.";
    getch();
    return 0;
}