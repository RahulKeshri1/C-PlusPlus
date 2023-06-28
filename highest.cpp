/*Write a program in C++ to find the highest,lowest,to search a number in the given array*/

#include<iostream>
#include<conio.h>
using namespace std;

int arr[100];
class inc
{
    private:
        int z=0,i,k;
        int max,min;
    public:
    
    //Function to take input in the array.
    int input(int size)
    {
        cout<<"Enter the elements of the array \t"; 
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        return 0;
    };

    //Function to search a number in the array.
    int search(int n,int size)
    {
        for(i=0;i<size;i++)
        {
            if(n==arr[i])
            {    
                z++;
                k=i;
            }
        }
        if(z==0)
            cout<<"Entered number is not present 😔😔";
        else  if(z==1)
            cout<<"Entered Number is present  😊😊 at "<<k+1<<" position ";
        else
            cout<<"Entered Number is present  😊😊 "<<z<<" times";
        return 0;
    };

    //Function to print the greatest number in the array. 
    int highest(int size)
    {
        max=arr[0];
        for(i=0;i<size;i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }

        cout<<"Maximum value is \t"<<max<<endl;
        return 0;
    };

    //Function to print the lowest number in the array.
    int low(int size)
    {
        min=arr[0];
        for(i=0;i<size;i++)
        {
            if(arr[i]<min)
                min=arr[i];
        }

        cout<<"Minimum value is \t "<<min<<endl;
        return 0;
    };
};

int main()
{
    inc obj;
    char c,ch,m;
    int x,y;

    cout<<"Enter Total No. of elements you want to enter:\t";
    cin>>y;
    obj.input(y);
    cout<<"Do you want to find the highest among them \t(y/n) ";
    cin>>ch;
    if(ch=='y' || c=='Y')
        obj.highest(y);
    cout<<"Do you want to find the lowest among them? \t(y/n) ";
    cin>>m;
    if(ch=='y' || c=='Y')
        obj.low(y);
    cout<<"Do you want to search for a number? \t(y/n) ";
    cin>>c;
    if(c=='y' || c=='Y')
    {
        cout<<"Enter the number you want to search for :\t";
        cin>>x;
        obj.search(x,y);
    }
    return 0;
}