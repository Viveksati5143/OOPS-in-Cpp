#include<iostream> 
using namespace std; 

class Employee { 
    string name; 
    string employee_code; 
    int age; 
public: 
    void read_data(); 
    friend int operator-(Employee obj1, Employee obj2); 
}; 

void Employee::read_data() { 
    cout<<"Enter name::"; cin>>this->name; 
    cout<<"Enter age::"; cin>>this->age; 
    cout<<"Enter employee code::"; 
    cin>>this->employee_code; 
} 

int operator -(Employee obj1,Employee obj2) { 
    int age; 
    age = obj1.age - obj2.age; 
    return age; 
} 

int main() { 
    Employee obj1,obj2; 
    obj1.read_data(); 
    obj2.read_data(); 
    cout<<"Age difference is::"<<obj1-obj2<<endl; 
}