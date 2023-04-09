/* Print the the value of an integer 
while it is not 0, at first append 10 
as an integer value */
#include<iostream>
using namespace std;
//code by krish
int main(){
	int n=10;
	while(n!=0){   //introduce while loop
		cout<<n<<" ";
		n--;
	}
	return 0;
}



/* Print the the value of k as given series
while it is not 200 or less then 200, value 
of k is 1 in starting 
1  1  2  6  24  120  */
#include<iostream>
using namespace std;
//code by krish
int main(){
	int k=1,m=1;
	while(k<=200){
		cout<<k<<" ";
		k*=m;
		m++;
	}
	return 0;
}
