#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       string s="123456789";
       vector<int> ans;
       for(int i=0;i<9;i++){
           string ss="";
           for(int j=i;j<9;j++){
               ss+=s[j];
               int num=stoi(ss);
               if(num<=high && num>=low) ans.push_back(num);
           }
       }
       sort(ans.begin(),ans.end());
       return ans;
    }
};
int main(){
Solution obj;
int low =100,high=300;
vector<int> ans=obj.sequentialDigits(low,high);
for(int i=0;i<ans.size();i++){
    cout<<"["<<ans[i]<<"]";
}

return 0;
}