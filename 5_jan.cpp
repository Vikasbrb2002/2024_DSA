#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        temp.push_back(nums[0]);
        int l = 1; 
        for(int i=1;i<nums.size();i++){
            if(temp.back() < nums[i]){ 
                temp.push_back(nums[i]);
                l++;
            }
            else{ 
                int ind = lower_bound(temp.begin(),temp.end(),nums[i]) - temp.begin();
                temp[ind] = nums[i];
            }
        }
        return l;
    }
};
int main(){

Solution obj;
vector<int> nums={0,1,0,3,2,3};
cout<<obj.lengthOfLIS(nums)<<endl;;
return 0;
}