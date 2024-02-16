#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
      unordered_map<int,int> mp;
      for(auto &i:arr){
          mp[i]++;
      }  
      vector<int> ans;
      for(auto &val:mp){
          ans.push_back(val.second);
      }
      sort(ans.begin(),ans.end());
      for(int i=0;i<ans.size();i++){
          k=k-ans[i];
          if( k<0) return ans.size()-i;
      }
      return 0;
    }
};
int main(){
Solution obj;
vector<int> arr={4,3,1,1,3,3,2};
int k=3;
cout<<obj.findLeastNumOfUniqueInts(arr,k);

return 0;
}