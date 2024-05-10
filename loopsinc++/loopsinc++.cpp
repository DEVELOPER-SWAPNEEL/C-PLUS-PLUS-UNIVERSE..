#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n\nENTRE THE NUMBER OF TIMES YOU WANT THE SUM TO BE EXICUTED:- ";
    cin>>n;

    int sum=0;
    int i=1;


    while(i<=n)
    {
        sum+=i;
        i++;  
    }
        cout<<endl<<sum<<endl<<endl;
    return 0;
}