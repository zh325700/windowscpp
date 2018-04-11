#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string calculateTri(vector<int> &row){
  sort(row.begin(),row.end());
  if(row[0]+row[1] > row[2] || row[1] + row[2] >row[3]){
    return "triangle";
  }else if(row[0]+row[1] < row[2] && row[1] + row[2] < row[3]){
    return "impossible";
  }else{
    return "segment";
  }
}

int main(){
  vector<vector<int>> input;
  vector<int> row(4,0);
  int number;
  int i =0;
  while(std::cin >> number){
      row[i] =number;
      i++;
      if(i>3){
        i=0;
        input.push_back(row);
      }
  }
  int size = input.size();
  for(int j =0;j<size;j++){
    string eachRow = calculateTri(input[j]);
    cout<<eachRow<<endl;
  }
}
