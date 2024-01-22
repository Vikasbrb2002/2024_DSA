#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int sum=0;
        int total=size*(size+1)/2;
        vector<int> store;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) {
                store.push_back(nums[i]);
                nums.erase(nums.begin()+i);
            }
        }
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int number=total-sum;
        store.push_back(number);
        return store;
    }
};
int main(){
Solution obj;
vector<int> nums={1,2,2,3};
vector<int> ans=obj.findErrorNums(nums);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

return 0;
}