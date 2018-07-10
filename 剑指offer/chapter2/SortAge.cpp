#include <iostream>
#include <vector>

using namespace std;

void sortAge(vector<int> &ages){
  int size = ages.size();
  int const maxAge = 99;
  vector<int> ageTimes(maxAge+1,0);
  // 每个名字出现了几次
  for(int i =0;i< size;i++){
    ageTimes[ages[i]] ++;
  }

  int index =0;
  for(int i=0;i<= maxAge;i++){
    if(ageTimes[i]>0){
      for(int j=0;j<ageTimes[i];j++){
        ages[index] = i;
        index++;
      }
    }
  }

}

int main(){
  vector<int> ages = {20,25,25,26,90,33,35,47,44};
  sortAge(ages);
  for(auto n: ages){
    cout<<n<<' ';
  }
  cout<<endl;
  return 0;
}
