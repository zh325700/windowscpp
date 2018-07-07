#include <iostream>
#include <vector>

using namespace std;
// 这题的重点是把从左往右的替换变成了从后往前的替换， 节省了时间复杂度
void replaceBlank(char input[],int lengthCapacity){
  if(input==NULL||lengthCapacity <=0){
    return;
  }

  int originalLength = 0;
  int i=0;
  int numOfSpace=0;
  while(input[i] != '\0'){
    originalLength++;
    if(input[i] == ' '){
        numOfSpace++;
    }
    i++;
  }
  int newLength = originalLength + numOfSpace*2;
  if(newLength > lengthCapacity){
    return;
  }
  int indexP2 = newLength-1;
  int indexP1 = originalLength -1;

  while(indexP1>=0 && indexP1<indexP2){
    if(input[indexP1] == ' '){
      input[indexP2--] = '0';
      input[indexP2--] = '2';
      input[indexP2--] = '%';
      indexP1 --;
    }else{
      input[indexP2--] = input[indexP1--];
    }
  }
}

int main(){
  char input[100] = "beijing huanying ni";
  cout<<input<<endl;
  replaceBlank(input,100);
  cout<<input<<endl;
  return 0;
}
