#include<iostream>

using namespace std;

int main(){
	
	int km,price;
	cout<<"enter kilomiter : ";
	cin>>km;
	
	if (km <= 100){
		price=km*25;
	}
	else{
		price=(100*25)+((km-100)*20);
	}
	
	cout<<"total hire is : RS."<<price; 
}



