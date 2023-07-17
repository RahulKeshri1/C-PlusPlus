/*Write a Program in C++ to find the No. of Record Breaking days.
Problem:
    You have been given the number of visitors at a local theme park on N consecutive days. The 
    number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the
    following conditions:
        ▪   The number of visitors on the day is strictly larger than the number of visitors on each 
            of the previous days.
        ▪   Either it is the last day, or the number of visitors on the day is strictly larger than the 
            number of visitors on the following day.
        NOTE:
            The very first day could be a record breaking day!.
-Notes-----------------------------------------------------------------------------------------------------------
⇒
⇒
-----------------------------------------------------------------------------------------------------------------*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the No. of days in this Month.:\t";
    cin>>size;

    int arr[size+1];
    cout<<"Enter the No. of Visitors in this Month day wise.:\t";
    
    int i;

    for(i=0;i<size;i++)
        cin>>arr[i];

    if(size==1)
    {    cout<<"No. of Record Breaking Days.:\t1";
        return 0;
    }

    arr[size]=-1;
    
    int premax=-1999999;         //premax=maximum of the previous days.
    int rb=0;                  // rb=record breaking days.
       
    for(i=0;i<size;i++)
    {
        if(arr[i]>premax && arr[i]>arr[i+1])
        {
            rb++;
        }
        premax=max(premax,arr[i]);
    }

    cout<<"No. of Record Breaking Days.:\t"<<rb;

    getch();
    return 0;
}