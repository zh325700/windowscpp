#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    /*
     * @param s: A string
     * @param dict: A dictionary of words dict
     * @return: A boolean
     */

    int getMaxLength(unordered_set<string> &dict){
        int maxlength=0;
        for(auto &word : dict){
            int size = word.size();
            maxlength = max(size,maxlength);
        }
        return maxlength;
    }



    bool wordBreak(string &s, unordered_set<string> &dict) {
        // write your code here


        int size = s.length();
        int maxLength = getMaxLength(dict);
        // vector<bool> f(maxLength+1,false);
        bool *f = new bool[size + 1];
        f[0] = true;
        for(int i =1; i<=size; i++){
            f[i] = false;
            for(int j=1; j<=maxLength&& j<=i;j++){
                if(!f[i-j]){
                    continue;
                }
                string sub = s.substr(i-j,j);              //i-j 开始 ， j 长度的段
                if(dict.find(sub) != dict.end()){
                    f[i] = true;
                    break;
                }

            }
        }
        return f[size];
    }

};

int main(){
  Solution solution;
  string s = "aaab";
  unordered_set<string> dic;
  dic.insert("a");
  dic.insert("b");
  cout<<solution.wordBreak(s,dic)<<endl;
}
