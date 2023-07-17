/*Write a Program in C++ to find the length of the longest Arithmetic Array in the given Array.
-Notes-----------------------------------------------------------------------------------------------------------
⇒An Arithmetic Array is an array that contains at least two integers and the differences 
    between consecutive integers are equal. For example, [9,10],[3,3,3], and [9,7,5,3] are
    arithmetic arrays, while [1,3,3,7],[2,1,2], and [1,2,4] are not arithmetic arrays. 
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

    int i;
    for(i=0;i<size;i++)
        cin>>arr[i];

    int pd,curr=2,ans=0;   //pd=present difference. curr=current sub array length. ans=maximum sub array length till now.
    for(i=0;i<size;i++)
    {
        pd=arr[i]-arr[i+1];
        if(arr[i+1]-arr[i+2]==pd)
        {
            curr++;
        }
        else
        {
            curr=2;
        }
        ans=max(ans,curr);
    }

    cout<<"Length of the longest Arithmetic Sub Array.:\t"<<ans;

    getch();
    return 0;
}