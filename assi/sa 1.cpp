#include<iostream>
#include<fstream>
using namespace std;

int status;
void login();
void menu();
void viewOptions();

int main(){
	login();
	if(status==true)
	menu();
}

void menu(){
	int choice;
	string pakeges[]={"wash and fold","dry claning","ironing"};
	int amount[]={50,500,30};

	cout<<"LONDARY MANAGEMENT SYSTEAM\n";
	cout<<"==========================\n";
	cout<<"1. view Avelilable pakeges\n";
	cout<<"2. Make a sale";
	cout<<"3. delate pakeges";
	
	cout<<"enter your choice";
	cin>>choice;
	
	switch(choice){
		case 1:
			viewOptions();
			break;
	}
	
	void viewOptions(){
		cout<<"availibale pakakegs : \n";
		for(int x=0; x<3; x++){
			cout<<pakeges[x]<<endl;
			
		}
	}
}

void login(){
	cout<<"enter your username : ";
	cin>>uid;
	cout<<"enter your pasword : ";
	cin>>pwd;
	if (uid=="abc" && pwd=="123"){
		status=true;
	}
	else{
		cout<<"wrong username or pasword try again\n";
		login();
	}
	cout<<"\n============================\n";
}

	void viewOptions(){
		string linein;
		ifstrem infile;
		infile.open("londary.txt"),ios_base::in);
		while(getline(infile,lineIn)){
			cout<<lineIn<<"\n"
		}
	}


