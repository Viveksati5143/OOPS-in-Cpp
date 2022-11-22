#include <iostream>
#include <stdio.h>
using namespace std;

class Volume {
public:
    float area;
    Volume(float side){
        area = side*side*side;
    }
    Volume(float r, float h){
        area = 3.14*r*r*h;
    }
    Volume(float len, float br, float hgt){
        area =  len*br*hgt;
    }
    void display(){
        cout<<area<<endl;
    }
};

int main(){
    float side,r,h,len,br,hgt;
    cout<<"Enter side for code::"; 
    cin>>side; 
    cout<<"Enter radius for cylinder::"; 
    cin>>r; 
    cout<<"Enter height for cylinder::"; 
    cin>>h; 
    cout<<"Enter length for cube::"; 
    cin>>len; 
    cout<<"Enter breath for cube::"; 
    cin>>br; 
    cout<<"Enter height for cube::"; 
    cin>>hgt; 
    Volume o(side); 
    Volume o2(r,h); 
    Volume o3(len,br,hgt); 
    
    o.display(); 
    o2.display(); 
    o3.display(); 
    return 0; 
} 