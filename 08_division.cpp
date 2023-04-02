/* Collect x and y from user and check the both 
variable x and y is divisible by 7 or not, display 
only 'yes' or 'no' */

#include<iostream>
using namespace std; 
//code by krish
int main(){ 
    int  x,y;  
    cout<<"Enter the 1st number: ";  
    cin>>x;  
    cout<<"Enter the 2nd number: ";  
    cin>>y; 
    if(x % 7  == 0  && y % 7  == 0){  
         cout<<"Yes";  
     }else{  
         cout<<"No";  
     } 
   return 0; 
} 
