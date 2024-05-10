/*if cost price and selling price of an item is input through the keyboard write 
a program to determine whether the seller has made profit or 
incurred loss or no profit no loss also determine how much 
profit he made or loss he incurred*/

#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"\nENTRE THE COST PRICE OF THE PRODUCT -->";
    cin>>cp;
    cout<<"\nENTRE THE SELLING PRICE OF THE PRODUCT -->";
    cin>>sp;
    if(cp<sp) cout<<"\nTHE DEAL MADE THROUGH THIS IS HAVING PROFIT OF rs "<<sp-cp<<endl;
    if(cp>sp) cout<<"\nTHE DEAL MADE THROUGH THIS IS HAVING LOSS OF RS "<<cp-sp<<endl;
    if(cp==sp) cout<<"\nTHE DEAL HAS NO PROFIT NOR LOSS";
return 0;
 
}