//8:35AM -
#include <iostream>
#include <stack>
using namespace std;

int input[1000000];
stack<int> s;
stack<int> index;
int result[1000000];

int main(void){
	
	int N;	
	
	cin>>N; //들어갈 input 값들의 갯수 입력  
	
	for(int i=0;i<N;i++){ // n개의 수를 배열 A에 저장  
		cin>>input[i]; 
	}
	
	for(int i=0; i<N;i++){
		
		int idx=i;
		 
		//처음 i=0일때는 스택에 값이 없어 비어있기 때문에 A[0]의 값과 index 0이 각 stack에 push된다.  
		//어떤 값의 오큰수를 발견했다면, while loop를 돌리면서 오큰수를 찾지 못한 수들까지 모두 검사하여 그 값이 오큰수가 되는 것들을 모두 찾는다.  
		while((s.size()>0)&&(s.top()<input[idx])){ 
		//스택 s에는 오큰수를 찾지 못한 수들을 pop 하기에 s.size()이고, 
		//찾지 못한 수를 넣어둔 스택 s의 제일 위의 값이 A[idx] 값보다 작다면 -> 오큰수 발견 
		
		result[index.top()]=input[idx]; 
		//오큰수를 발견하지 못했던 값의 index가 저장되어있는 스택 index의 제일 위의 값을 index로 가지는 배열result에 오큰수를 저장
		 
		s.pop();
		index.pop();
		//오큰수를 발견했으므로 pop 
		}
		
		//
		s.push(input[idx]);
		index.push(idx);
		

	}
	
	//위의 loop에서 오큰수를 찾기 위해 검사를 했음에도 찾지 못한 수가 있다면 -1값을 넣어주어야 하므로 
	while(index.size()>0){
		result[index.top()]=-1;
		index.pop();
		
	} 
	
	result[N-1]=-1; // 마지막 값은 무조건 -1 
	
	for(int i=0;i<N;i++){
		cout<<result[i]<<" "; 
	}
}
