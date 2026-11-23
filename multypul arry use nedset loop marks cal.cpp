#include <iostream>

using namespace std;

int main(){
	string name[3]={"sanjeewa","nimesha","thilina"};
	int marks[3][2]={{25,65},{45,72},{81,78}};
	
	for (int x=0;x<3;x++){
		int total=0;
		cout<<name[x]<<" - ";
		for(int y=0;y<2;y++){
			total+=marks[x][y];
			
		}
		cout<<total<<endl;
	}

}
