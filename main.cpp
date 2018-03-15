#include <iostream>
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>    // std::sort
#include "hashTest.h"
#include <array>
#include <typeinfo>
using namespace std;

bool strTest() {
	string  s1 = "ABCD";
	string s2 = "BE";

	int n1 = s1.length();
	int n2 = s2.length();
	// declaring character array
	char c1[n1 + 1];
	char c2 [n2+1];

	// copying the contents of the
	// string to char array
	strcpy(c1 , s1.c_str());
	strcpy(c2, s2.c_str());


	unordered_map<char, int > hashmap;
	hashmap['A'] = 2;
	hashmap['B'] = 3;
	hashmap['C'] = 5;
	hashmap['D'] = 7;
	hashmap['E'] = 11;
	int i = 0, j = 0;
	int valuemother = 1,valuechild = 1;
	if (n1==0 ) {
		return false;
	}
	else if (n2 == 0) {
		return true;
	}
	else if (n1 < n2) {
		return false;
	}
	while (i<n1 ) {
        char motherchar = c1[i];
		valuemother = valuemother * hashmap.find(motherchar)->second;
		i++;
	}
	while (j<n2){
        char childchar = c2[j];
        valuechild = valuechild * hashmap.find(childchar)->second;
        j++;
	}
	cout <<"mother value is :"<< valuemother<<endl;
	cout <<"child value is:" <<valuechild<<endl;

	if (valuemother % valuechild == 0) {
		return true;
	}
	else {
		return false;
	}

}

class Solution {
public:
    /**
     * @param inputA: Input stream A
     * @param inputB: Input stream B
     * @return: The answer
     */
    bool inputStream(string &inputA, string &inputB) {
        // Write your code here
	int nA = inputA.length();
	int nB = inputB.length();
	// declaring character array
	char charA[nA+1];
	char charB[nB+1];

	// copying the contents of the
	// string to char array
	strcpy(charA , inputA.c_str());
	strcpy(charB, inputB.c_str());

	int sizeA = strlen(charA);
	int sizeB = strlen(charB);

	vector<char> outA;
	vector<char> outB;
	// construct A char array
	for(int i=0;i<sizeA;i++){
        outA.push_back(charA[i]);
	}
	// construct B char array
	for(int i=0;i<sizeB;i++){
        outB.push_back(charB[i]);
	}

	//for loop to erase '<' and element before '<'
	for(int i =0;i<outA.size();i++){
	    if(outA[i] == '<'&&i>=1)
	    {
	        outA.erase(outA.begin()+i);
	        outA.erase(outA.begin()+i-1);
	        i=i-1;
	    }
	    else if(outA[i] == '<' && i==0){
	        outA.erase(outA.begin());
	    }
	}
	for(int i =0;i<outB.size();i++){
	    if(outB[i] == '<'&&i>=1)
	    {
	        outB.erase(outB.begin()+i);
	        outB.erase(outB.begin()+i-1);
	        i=i-1;
	    }
	    else if(outB[i] == '<'&&i==0){
	        outB.erase(outB.begin());
	    }
	}
	string aString (outA.begin(),outB.begin());
	string bString (outB.begin(),outB.begin());
	cout<<aString<<endl<<bString<<endl;
	if(outA.size()!=outB.size()) return false;
	for(int i =0;i<outA.size();i++){
	    	if(outA[i] != outB[i])
	        return false;
	}
     return true;
    }

};

class plindromic{
public:
    vector<int> v= {1,0,1};
    int range = v.size();
    int cnt = 0;
    int ranges(){
        for (int j = 1; j < range; ++j)
        {
            int num = v[j - 1];
            for (int k = j; k <range; ++k)
            {
                num += v[k];
                if (num % 2 == 0)
                     {
                        cnt++;
                    }

            }
        }
        return cnt;
    }
};

class Solution2 {
public:
    /*
     * @param nums: A set of numbers
     * @return: A list of lists
     */
    vector<vector<int>> subsets(vector<int> &nums) {
        // write your code here
        vector<vector<int>> results;
        vector<int> subset ;
        vector<vector<int>> a = {{}};

        if(nums.empty()){
            return a;
        }

        sort(nums.begin(), nums.end());
        recursiveLoop(nums,results,subset,0);

        return results;

    }
    //definition of the recurse
    void recursiveLoop(vector<int> &nums,
                       vector<vector<int>> &results,
                       vector<int> &subset,
                       int startIndex
                        ){

        vector<int> newSubset = subset;
        results.push_back(newSubset);
    //content of the recurse
        for(int i = startIndex; i < nums.size(); i++){
            subset.push_back(nums[i]) ;
            recursiveLoop(nums,results,subset,i+1);
            subset.pop_back();
        }

    }


};

template<class T,class U>
class A{

public:
    T x;
    U y;
    A(){cout<<"Constructor is called"
            <<endl<<"templete success"<<endl;}
};


int main() {

//	const char * fn = "text.txt";
//	HandleFile file(fn, "r");
//	HandleFile file1 = file; you can not do this, because copy constrator is private
//	file.showfile();
//	bool flag = false;
//	flag = strTest();
//	if (flag) {
//		cout << "successfully find child" << endl;
//	}
//	else {
//		cout << "fail find child" << endl;
//	}
//    Solution2 s1;
//    vector<int> v;
//    cout<<s1.subsets(v)<<endl;

    hashTest *aTest = new hashTest();
    aTest->doSomeTest();

    A<char,char> a;
    A<int,hashTest> b;
    cout<<typeid(a.x).name()<<endl;
    cout<<typeid(b.y).name()<<endl;


    system("pause");
	return 0;
}
