#include<iostream>

using namespace std;

int total=0;

int main(){
	int numbers[]={5,25,7,35,9,45};
	int ArrayLength = sizeof(numbers) / sizeof(numbers[0]);
	
	for(int x=0; x<ArrayLength; x++){
		total+=numbers[x];
	}
	cout<<total;
}


