#include <iostream>
#include <string>
#include <array>

using namespace std;
const char* const name = "Shuaigehan";
const std::string authorName("Scott Meyers");

class GamePlayer{
public:

  static int NUM ;
  int value =0;

  GamePlayer(){
    cout<<"a Player is created"<<endl;
    NUM++;
  }
  static int getPNUM(){
      return PNUM;
  }
  int* getScoreArray(){
    return scores;
  }
private:
  static const int PNUM =10;
  int scores[PNUM];
};

int GamePlayer::NUM  = 0;
const int GamePlayer::PNUM;
int main(){

  cout << authorName<<endl;

/*const pointor*/
  // int const *n = &value;
  // // *n = 100;
  // cout<<*n<<endl;
  // cout<< name <<endl;
GamePlayer player1;
//in this case, declare function player with return type GamePlayer
GamePlayer player2();
int * arr = player1.getScoreArray();
for(int i=0;i<GamePlayer::getPNUM() ;i++){
  arr[i] = 100;
}

for(int i=0;i<GamePlayer::getPNUM();i++){
  cout<<"i th of arr is : "<<arr[i]<<endl;
}

cout<<GamePlayer::getPNUM()<<endl;


}
