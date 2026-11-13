#include<iostream>

using namespace std;

int main(){
	int total=0;
	int count;
	for(int x=1; x<=10; x++){
		cout<<"eneter your value : ";
		cin>>count;
		total=total+count;
	}
	
	cout<<"total = "<<total;
}
