/*Print 1 to 100*/
#include<iostream>
using namespace std;
int main(){
	for(int i=1; i<=100; i++){
		cout<<i<<endl;
	}
	return 0;
}


/* Print this series 99,97,95,93,……1 only */
#include<iostream>
using namespace std; 
int main(){
    int i;
    for(i=99; i>=1; i-=2){
        cout<<i<<endl;
    }
    return 0;
}

/* Print the serice
1,3,9,21,81,100 */
#include<iostream>
using namespace std;
//code by krish
int main(){
	int i;
	for(i=1; i<=100; i*=3){
		cout<<i<<",";
	}cout<<"100";
	return 0;
}
