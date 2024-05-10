#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"\nENTRE THE NUMBER :- ";
    cin>>a;
    if(a<0){
        a=-1*a;
        cout<<"\nSINCE THE ENTRED NUMBER IS A NEGETATIVE NUMBER HENCE ITS ABSOLUTE VALUE IS "<<a<<endl;
    }
    else{
        cout<<"\nTHE ENTRED NUMBER'S ABSOLUTE VALUE IS :- "<<a<<endl;
    }
        return 0;
}