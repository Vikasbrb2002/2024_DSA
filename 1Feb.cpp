#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        // if(nums.size()%3!=0) return ans;
        sort(nums.begin(),nums.end());
        int start=0,count=0;
       
                vector<int> v;
            for(int i=0;i<=nums.size();i++){
                if(count%3!=0 || count==0){
                v.push_back(nums[i]);
                count++;
                }
                else{
                    i--;
                    count=0;
                    // start=start+2;
                   int maxi= *max_element(v.begin(),v.end());
                   int mini=*min_element(v.begin(),v.end());
                    
                   if(maxi-mini>k){
                       return {};
                   }else{
                       ans.push_back(v);
                        v.clear();
                   }
                }
               
               
            }
         return ans;
    }
};
int main(){
  Solution obj;
  vector<int> nums={1,3,4,8,7,9,3,5,1};
  int k=2;
  vector<vector<int>> ans=obj.divideArray(nums,k);
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<ans[i][j];
    }
    cout<<endl;
  }
return 0;
}