#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;


    // write your code here
    int getMaxLength(unordered_set<string> &dict){
        int maxc=0;
        for(auto &word : dict){
          int size = word.length();
            maxc = std::max(maxc,size);
        }
        return maxc;
    }

int main(){
std::unordered_set<std::string> myset =
{"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"};
int count = getMaxLength(myset);
cout<<count<<endl;

}
