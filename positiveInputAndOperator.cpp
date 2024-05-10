/*FINDING THE GRATEST NUMBER USING NESTED IF ELSE*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"\nENTRE THE FIRST NUMBER -->";   cin>>a;
    cout<<"\nENTRE THE SECOEND NUMBER -->";   cin>>b;
    cout<<"\nENTRE THE THIRD NUMBER -->";   cin>>c;

    if(a>b){
        if(a>c) cout<<a<<"  IS THE GREATEST NUMBER ";
        else cout<<c<<" IS THE GREATEST NUMBER ";
    }
    else{
            if(c>b) cout<<c<<" IS THE GRATEST NUMBER ";
            else cout<<b<<" IS THE GREATEST NUMBER ";
    }
    return 0;
}