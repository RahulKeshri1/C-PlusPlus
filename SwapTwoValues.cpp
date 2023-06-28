#include<iostream>
#include<conio.h>
using namespace std;

int swap(int a,int b)    //2,3
{
    a=a+b;              //5
    b=a-b;              //2
    a=a-b;              //3
    cout<<"First Number after swapping is: \t"<<a;
    cout<<"\n Second Number after swapping is: \t"<<b;
    return 0;
};
int main()
{
    int x,y;
    cout<<"Enter the 1st number: \t";
    cin>>x;
    cout<<"Enter the 2nd number: \t";
    cin>>y;
    swap(x,y);
    return 0;
}