#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

findMinNSum(int &multiply, vector<int> &wholeinput,int begin, int end){
    int min = 0;
    int sum = 0;
    for(int i=begin;i<=end;i++){
        min = min(wholeinput[i],min);
        sum = sum + wholeinput[i];
    }
    multiply = sum*min;
}

int main(){

}
