/*Write a program that prints a table indicating the number of occurrences of each alphabet 
in the text entered as command line arguments.*/

#include<iostream>
#include<string.h>
using namespace std;
class occurrence
{
    private:
        string sen;
        int i,j,k,n;
    public:

    //Function to take the input string in which we have to remove the Duplicates.
    int input()
    {
        cout<<"Enter the sentence in which you want the remove the duplicate alphabets: \t";
        getline(cin,sen);
        return 0;
    };

    //Function to remove the Duplicate Alphabets.
    int occur()
    {
        n=sen.length();
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(sen[i]==sen[j])
                {
                    for(k=j;k<n;k++)
                        sen[k]=sen[k+1];
                    n--;
                    j--;
                }
            }
        }
        cout<<"List of alphabets after removing the duplicate alpabets are :\t";
        for(i=0;i<n;i++)
            cout<<sen[i]<<"\t";
        return 0;
    };

};

int main()
{
    occurrence obj;

    obj.input();
    obj.occur();
    return 0;
}