#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int gongyueshu(int x, int y)
{
	int z = y;
	while(x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;
	}
	return z;
}

int gongbeishu(int x, int y){
  return (x*y)/gongyueshu(x,y);
}


int main(){
  int n=0,w=0;
  cin>>n>>w;
  if(n==0){
    cout<<w<<endl;
    return 0;
  }
  vector<vector<int>> input(n, vector<int>(4));
  for(int i =0;i<n;i++){
    for(int j=0;j<4;j++){
      cin>>input[i][j];
    }
  }

  int zuidagongbeishu =1;
  for(int i =0;i<n;i++){
    zuidagongbeishu = gongbeishu(zuidagongbeishu,input[i][3]);
  }

  int qiwang = 0;
  for(int i=0;i<n;i++){
    int qiwangThisline =0;
    int beishu = zuidagongbeishu/input[i][3];
    qiwangThisline = (-1)*input[i][0]*input[i][2]*beishu + input[i][1]*(input[i][3]-input[i][2])*beishu;
    qiwang +=qiwangThisline;
  }

  int zhengshubufen = 0;
  int fenzi =0;
  int fenmu =0;
  fenmu = zuidagongbeishu;
  zhengshubufen = qiwang/zuidagongbeishu;
  fenzi = qiwang - zhengshubufen*zuidagongbeishu;
  int ifzuijian = gongyueshu(fenzi,fenmu);
  fenzi = fenzi/ifzuijian;
  fenmu = fenmu/ifzuijian;
  if(qiwang>0){
    cout<<zhengshubufen+w<<'+'<<fenzi<<'/'<<fenmu<<endl;
  }else if (qiwang <0){
    cout<<zhengshubufen+w-1<<'+'<<fenmu+fenzi<<'/'<<fenmu<<endl;
  }else{
    cout<<w<<endl;
  }


  return 0;
}
