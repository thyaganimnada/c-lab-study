#include <iostream>

using namespace std;

int main(){
	int numbers[3][2]={{25,35},{63,45},{73,81}};
	
	for (int x=0;x<3;x++){
		for(int y=0;y<2;y++){
			cout<<numbers[x][y];
		}
		cout<<endl;
	}

}
