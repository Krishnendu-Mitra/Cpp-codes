/* Get an input from user and check it is even 
or odd and display the answer (consider 0 as 
an even number) */

#include<iostream>
using namespace std; 
//code by krish
int main(){ 
    int  a;  
    cout<<"Enter a number: ";  
    cin>>a; 
    if(a % 2  == 0){  
          cout<<"Even number.\n";  
    }else{  
          cout<<"Odd number.\n";  
    } 
   return 0; 
} 
