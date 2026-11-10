#include<iostream>
using namespace std;

int sum(int x,int y);

int main(){
	int total=sum(5,3);
	cout<<total;
}

int sum(int x,int y){
	int z=x+y;
	return z;
}
