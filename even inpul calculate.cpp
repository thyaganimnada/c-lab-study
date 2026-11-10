#include<iostream>

using namespace std;

int main(){
	int total=0,num;
	for(int x=1; x<=10; x++){
		cout<<"eneter your value : ";
		cin>>num;
		
		if(num%2==0)
			total=total+num;
	}
	
	cout<<"total = "<<total;
}
