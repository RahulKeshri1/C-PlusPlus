#include<iostream>
#include<conio.h>
using namespace std;
int Prime(int n)
{
    int count,i,j;
    if(n==0)
        cout<<"0 is not a Prime Number";
    else if(n==1)
        cout<<"Prime Number till 1 is :  1 itself \t";
    else if(n==2)
        cout<<"Prime Numbers till 2 are : 1,2 \t";
    else if(n==3)
        cout<<"Prime Number till 3 are : 1,2,3 \t";
    else if(n==4)
        cout<<"Prime Number till 4 are : 1,2,3 \t";
    else 
    {
        cout<<"Prime Number till "<<n<<" are : 1,2,3";
        for(i=5;i<=n;i++)       
        {
            count=0;
            for(j=2;j<i/2;j++)
            {    
                if(i%j==0)
                    count++;
            }
            if(count==0)
                cout<<","<<i;
        }
    }
    return 0;
};

int main()
{
    int x;
    cout<<"\n Enter the last number till which you want to find the Prime Numbers: \t";
    cin>>x;
    Prime(x);
    getch();
    return 0;
}