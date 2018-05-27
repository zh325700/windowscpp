#include <iostream>
#include <vector>

using namespace std;

int findhighest(vector<int> &input,int start,int end){
  int maxnum=0;
  int temp = 0;
  if(start >end){
    temp = start;
    start = end;
    end = temp;
  }
  for(int i= start;i<=end;i++){
    if(input[i]>=maxnum){
      maxnum = input[i];
    }
  }
  return maxnum;
}


int main(){
  int N,M;
  while(cin >>N>>M){

    vector<int> grade(N,0);
    vector<int> outputvector;
    for(int i =0;i<N;i++){
      cin>>grade[i];
    }
    for(int j=0;j<M;j++){
      char op;
      int first,second;
      cin>>op;
      cin>>first>>second;
      if(op == 'Q'){
        outputvector.push_back(findhighest(grade,first-1,second-1));
      }else if(op == 'U'){
        grade[first-1] = second;
      }
    }
    for(int n:outputvector){
      cout<<n<<endl;
    }
  }

  return 0;
}
