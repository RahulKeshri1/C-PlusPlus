#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class occurrence
{
    private:
        string str;
        int i,j,count,n;
    public:
        int input()
        {
            cout<<"Enter the sentence for which you want the table: \t";
            getline(cin,str);
            return 0;
        }

        int occur()
        {
            n=str.length();
            for(i=0;i<n;i++)
            {
                count=0;
                for(j=0;j<n;j++)
                {
                    if(j<i && str[i]==str[j])
                        break;

                    if(str[i]==str[j])
                        count++;
                }
                if(count!=0)
                    cout<<str[i]<<" is present "<<count<<" time(s)"<<"\n";
            }
        }
};

int main()
{
    occurrence obj;
    obj.input();
    obj.occur();
    getch();
    return 0;
}