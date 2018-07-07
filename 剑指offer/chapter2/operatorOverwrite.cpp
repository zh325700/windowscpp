#include <iostream>
#include <string>
#include <string.h>
#include <cctype>
#include <cstring>

using namespace std;

class CMYString{
public:
CMYString(char *pData){
  m_pData = pData;
}
CMYString(const CMYString& str){
  m_pData = str.m_pData;
}
CMYString& operator =(const CMYString& str);
~CMYString(){

}
char * getm_pData(){
  return m_pData;
}
private:
  char *m_pData;
};

CMYString& CMYString::operator =(const CMYString& str){
  if(this != &str){
     CMYString temp(str);

     temp.m_pData = m_pData;
     m_pData = str.m_pData;

  }

  return *this;
}

int main(){
  CMYString A("qunimade");
  CMYString B("wohenhao");
  CMYString C("budeliao");
  CMYString D("zenmshuo");
  A=B=C;
  C=D;
  cout<<A.getm_pData()<<endl;
  cout<<C.getm_pData()<<endl;
  return 0;
}
