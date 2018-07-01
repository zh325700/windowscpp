#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <chrono>
#include <thread>

using namespace std;

void f(int n)
{
    this_thread::sleep_for(chrono::seconds(n));
    cout << "thread " << n << " ended" << '\n';
}

int main()
{
    vector<thread> v;
    v.emplace_back(f, 1);
    v.emplace_back(f, 2);
    v.emplace_back(f, 3);
    std::list<thread> l;
    // copy() would not compile, because std::thread is noncopyable

    move(v.begin(), v.end(), back_inserter(l));
    for (auto& t : l) t.join();
}
