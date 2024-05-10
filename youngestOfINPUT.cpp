#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"\nENTRE THE AGE OF THE FIRST PERSON   "; cin>>a;
    cout<<"\nENTRE THE AGE OF THE SECOEND PERSON   "; cin>>b;
    cout<<"\nENTRE THE AGE OF THE THIRD PERSON   "; cin>>c;

    if(a<b){
        if(a<c) cout<<a<<" IS THE YOUNGEST OF ALL ";
        else cout<<c<<" IS THE YOUNGEST OF ALL ";
    }
    else {
        if(b<c) cout<<b<<" IS THE YOUNGEST OF ALL ";
        else cout<<c<<" IS THE YOUNGEST OF ALL ";
    }
        return 0;
}
