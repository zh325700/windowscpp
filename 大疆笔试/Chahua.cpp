//一共N种花，插花需要每次选M种，每种R支。第二行输入每种花个数，求最多有多少种插花方法。
#include <iostream>
#include <vector>

using namespace std;

void example(int *acWelcome, int size){
    cout<<sizeof(acWelcome)<<endl;
    cout<<sizeof(acWelcome[0])<<endl;
    while(size--){
      cout<<*(acWelcome+size)<<'\t';
    }
    return;
}

int main(){
    vector<char> charVec(10,'a');
    cout<<"The size of the vector is: "<<charVec.size()<<endl;
    for(auto n: charVec){
      cout<<n<<'\t';
    }
    cout<<endl;
    int acWelcome[]={1,2,3,4,5,6,7,7,6,6,6,6,6};
    example(acWelcome,sizeof(acWelcome)/sizeof(acWelcome[0]));
    cout<<sizeof(acWelcome)<<endl;
    cout<<sizeof(acWelcome[0])<<endl;
    cout<<sizeof(acWelcome)/sizeof(acWelcome[0])<<endl;
    return 0;
}
