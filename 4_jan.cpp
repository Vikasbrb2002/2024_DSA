#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
          
         int result=0;
        int count1=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            
             mp[nums[i]]++;
        }
        for(auto &value:mp){
            if(value.second==1) return -1;
            if(value.second==2 || value.second==4) result+=value.second/2;
           else if(value.second%3==0) {
            result+=value.second/3;
            }else if(value.second%3==1 || value.second%3==2){
                result+=((value.second)/3)+1;
            }
            
        
        }
        return result;
        // return *max_element(nums.begin(),nums.end());
       
    }
};
int main(){
Solution obj;
vector<int> nums={2,3,3,2,2,4,2,3,4};
cout<<obj.minOperations(nums)<<endl;

return 0;
}