#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x;
    int total = 0;
    for(int i = 0; i<n; i++){
        int temp_number;
        cin >> temp_number;
        x.push_back(temp_number);
        total += temp_number;
    }
    sort(x.begin(),x.end());
    int sumleft = 0;
    for(int i=0; i<n; i+=2){
      sumleft += x[i];
    }
    int sumright = total -sumleft;
    int currentDifferent = sumleft - sumright;
    for(int i =0; i<n; i+=2){
      for(int j =1; j<n; j+=2){
        int subDifferent = x[i] - x[j];
        if(subDifferent * currentDifferent >0){     // two have the same sign ++ --
          if(abs(subDifferent) < abs(currentDifferent)){
            sumleft -= x[i];
            sumleft += x[j];
            sumright -= x[j];
            sumright += x[i];
            currentDifferent = sumleft-sumright;
            if(currentDifferent == 0){
              break;
            }
          }
        }
      }
    }
    cout << sumleft << " " << sumright << endl;
    return 0;
}
