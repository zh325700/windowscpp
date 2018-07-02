#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{1,2,3};
    rotate(v.begin(),v.begin()+1,v.end());

    for(auto n:v){
      cout<<n<<'\t';
    }
    cout<<endl;
    std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());

    for(auto n:v){
      cout<<n<<'\t';
    }
}
