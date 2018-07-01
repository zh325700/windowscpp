#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <array>
#include <string>

using namespace std;

// find first of sub-sequence and last of sub-sequence
int main(){

  vector<int> v = {1,2,3,4,5,7,1,2,3,0,1,2,3,8,9};
  vector<int> t1 = {2,3};
  vector<int>::iterator result;
  // result = find_end(v.begin(), v.end(), t1.begin(), t1.end());
  result = find_first_of(v.begin(), v.end(), t1.begin(), t1.end());
    if (result == v.end()) {
        std::cout << "subsequence not found\n";
    } else {
        std::cout << "last subsequence is at: "
                  << distance(v.begin(), result) << "\n";
    }

  return 0;
}
