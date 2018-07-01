#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  vector<pair<unsigned int,unsigned int>> PBUFs;
  unsigned  int payload_len ;
  unsigned  int datalength;
  cin>>payload_len;
  cin>>datalength;
  // cout<<"payload length and data length are:"<<payload_len<<" and "<<datalength<<endl;
  string pbufs;
  while(getline(cin,pbufs)){
      if(pbufs == "end"){
        break;
      }
      int dotpos = pbufs.find(',');
      // cout<<"dotpos is: "<<dotpos<<endl;
      string offset = pbufs.substr(0,dotpos);
      string data_len = pbufs.substr(dotpos+1);
      unsigned  int offset_num = atoi(offset.c_str());
      unsigned  int data_len_num = atoi(data_len.c_str());

      PBUFs.push_back(make_pair(offset_num,data_len_num));
  }

  int size_of_obufs = PBUFs.size();
  if(payload_len-PBUFs[size_of_obufs-1].second>datalength){
    PBUFs[size_of_obufs-1].second = PBUFs[size_of_obufs-1].second+datalength;
  }else if(datalength<=payload_len){
    PBUFs.push_back(make_pair(0,datalength));
  }else{
    PBUFs.push_back(make_pair(0,payload_len));
    PBUFs.push_back(make_pair(0,datalength-payload_len));
  }

  for(auto apair :PBUFs){
    if(apair.second){
      cout<<apair.first;
      cout<<',';
      cout<<apair.second<<endl;
    }

  }

  return 0;
}
