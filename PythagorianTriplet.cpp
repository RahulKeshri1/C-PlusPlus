/*Write a Program in C++ to Check Pythagorian Triplet 
on the three numbers entered by user.*/

#include<iostream>
#include<conio.h>
using namespace std;

//Function to find the maximum among the three.
int maximum(int x,int y,int z)
{
    int max;
    max=0;
    if(x>y)
        if(x>z)
            max=x;
    if(y>x)
        if(y>z)
            max=y;
    else 
        max=z;
    return max;
}

//Function to check the Pythagorian Triplet.
bool check(int x,int y,int z)
{
    int a=maximum(x,y,z);
    int h,p,b;
    
    h=a*a;
    
    if(a==x)
    {
        p=y*y;
        b=z*z;
    }
    else if(a==y)
    {
        p=x*x;
        b=z*z;
    }
    else
    {
        p=x*x;
        b=y*y;
    }
    if(h==p+b)
        return true;
    else
        return false;
}
int main()
{
    int i,j,k;
    cout<<"Enter three numbers to check for Pythagorian Triplet :\t";
    cin>>i>>j>>k;
    if(check(i,j,k))
        cout<<"It is a Pythagorian Triplet.";
    else
        cout<<"It is not a Pythagorian Triplet.";
    getch();
    return 0;
}