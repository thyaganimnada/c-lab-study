#include<iostream>

using namespace std;

int main(){
	
	int marks[5];
	int total;
	for(int x=0;x<5;x++){
		cout<<"enter your " << x+1 << " value : ";
		cin>>marks[x];
	}
	cout<<"==========================================================="<<endl;
	for(int x=0;x<5;x++){
		total+=marks[x];
	}
	cout<<"totle is : "<<total;
}
