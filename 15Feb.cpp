#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int last=nums.size()-1;
        int start=0;
        while(last>start){
        long long sum=0;
        for(int i=0;i<last;i++){
            sum+=nums[i];
        }
        if(sum<=nums[last]) last--;
        else
        return sum+nums[last];
        }
        return -1;
    }
};
int main(){

Solution obj;
vector<int> nums={1,12,1,2,5,50,3};
cout<<obj.largestPerimeter(nums);
return 0;
}