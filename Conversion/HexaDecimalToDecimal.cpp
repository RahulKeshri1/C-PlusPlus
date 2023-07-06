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
        switch(n[i])
        {
            case 'A':   sum=sum+10*pow(16,k);
                break;
            case 'B':   sum=sum+11*pow(16,k);
                break;
            case 'C':   sum=sum+12*pow(16,k);
                break;
            case 'D':   sum=sum+13*pow(16,k);
                break;
            case 'E':   sum=sum+14*pow(16,k);
                break;
            case 'F':   sum=sum+15*pow(16,k);
                break;
            case '0':   sum=sum+0*pow(16,k);
                break;
            case '1':   sum=sum+1*pow(16,k);
                break;
            case '2':   sum=sum+2*pow(16,k);
                break;
            case '3':   sum=sum+3*pow(16,k);
                break;
            case '4':   sum=sum+4*pow(16,k);
                break;
            case '5':   sum=sum+5*pow(16,k);
                break;
            case '6':   sum=sum+6*pow(16,k);
                break;
            case '7':   sum=sum+7*pow(16,k);
                break;
            case '8':   sum=sum+8*pow(16,k);
                break;
            case '9':   sum=sum+9*pow(16,k);
                break;
        
        }
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
    cout<<"Entered No. in HexaDecimal Format is :\t "<<org<<"\n After convertion into Decimal :\t"<<sum;
    
    getch();
    return 0;
}