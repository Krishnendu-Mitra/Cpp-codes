/* Collect user age and judge it, user is eligible for 
giving vote or not, only 18- to 99-year-old people 
can able to do it */

#include<iostream>
using namespace std; 
//code by krish
int main(){ 
    int  x;  
    cout<<"Enter your age: ";  
    cin>>x; 
    if(x>=18  && x<=99){  
         cout<<"You are eligible for vote\n";  
    }else if(x<18  && x>=1){  
         cout<<"No, you are not eligible for vote\n";  
    }else{  
         cout<<"Your age is not valid, sorry\n" 
    } 
   return 0; 
} 
