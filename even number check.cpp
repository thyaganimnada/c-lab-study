#include<iostream>

using namespace std;

int main(){
	
	int num,tmp;
	cout<<"enter your value : ";
	cin>>num;
	tmp=num%2;
	
	if (tmp==0){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
}
