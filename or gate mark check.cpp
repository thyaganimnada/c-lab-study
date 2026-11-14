#include<iostream>
using namespace std;

int main(){
	int m1,m2;
	
	cout<<"enter frist subject marks : ";
	cin>>m1;
	cout<<"enter second subject marks : ";
	cin>>m2;
	
	if (m1>=75 || m2>=75){
		cout<<"pass";
	}
	else{
		cout<<"fail";
	}

