#include<iostream> 
using namespace std; 

namespace A1{ 
    int c=20; 
    void func() 
    { 
    cout<<"A1 namespace function called"; 
    } 
} 

namespace A2{ 
    int c=30; 
    void func() 
    { 
    cout<<"A2 namespace function called"; 
    } 
} 

int main() 
{
    int a; // working of namespace 
    int b; 
    cin>>a; // or we can define 'using namespace std' 
    cin>>b; 

    cout<<"sum of a & b : "<< a+b <<endl; 
    cout<<"data Member of namespace A1 & A2 are = "; 
    cout<<A1::c<<" "; 
    cout<<A2::c<<endl; 
    A1::func(); 
    cout<<endl; 
    A2::func(); 
    return 0;
}