#include <iostream>
#include <algorithm>
#include <iterator>
#include <random>
#include <vector>

using namespace std;

int main()
{
  vector<int> hello{1,4,8,9,2,9,4,7,10};
  sort(hello.begin(),hello.end());
  auto i = is_sorted_until(hello.begin(), hello.end());
  cout<<distance(hello.begin(),i)<<endl;
}
