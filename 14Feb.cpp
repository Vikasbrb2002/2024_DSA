#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> first;
        vector<int> second;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) second.push_back(nums[i]);
            else first.push_back(nums[i]);
        }
        int i=0;
        while(i<first.size()){
            ans.push_back(first[i]);
            ans.push_back(second[i]);
            i++;
        }
        return ans;
    }
};
int main(){
Solution obj;
vector<int> nums={3,1,-2,-5,2,-4};
vector<int> ans=obj.rearrangeArray(nums);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

return 0;
}