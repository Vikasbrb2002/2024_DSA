#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int square;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            square=nums[i]*nums[i];
            ans.push_back(square);
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};
int main(){
  Solution obj;
  vector<int> nums={1,0,-4,9,3};
  vector<int> ans=obj.sortedSquares(nums);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

return 0;
}   