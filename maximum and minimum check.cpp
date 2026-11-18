#include<iostream>

using namespace std;

int main(){
	int sum=0;
	int numbers[]={5,25,7,35,9,45};
	
	for(int x=0; x<6; x++){
		sum+=numbers[x];
	}
	cout<<sum;
}
