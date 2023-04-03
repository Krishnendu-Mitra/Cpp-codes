/* Collect user name, total marks 
and print the grade using the table
information: 
	Marks		 Grade
	100-91		  O
	90-71			E
	70-51			A
	50-41			B
	40-31			C
	30-11			D
	10-0			  F
*/

#include<iostream>
using namespace std;
//code by krish
int main(){
	char name[10];
	int marks=0;
	cout<<"Enter Student Name: ";
	cin>>name;
	cout<<"Enter student's total marks: ";
	cin>>marks;
	cout<<"Mr./Ms. "<<name<<", your obtandent ";
	if(marks>=91 && marks<=100){
		cout<<"grade is O"<<endl;
	}else if(marks>=71 && marks<=90){
		cout<<"grade is E"<<endl;
	}else if(marks>=51 && marks<=70){
		cout<<"grade is A\n";
	}else if(marks>=41 && marks<=50){
		cout<<"grade is B"<<endl;
	}else if(marks>=31 && marks<=40){
		cout<<"grade is C"<<endl;
	}else if(marks>=11 && marks<=30){
		cout<<"grade is D"<<endl;
	}else if(marks>=0 && marks<=10){
		cout<<"grade is F"<<endl;
	}else{
		cout<<"grade is NULL\nThis type of marks is not distributed from any student, check again\n\n";
	}
	return 0;
}
