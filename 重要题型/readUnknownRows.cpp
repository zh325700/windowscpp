#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
#include <iomanip>

using namespace std;

vector<int> getInt(string &s){
  vector<int> aRow;
  istringstream iss(s);
  int num;
  while(iss >> num){
    aRow.push_back(num);
  }
  return aRow;
}

int main(){
  vector<int> temp(2,0);
  vector<float> eachRow;
  float result =0;
  string s;
      while(getline(cin, s))
      {
        temp = getInt(s);
        eachRow.push_back(temp[0]);
        for(int i =1;i<temp[1];i++){
          eachRow.push_back(sqrt(eachRow[i-1]));
        }
        for(float n: eachRow){
          cout<<n<<'\t';
          result += n;
        }
        cout<<fixed<<setprecision(2)<<result<<endl; // 限定小鼠的位数
        eachRow.clear();
        result = 0;
      }
      return 0;
}
