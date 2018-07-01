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
  vector<int> from_vector(10);
  std::iota(from_vector.begin(), from_vector.end(), 0);

// back_inserter is to push back elements into the container
  // std::vector<int> to_vector;
  // std::copy(from_vector.begin(), from_vector.end(),
  //           back_inserter(to_vector));

// or, alternatively,
 std::vector<int> to_vector(from_vector.size());
 std::copy(from_vector.begin(), from_vector.end(), to_vector.begin());
// either way is equivalent to
//  std::vector<int> to_vector = from_vector;

  cout << "to_vector contains: ";

  copy(to_vector.begin(), to_vector.end(),
            std::ostream_iterator<int>(std::cout, " "));
  std::cout << '\n';

  return 0;
}
