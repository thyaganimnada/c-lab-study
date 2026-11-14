#include<iostream>

using namespace std;

int main(){
	int value;
	cout<<"input the value : ";
	cin>> value;
	
	
	if(value>0){
		cout<<"positive";
	}
	else if(value<0){
		cout<<"negitive";
	}
	else{
		cout<<"zero";
	}
}
