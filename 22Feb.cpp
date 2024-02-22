#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1) return 1;
        if(trust.size()==0 && n>1) return -1;
        vector<int> freq(n+1,0);
        int posfact=0,negfact=0;
        for(int i=0;i<trust.size();i++){
           if(trust[i][0]<trust[i][1]){
            //    negfact--;
            //    posfact++;
               freq[trust[i][0]]--;
               freq[trust[i][1]]++;
           }
           else if(trust[i][0]>trust[i][1]){
               
               freq[trust[i][0]]--;
               freq[trust[i][1]]++;

           }
        }
        for(int i=0;i<n+1;i++){
            if(freq[i]==n-1) return i;

        }
        return -1;
    }
};
int main(){
Solution obj;
int n=3;
vector<vector<int>> trust={{1,3},{2,3},{3,1}};
cout<<obj.findJudge(n,trust)<<endl;

return 0;
}