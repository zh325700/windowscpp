#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <array>
#include <string>
#include <iterator>
#include <numeric>

using namespace std;

int main(){
std::vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

std::fill(v.begin(), v.end(), -1);

for (auto elem : v) {
    std::cout << elem << " ";
}
std::cout << "\n";
  return 0;
}
