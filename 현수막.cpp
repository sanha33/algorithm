//12:14 AM - 1:10 AM

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

const int dy[8]={-1,0,1,1,1,0,-1,-1 };
const int dx[8]={1,1,1,0,-1,-1,-1,0 };
int d[251][251];
int a[251][251];

int main(void){

  int M,N;
  int result=0;

  cin>>M>>N;

  memset(d,-1,sizeof(d));

  queue<pair<int,int>> q;




  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      cin>>a[i][j];
      if(a[i][j]==0){
        d[i][j]=0;
      }
    }
  }


/*

cout<<endl;
cout<<"---------------------------"<<endl;
  for(int k=0;k<M;k++){
    for(int l=0;l<N;l++){

        cout<<d[k][l];
      
    }
    cout<<endl;
  }
*/


    for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){

      if(d[i][j]==-1){
/*

        cout<<endl;
cout<<"---------------------------"<<endl;
  for(int k=0;k<M;k++){
    for(int l=0;l<N;l++){

        cout<<d[k][l];
      
    }
    cout<<endl;
  }
*/


            q.push({i,j});
            d[i][j]=0;

           
      while(!q.empty()){

        int y=q.front().first;
        int x=q.front().second;
        q.pop();

        for(int k=0;k<8;k++){
          int my=y+dy[k];
          int mx=x+dx[k];

          if(!(0<=my&&my<M&&0<=mx&&mx<N))continue;

          if(d[my][mx]==-1){


/*

            cout<<endl;
cout<<"---------------------------"<<endl;
  for(int k=0;k<M;k++){
    for(int l=0;l<N;l++){

        cout<<d[k][l];
      
    }
    cout<<endl;
  }
*/


            d[my][mx]=0;
            q.push({my,mx});
                        
          }
        }      
        
        
        }
        result++;
      }
    
    
  }
}
    cout<<result;
}
