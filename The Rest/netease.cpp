#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
      int maxhp;
      int hp = 0;
      int ap = 0;
      int hm = 0;
      int am = 0;
      int b = 0;
      int d = 0;
      int roundnum=0;
      cin >>hp>>ap>>hm>>am>>b>>d;
      maxhp = hp;
      if(hp<am-d && ap<hm){
        cout << "IMPOSSIBLE"<<endl;
        return 0;
      }
      if(ap>=hm){
        cout<<1<<endl;
        return 0;
      }
      if(hp/am +1 > hm/ap){
        cout<<hm/ap +1<<endl;
        return 0;
      }
      while(hp >0){
        if(hp - am >0 ||(hp - am <=0 && hm-ap<0)){
          hm = hm - ap;
        }else{
          hp = maxhp;
        }
        hp = hp-am;
        roundnum++;
        if(hm<0){
          cout<<roundnum<<endl;
          return 0;
        }
      }
      cout << "IMPOSSIBLE"<<endl;
      // if(hp/am +1 > hm/ap){
      //   cout<<hm/ap<<endl;
      // }
return 0;

}
