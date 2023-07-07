/*Write a Program in C++ to Enter a Number in Desired Format choosen by user
and Convert into another Three Number Formats */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int arr[100];

//Function to calculate the power.
int pow(int n,int p)
{
    int power=1,i;
    for(i=1;i<=p;i++)
    {
        power=power*n;
    }
    return power;
};

//Function to convert Binary Number into Decimal Number.
int bintodec(int n)
{
    int size;
    int rem,i,j,p;
    int sum=0,org=n;
    size=to_string(n).length();  //to_string(num).length()=This is a function to find the length(No. of digits) of a number.
    for(int i=0;i<=size-1;i++)
    {
        rem=n%10;
        sum=sum+rem*pow(2,i);
        n=n/10;
    }
    return sum;
};

//Function to convert HexaDecimal No. to Decimal No.
int hextodec(string n)
{
    int i,size;
    size=n.length();
    int sum=0;
    int k=0;

    for(i=size-1;i>=0;i--)
    {
        if(n[i]>='A' && n[i]<='F')
            sum=sum+(n[i]-'A'+10)*pow(16,k);
        else if(n[i]>='0' && n[i]<='9')
            sum=sum+(n[i]-'0')*pow(16,k);
        k++;
    }
    return sum;
};

//Function to convert Octal Number into Decimal Number.
int octtodec(int n)
{
    int size,i,rem,sum;
    sum=0;
    size=to_string(n).length();
    for(i=0;i<size;i++)
    {
        rem=n%10;
        sum=sum+rem*pow(8,i);
        n=n/10;
    }
    return sum;
};

//Function to convert Decimal No. into Binary No.
int dectobin(int n)
{
    int i=0,num=0;     //to increase the index of the array.
    
    //to divide the number and store the remainder.
    do
    {
        arr[i]=n%2;  //to store the remainder.
        n=n/2;
        i++;
    }while(n!=0);

    //to print the remainder from bottom to top.
    for(int j=i-1;j>=0;j--)
    {
        num=num*10+arr[j];
    }
    return num;
};

//Function to convert Decimal Number into HexaDecimal Number.
string dectohex(int n)
{
    int i,k;
    string num="";
    k=0;

    //to divide the number and store the remainder
    for(i=0;n>0;i++)
    {
        arr[i]=n%16;
        n=n/16;
        k++;
    }

    //to print the remainder from bottom to top
    for(i=k-1;i>=0;i--)
    {
        if(arr[i]<=9)
            num=num+to_string(arr[i]);
        else 
        {
            char c='A'+arr[i]-10;
            num.push_back(c);
        }
    }
    return num;
};

//Function to convert Decimal No. into Octal No.
int dectooct(int n)
{
    int org=n;
    int i,k=0,num=0;
    for(i=0;n>0;i++)
    {
        arr[i]=n%8;
        n=n/8;
        k++;
    }

    for(i=k-1;i>=0;i--)
    {
        num=num*10+arr[i];
    }
    return num;
};

//Main Function.
int main()
{
    int bin,oct,dec;
    string hex;
    char option;
    cout<<"Enter the Format in which you want to enter the Number {Binary(B),Decimal(D),HexaDecimal(H) or Octal(O)}: \t";
    cin>>option;
    if(option=='D' || option=='d')
    {
        cout<<"Enter the Number in Decimal Format:\t";
        cin>>dec;
        
        cout<<"Entered Number in Binary Format:\t";
        cout<<dectobin(dec)<<endl;
        cout<<"Entered Number in Hexadecimal Format:\t";
        cout<<dectohex(dec)<<endl;
        cout<<"Entered Number in Octal Format:\t";
        cout<<dectooct(dec)<<endl;
    }
    else if(option=='B' || option=='b')
    {
        cout<<"Enter the Number in Binary Format:\t";
        cin>>bin;
        
        cout<<"Entered Number in Decimal Format:\t"<<bintodec(bin)<<endl;
        cout<<"Entered Number in Hexadecimal Format:\t";
        cout<<dectohex(bintodec(bin))<<endl;
        cout<<"Entered Number in Octal Format:\t";
        cout<<dectooct(bintodec(bin))<<endl;

    }
    else if(option=='H' || option=='h')
    {
        cout<<"Enter the Number in HexaDecimal Format:\t";
        cin>>hex;
        
        cout<<"Entered Number in Binary Format:\t";
        cout<<dectobin(hextodec(hex))<<endl;
        cout<<"Entered Number in Decimal Format:\t"<<hextodec(hex)<<endl;
        cout<<"Entered Number in Octal Format:\t";
        cout<<dectooct(hextodec(hex))<<endl;
    }
    else if(option=='O' || option=='o')
    {
        cout<<"Enter the Number in Octal Format:\t";
        cin>>oct;

        cout<<"Entered Number in Decimal Format:\t"<<octtodec(oct)<<endl;
        cout<<"Entered Number in Binary Format:\t";
        cout<<dectobin(octtodec(oct))<<endl;
        cout<<"Entered Number in Hexadecimal Format:\t";
        cout<<dectohex(octtodec(oct))<<endl;
    }
    getch();
    return 0;
}