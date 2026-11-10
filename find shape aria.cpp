#include<iostream>

using namespace std;

int select;
double x,y,z;
double pi=3.1416;
double square(double x,double y);
double trangle(double x,double y);
double circle(double x);
void menu(); 

int main(){
	menu();
}

void menu(){
	cout<<"FIND THE AREA OF GROMETRIC SHAPES";
	cout<<"\n============================\n";
	cout<<"1. square\n";
	cout<<"2. trangle\n";
	cout<<"3. circle\n";
	cout<<"0. EXIT\n";
	
	cout<<"\n============================\n";
	
	cout<<"enter your selection : ";
	cin>>select;
	
	while(select!=0){
	
		switch (select){
			
			case 1:
			cout<<"enter your square lenth : ";
			cin>>x;
			cout<<"enter your square hight : ";
			cin>>y;
			cout<<"square area is : "<<square(x,y)<<endl;
			break;
			
			case 2:
			cout<<"enter your trangle lenth : ";
			cin>>x;
			cout<<"enter your trangle hight : ";
			cin>>y;
			cout<<"trangle area is : "<<trangle(x,y)<<endl;
			break;
			
			case 3:
			cout<<"enter your radius : ";
			cin>>x;
			cout<<"circle area is : "<<circle(x)<<endl;
			break;
			
			default:
			cout<<"not found";
		}	
		
			cout<<"\n============================\n";
		
			cout<<"enter your selection : ";
			cin>>select;
	
	}	
	

}

double square(double x,double y){
	double z=x*y;
	return z;
}

double trangle(double x,double y){
	double z=0.5*x*y;
	return z;
}

double circle(double x){
	double z=pi*x*x;
	return z;
}
