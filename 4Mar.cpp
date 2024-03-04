#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());

        int score=0,maxxScore=0;
        
        int left=0,right=tokens.size()-1;
        while(left<=right) {
            if(tokens[left]<=power) {
                score++;
                maxxScore=max(maxxScore,score);
                power-=tokens[left];
                left++;
            }
            else if(score>0) {
               score--;
               power+= tokens[right];
               right--; 
            }
            else {
                break;
            }
        }
        return maxxScore;
    }
};
int main(){
Solution obj;
vector<int> nums={200,100};
int power=150;
cout<<obj.bagOfTokensScore(nums,power)<<endl;

return 0;
}