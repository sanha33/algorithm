//7:31AM - 8:24AM

#include <iostream>
using namespace std;
int tri[45]={0,};

bool Eureka(int num){
	
		for(int j=1;j<45;j++){
			for(int k=1;k<45;k++){
				for(int a=1;a<45;a++){
				
					
					if(num==tri[j]+tri[k]+tri[a]){
					//	cout<<"tri["<<j<<"]="<<tri[j]<<", tri["<<k<<"]="<<tri[k]<<", tri["<<a<<"]="<<tri[a];
					//	cout<<endl;
						return true;
						
					}	
				}				
					
			}
		}
		return false;
}

int main(){
	
	int K;
	int T[1001]={0,};

	int i;
	int n=1;
	int result;
	
	cin>>K;	
	for(i=0;i<K;i++){
		cin>>T[i];
	}
	for(i=1;i<45;i++){
		tri[i]=(i*i+i)/2;
	
	}
	
	
	for(i=0;i<K;i++){
		
		if(Eureka(T[i]))	
			cout<<1<<endl;
		else
			cout<<0<<endl;
	
	}
}
