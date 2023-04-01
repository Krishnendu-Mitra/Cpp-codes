/* Initialise two variables x and y with 5 and 6 
respectively and interchange them. */

#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	x = 5;
	y = 6;
	cout<<"Before swap x ="<<x<<" and y ="<<y;
	z = x;
	x = y;
	y = z;
	cout<<"After swap x ="<<x<<" and y ="<<y;
	return 0;
}
