#include <iostream>
using namespace std;
//7.	W2.	Write a program to display the n terms of even natural number and their sum.

//function that finds a even numbers in number given by the user.

bool even(int n){
 bool condition;
  if (n!= 1 && n!= 0){
    for (int i = 2; i <= n; i++){
        if ( n%2 == 0){
          condition = true;
        }
        else condition = false;
      }
   } 
      else { condition = false;}
      return condition;
  }


int main(){
  int n;
  int sum=0;
  
  cout<<"Enter the number to search for: ";
  cin>>n;
  cout<<"\n";
  cout<<"The even numbers are: "<<endl;
  for (int i=1; i<=n; i++){
    if (even(i)){ 
     cout<<i<<endl;
     sum = sum + i;  
  }         
}   
cout<<"The sum of even numbers are : "<<sum<<endl;  
return 0;
  
}