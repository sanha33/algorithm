#include <iostream>
using namespace std;

int main(void){
	
	int N;
	int two=0;
	int five=0;
	
	cin>>N;
	
	for(int i=2; i<=N; i*=2 ){
		two+=N/i;
	}
	
	for(int i=5; i<=N; i*=5 ){
		five+=N/i;
	}

	if(two>=five){
		cout<<five;
	} else{
		cout<<two;
	}

	
}
