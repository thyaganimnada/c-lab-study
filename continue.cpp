#include <iostream>

using namespace std;

int main(){
	int counter;
	cout<<"printing all odd numbers between 1 and 5 inclusive"<<endl;
	for (int i=1; i<=5; i++){
		if (i%2==0)continue;
		else cout<<i<<" ";
	}
	cout<<endl;
}
