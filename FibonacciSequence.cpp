/*Write a Program in C++ to Print n numbers of Fibonacci Sequence. */

#include<iostream>
#include<conio.h>
using namespace std;

//Function to Print Fibonacci Sequence.
void fib(int n)
{
    long int term1=0;
    long int term2=1;
    cout<<term1<<","<<term2;
    for(int i=1;i<=n-2;i++)
    {
        long int next=term1+term2;
        term1=term2;
        term2=next;
        cout<<","<<next;
    }
};
int main()
{
    int i;
    cout<<"Enter the no. of terms:\t";
    cin>>i;
    fib(i);
    getch();
    return 0;
}