#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;
        string res="";
        int flag;
        int i=0;
        while(i<words.size()){
            ans=words[i];
            int j=0;
            int k=ans.size()-1;
            while(j<=k){
                flag=0;
             if(ans[j]!=ans[k]){
                 break;
            
             }
             else{
             j++;
             k--;
             flag=1;
             }
            }
            if(flag==1)
            return ans;
           else
            i++;
            
            //  else return res;
        }
       return res;
    }
};
int main(){
Solution obj;
vector<string> ss={"abc","car","ada","racecar","cool"};
cout<<obj.firstPalindrome(ss);

return 0;
}