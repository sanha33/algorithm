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
	
	cin>>N; //�� input ������ ���� �Է�  
	
	for(int i=0;i<N;i++){ // n���� ���� �迭 A�� ����  
		cin>>input[i]; 
	}
	
	for(int i=0; i<N;i++){
		
		int idx=i;
		 
		//ó�� i=0�϶��� ���ÿ� ���� ���� ����ֱ� ������ A[0]�� ���� index 0�� �� stack�� push�ȴ�.  
		//� ���� ��ū���� �߰��ߴٸ�, while loop�� �����鼭 ��ū���� ã�� ���� ������� ��� �˻��Ͽ� �� ���� ��ū���� �Ǵ� �͵��� ��� ã�´�.  
		while((s.size()>0)&&(s.top()<input[idx])){ 
		//���� s���� ��ū���� ã�� ���� ������ pop �ϱ⿡ s.size()�̰�, 
		//ã�� ���� ���� �־�� ���� s�� ���� ���� ���� A[idx] ������ �۴ٸ� -> ��ū�� �߰� 
		
		result[index.top()]=input[idx]; 
		//��ū���� �߰����� ���ߴ� ���� index�� ����Ǿ��ִ� ���� index�� ���� ���� ���� index�� ������ �迭result�� ��ū���� ����
		 
		s.pop();
		index.pop();
		//��ū���� �߰������Ƿ� pop 
		}
		
		//
		s.push(input[idx]);
		index.push(idx);
		

	}
	
	//���� loop���� ��ū���� ã�� ���� �˻縦 �������� ã�� ���� ���� �ִٸ� -1���� �־��־�� �ϹǷ� 
	while(index.size()>0){
		result[index.top()]=-1;
		index.pop();
		
	} 
	
	result[N-1]=-1; // ������ ���� ������ -1 
	
	for(int i=0;i<N;i++){
		cout<<result[i]<<" "; 
	}
}
