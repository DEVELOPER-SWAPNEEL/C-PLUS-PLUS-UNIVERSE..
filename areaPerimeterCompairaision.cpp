#include<iostream>
using namespace std;
int main()
{
    int len,bre,area,pre;
    cout<<"\nENTRE THE LENGTH OF THE RECTANGLE -->";
    cin>>len;
    cout<<"\nENTRE THE BREADTH OF THE RECTANGLE -->";
    cin>>bre;
    area=len*bre;
    pre=2(len+bre);
    if(area>pre){
        cout<<"\nAS PER THE PROVIDED LENGTH AND BREADTH THE AREA OF THE RECTANGLE IS MORE THEN ITS PERIMETER..";
    }
   return 0; 
}