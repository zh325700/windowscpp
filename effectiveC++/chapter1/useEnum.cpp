#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;
const char* const name = "Shuaigehan";
const std::string authorName("Scott Meyers");

class GamePlayer{
public:
  enum { NumTurns = 5 };
  int a[NumTurns];
};

int main(){

  GamePlayer player1;
  for(int i=0;i<5;i++){
    player1.a[i] = 11;
  }
  for(auto n :player1.a){
    cout<<n<<endl;
  }


  vector<int> nihao;
  nihao.push_back(100);
  nihao.push_back(200);

  for(auto n: nihao){
    cout<<n<<endl;
  }

return 0;
}
