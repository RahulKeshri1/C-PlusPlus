//Write a program in C++ to find the highest,lowest,to search a number in the given array

#include<iostream>
#include<conio.h>
using namespace std;
class inc
{
    private:
        int arr[6];
        int z=0,i,k;
        int max,min;
    public:
    int input()
    {
        cout<<"Enter the elements of the array \t"; 
        for(int i=0;i<=5;i++)
        {
            cin>>arr[i];
        }
        return 0;
    };

    int search(int n)
    {
        for(i=0;i<=5;i++)
        {
            if(n==arr[i])
            {    
                z++;
                k=i;
            }
        }
        if(z==0)
            cout<<"Entered number is not present 😔😔";
        else 
            cout<<"Entered Number is present at  "<<k+1<<"th position 😊😊  "<<z<<" times";
        return 0;
    };

    int highest()
    {
        max=arr[0];
        for(i=0;i<=5;i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }

        cout<<"Maximum value is \t"<<max<<endl;
        return 0;
    };


    int low()
    {
        min=arr[0];
        for(i=0;i<=5;i++)
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
    int x;
    obj.input();
    cout<<"Do you want to find the highest among them \t(y/n) ";
    cin>>ch;
    if(ch=='y')
        obj.highest();
    cout<<"Do you want to find the lowest among them? \t(y/n) ";
    cin>>m;
    if(ch=='y')
        obj.low();
    cout<<"\n Do you want to search for a number? \t(y/n) ";
    cin>>c;
    if(c=='y')
    {
        cout<<"Enter the number you want to search :\t";
        cin>>x;
        obj.search(x);
    }
    return 0;
}