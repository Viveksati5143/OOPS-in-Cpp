#include <iostream> 
using namespace std; 

class Buss{ 
    int busno; 
    string from; 
    string to; 
    char type; 
    int distance; 
    int fare; 
public: 
    void allocate(); 
    void show(); 
    void calcfare(); 
    Buss(){ 
    this->type = '0'; 
    this->fare = 500; 
    } 
}; 

void Buss::calcfare(){ 
    if(this->type == 'o') this->fare=15*this->distance; 
    else if(this->type == 'e') this->fare=20*this->distance; 
    else if(this->type == 'l') this->fare=24*this->distance; 
} 
void Buss::allocate(){ 
    cout<<"Enter Busno::"; cin>>this->busno; 
    cout<<"Enter starting point (from)::"; 
    cin>>this->from; 
    cout<<"Enter destination (to)::"; 
    cin>>this->to; 
    cout<<"Enter type of bus (o, e, l)::"; 
    cin>>this->type; 
    cout<<"Enter distance::"; 
    cin>>this->distance; 
    calcfare();
}
 
void Buss::show(){ 
    cout<<"Busno::"<<this->busno<<"\n"; 
    cout<<"Starting point (from)::"<<this->from<<"\n"; 
    cout<<"Destination (to)::"<<this->to<<"\n"; 
    cout<<"Type of bus (o, e, l)::"<<this->type<<"\n"; 
    cout<<"Distance::"<<this->distance<<"\n"; 
    cout<<"Fare::"<<this->fare<<"\n"; 
} 
int main(){ 
    Buss obj1; 
    obj1.allocate(); 
    obj1.show(); 
} 