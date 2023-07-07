/*A Program to Convert HexaDecimal No. to Decimal No.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

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

//Function to convert HexaDecimal No. to Decimal No.
int convert(string n)
{
    int i,size;
    size=n.length();
    int sum=0;
    int k=0;

    for(i=size-1;i>=0;i--)
    {
        if(n[i]>='A' && n[i]<='F')
        {
            sum=sum+(n[i]-'A'+10)*pow(16,k);
        }
        else if(n[i]>='0' && n[i]<='9')
            sum=sum+(n[i]-'0')*pow(16,k);
        k++;
    }
    return sum;
};

int main()
{
    string str,org;
    
    cout<<"Enter the Number in HexaDecimal form :\t";
    getline(cin,str);
    
    org=str;

    int sum=convert(str);
    cout<<"Entered No. in HexaDecimal Format is :\t "<<org<<endl<<"After convertion into Decimal :\t"<<sum;
    
    getch();
    return 0;
}