//H的水桶，注水速度X，h处有洞，流水速度Y，S秒以后水深（四舍五入）。

#include <iostream>
using namespace std;


int Time(int H,int x,int y,int h,int s){
  if(H<=0||H<h||x<=0||y<=0||h<0||s<0){
    return 0;
  }
  int timeToReachHole = h/x;
  int resultHeight=0;
  if(s<timeToReachHole){
    resultHeight = x*s;
  }else{
    if(y>=x){
      resultHeight = h;
    }else{
      resultHeight = h+(s-timeToReachHole)*(x-y);
    }
  }
  if(resultHeight>H){
    resultHeight = H;
  }
  return resultHeight;

}

int main(){
int H=0,x=0,y=0,h=0,s=0;
cin>>H>>x>>y>>h>>s;
int result = Time(H,x,y,h,s);
cout<<"height is :  "<<result<<endl;
return 0;
}
