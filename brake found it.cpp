#include<iostream>

using namespace std;

int main(){
	int counter;
	cout<<"find first odd number > 3 thats duivisible by 3 :"<<endl;
	
	for (int i=4;;i++){
		if((i%2 !=0)&&(i%3==0)){
			cout<<"found it! its "<<i<<endl;
			break;
		}
		
	}
	cout<<endl;
}
