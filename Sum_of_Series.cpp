//Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...]
#include<iostream> 
using namespace::std; 
int main() 
{ int n,sum=0,s=0; 
 cout<<"Enter the number of terms :-"<<endl; 
 cin>>n; 
 for(int i=0;i<n;i++) 
 { 
 s=s*10+9; 
 cout<<s<<" "; 
 sum+=s; 
 } 
 cout<<endl<<"The sum of the series is :- "<<sum<<endl; 
return 0;
}