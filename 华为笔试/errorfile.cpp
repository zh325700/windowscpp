#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b){
    return a.second > b.second;
}
int main(void){
    string input, file;
    vector<pair<string, int>> errors;
    while (getline(cin, input)){
        if (input.size() == 0)
            break;
        unsigned int f = input.rfind('\\');     // 找到最后一个以/结尾的位置  双斜杠才代表单斜杠
        file = input.substr(f + 1);             // 找到文件的名字，不管多长
        errors.push_back(make_pair(file, 1));
        for (int i = 0; i<(errors.size() - 1); i++){    // 先将文件加进来，然后判断出原来存在过以后再取消掉
            if (errors[i].first == file){
                errors[i].second++;
                errors.pop_back(); break;
            }
        }
    }
    stable_sort(errors.begin(), errors.end(), compare);
    int idx = 0;
    while (idx<8 && idx<errors.size()){
        string check = errors[idx].first;
        int t = check.find(' ');
        if (t>16)
            errors[idx].first.erase(0, t - 16);
        cout << errors[idx].first << ' ' << errors[idx].second << endl;
        idx++;
    }
}
