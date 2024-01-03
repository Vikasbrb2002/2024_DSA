#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevcount=0;
        int currcount;
        int result=0;
        for(int i=0;i<bank.size();i++){
            
                currcount=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1')  currcount++;

            }
            if(currcount==0) continue;
            if(prevcount==0 && currcount!=0)  prevcount=currcount;
            else{
                result=result+prevcount*currcount;
                prevcount=currcount;
            }
           
        }
        return result;
    }
};
int main(){
  Solution obj;
  vector<string> bank={"011001","000000","010100","001000"};
  cout<<obj.numberOfBeams(bank);

return 0;
}