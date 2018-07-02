#include <algorithm>
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    std::string str1 = "Text with some   spaces";
    //Past-the-end iterator for the new range of values
    str1.erase(std::remove(str1.begin(), str1.end(), ' '),
               str1.end());
    std::replace(str1.begin(), str1.end(),'s', 'k');
    std::cout << str1 << '\n';

    std::string str2 = "Text\n with\tsome \t  whitespaces\n\n";
    str2.erase(std::remove_if(str2.begin(),
                              str2.end(),
                              [](unsigned char x){return std::isspace(x);}),
               str2.end());
    std::cout << str2 << '\n';
}
