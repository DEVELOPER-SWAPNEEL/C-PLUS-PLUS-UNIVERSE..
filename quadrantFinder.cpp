/*HW : Given a point (x, y), write a program to find
out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd
Quadrant, 4th Quadrant, on the x-axis, y-axis or at
the origin, viz. (0, 0).*/
 #include<iostream>
 using namespace std;
 int main(){
    int x,y;
    cout<<"\n ENTRE THE VALUE OF X :  "; cin>>x;
    cout<<"\n ENTRE THE VALUE OF Y :  "; cin>>y;

    if(x>0){
        if(y>0) cout<<" AS PER THE PROVIDED CORDINATES THE POINT IS IN FIRST QUADRANT ";
        else cout<<" AS PER THE PROVIDED CORDINATES THE POINT IS IN FORTH QUADRANT ";
        if(x==0)  cout<<" THE POINT IS ON THE Y AXIS ";
    }
    else {
        
    }