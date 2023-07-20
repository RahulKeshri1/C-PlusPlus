/*Write a Program in C++ to take input two numbers from the user in binary format and display their ans in binary format.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int reverse(int a)
{
    int lastdigit=0;
    int ans=0;
    int size=to_string(a).length();
    for(int i=0;i<=size;i++)
    {
        lastdigit=a%10;
        ans=ans*10+lastdigit;
        a/=10;
    }
    return ans;
}

int add(int a,int b)
{
    int ans=0,carry=0;
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans=ans*10+carry;
            carry=0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        {
            if(carry==0)
            {
                ans=ans*10+1;
                carry=0;
            }
            else if(carry==1)
            {
                ans=ans*10+0;
                carry=1;
            }
        }
        else
        {
            ans=ans*10+carry;
            carry=1;
        }
        a=a/10;
        b=b/10;
    }
    while(a>0)
    {
        if(carry==1)
        {
            if(a%2==1)
            {
                ans=ans*10+0;
                carry=1;
            }        
            else
            {
                ans=ans*10+1;
                carry=0;
            }
        }
        else
        {
            ans=ans*10 + (a%2);
        }
        
        a=a/10;
    }
    while(b>0)
    {
        if(carry==1)
        {
            if(b%10==1)
            {
                ans=ans*10+0;
                carry=1;
            }        
            else
            {
                ans=ans*10+1;
                carry=0;
            }
        }
        else
        {
            ans=ans*10 + (b%2);
        }
        b=b/10;
    }
    if(carry==1)
        ans=ans*10+1;
    ans=reverse(ans);
    return ans;
};

int main()
{
    int a,b;
    cout<<"Enter two numbers in Binary Format:\t";
    cin>>a>>b;

    cout<<add(a,b)<<endl;
    getch();
    return 0;
}