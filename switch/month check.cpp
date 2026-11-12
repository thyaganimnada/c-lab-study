#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<"enter month number : ";
	cin>>num;
	
	switch (num){
		
		case 1:
		cout<<"january";
		break;
		
		case 2:
		cout<<"february";
		break;
		
		case 3:
		cout<<"march";
		break;
		
		case 4:
		cout<<"april";
		break;
		
		case 5:
		cout<<"may";
		break;
		
		case 6:
		cout<<"juny";
		break;
		
		case 7:
		cout<<"july";
		break;
		
		case 8:
		cout<<"august";
		break;
		
		case 9:
		cout<<"september";
		break;
		
		case 10:
		cout<<"octomber";
		break;
		
		case 11:
		cout<<"november";
		break;
		
		case 12:
		cout<<"desember";
		break;
		
		default:
			cout<<"not found";
	}
	
}
