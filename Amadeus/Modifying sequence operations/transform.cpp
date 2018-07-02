#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    std::string s("hello");
    string a;
    std::transform(s.begin(), s.end()-2, s.begin(),
                   [](unsigned char c){ return std::toupper(c); });

    std::vector<std::size_t> ordinals;
    std::transform(s.begin(), s.end(), std::back_inserter(ordinals),
                   [](unsigned char c){ return c; });

    std::cout << s << ':';
    for (auto ord : ordinals) {
       std::cout << ' ' << ord;
    }
    cout<<endl;
}
