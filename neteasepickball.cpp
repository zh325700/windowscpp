#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
      int sizeA = 0;
      int sizeB = 0;
      int sizeC = 0;
      int sizeD = 0;
      int weightA = 0;
      int weightB = 0;
      int weightC =0;
      int weightD =0;
      int score=0;
      int totalweight =0;
      int maxs =0;
      vector<int> balls;
      cin >>sizeA>>sizeB>>sizeC>>sizeD>>weightA>>weightB>>weightC>>weightD;
      int totalsize = sizeA+ sizeB+sizeC+sizeD;

      if(totalsize ==0){
        cout<<0<<endl;
        return 0;
      }

      balls.push_back(weightA);
      balls.push_back(weightB);
      balls.push_back(weightC);
      balls.push_back(weightD);

      if(sizeA == 1 && sizeB ==1 &&sizeC==1 && sizeD == 1){
          for(int i=0 ; i<4 ;i++){
            score = 0;
            totalweight += balls[i];
            for(int j =0;j<4 && j!=i;j++){
              score += (totalweight%10) * balls[j];
              totalweight += balls[j];
              for(int k=0; k<4 && k!=j && k!=i; k++){
                score += (totalweight%10) * balls[k];
                totalweight += balls[k];
                for(int l=0; l<4 && l!=j && l!=i && l!=k; k++){
                  score += (totalweight%10) * balls[l];
                  totalweight += balls[l];
                  maxs = max(maxs,score);
                }
              }
            }
          }
      }
      cout<<maxs<<endl;
      return 0;



}
