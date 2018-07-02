#include <algorithm>
#include <iostream>
#include <vector>
static int i = 1;
int f()
{
    return i++;
}

int main()
{
    std::vector<int> v(5);
    std::generate(v.begin(), v.end(), f);

    std::cout << "v: ";
    for (auto iv: v) {
        std::cout << iv << " ";
    }
    std::cout << "\n";

    // Initialize with default values 0,1,2,3,4 from a lambda function
    // Equivalent to std::iota(v.begin(), v.end(), 0);
    std::generate(v.begin(), v.end(), [n = 0] () mutable { return n++; });

    std::cout << "v: ";
    for (auto iv: v) {
        std::cout << iv << " ";
    }
    std::cout << "\n";
}
