//Write a program in C++ to find the size of data types of all types of int,char,float and bool.

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i;
    int signed sni;
    int unsigned usi;
    long int li;
    short int si;
    char c;
    string s;
    float f;
    bool b;

    cout<<"Size of int \t  \t"<<sizeof(i)<<"\n";
    cout<<"Size of signed int \t "<<sizeof(sni)<<"\n";
    cout<<"Size of unsigned int \t "<<sizeof(usi)<<"\n";
    cout<<"Size of long int \t "<<sizeof(li)<<"\n";
    cout<<"Size of short int \t "<<sizeof(si)<<"\n";
    cout<<"Size of char \t  \t"<<sizeof(c)<<"\n";
    cout<<"Size of string \t  \t"<<sizeof(s)<<"\n";
    cout<<"Size of float \t  \t"<<sizeof(f)<<"\n";
    cout<<"Size of bool \t  \t"<<sizeof(b)<<"\n";
    
    getch();
    return 0;
}