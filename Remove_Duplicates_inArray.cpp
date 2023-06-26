// Write a program to remove the duplicates from an array.

#include<iostream>
#include<conio.h>
using namespace std;


class occurrence
{
    private:
        int i;
        int j,k;
        int arr[10000];

    public:

    int input(int n)
    {
        
        cout<<"Enter the elements in the array \t";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        return 0;
    };

    int removeduplicate(int n)
    {
        for(i=0;i<n-1;i++)                  //[0 3 3 4 5 4 5 4]
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    for(k=j;k<n;k++)
                    {
                        arr[k]=arr[k+1];
                    }
                    n--;
                    j--;
                }
            }
        }
        cout<<"Array after removing duplicates : \t";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<"\t";
        }
        return 0;
    };
};
int main()
{
    int x;
    cout<<"Enter the size of the array \t";
    cin>>x;
    occurrence obj;
    obj.input(x);
    obj.removeduplicate(x);
    return 0;
}