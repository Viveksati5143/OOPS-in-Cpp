#include<iostream> 
using namespace::std; 
int main() 
{ 
    int n; 
    cout<<"Enter the number upto which you need the multiplication table:-\n"; 
    cin>>n; 
    cout<<"Multiplication table from 1 to "<<n<<"is:-"<<endl; 
    for(int i=1;i<=10;i++) 
    { 
    for(int j=1;j<=n;j++) 
    { 
    cout<<j<<"X"<<i<<"="<< j*i; 
    cout<<"   "; 
    } 
    cout<<endl; 
    } 
    return 0;
} 