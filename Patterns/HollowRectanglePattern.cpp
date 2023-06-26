#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,row,col;
    cout<<"Enter the no. of rows: \t";
    cin>>row;
    cout<<"Enter the no. of columns: \t";
    cin>>col;

    for(i=1;i<=row;i++)                  //for(i=1;i<=row;i++)
    {                                    //{
        if(i==1 || i==row)               //    for(j=1;j<=col;j++) 
        {                                //    {
            for(j=1;j<=col;j++)          //        if(i==1 || j==1 || i==row || j==col)
            {                            //            cout<<"*";
                cout<<"*";               //        else
            }                            //             cout<<" ";
        }                                //     }
        else                             //     cout<<endl;
        {                                //}
            for(j=1;j<=col;j++)
            {
                if(j==1 || j==col)
                    cout<<"*";
                else 
                    cout<<" ";
            }
        }
        cout<<endl;
    }
    getch();
    return 0;
}