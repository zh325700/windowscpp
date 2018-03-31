#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x;
    int total = 0;
    for(int i = 0; i<n; i++){
        int temp_number;
        cin >> temp_number;
        x.push_back(temp_number);
        total += temp_number;
    }
    sort(x.begin(),x.end());
    int sum1 = 0;
    for(int i = 0; i<n; i++){
        if(i%2==0)
            sum1 += x[i];
    }
    int sum2 = total-sum1;
    int difference = sum1-sum2;

    for(int i = 0; i<n; i+=2)
    {
        for(int j = 1; j<n; j+=2)
        {
            int temp_difference = x[i]-x[j];
            if((temp_difference<0 && difference <0)||(temp_difference>0 && difference >0) )
            {
                if(abs(temp_difference)<=abs(difference))
                {
                    sum1-=x[i];
                    sum1+=x[j];
                    sum2-=x[j];
                    sum2+=x[i];
                    difference = sum1-sum2;
                    if(difference == 0)
                        break;
                }
            }

        }
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}
