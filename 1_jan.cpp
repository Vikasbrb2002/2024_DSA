#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
       while(i<g.size() && j<s.size())
        {
                if(s[j]>=g[i])
                {
                    count++;
                    if(count==s.size())
                    {
                        return count;
                    }
                    i++;
                }
                j++;
        }        
        return count;
   
    }
};
int main(){

   Solution obj;
   vector<int> g={1,2,3};
   vector<int> s={1,1};
   cout<<obj.findContentChildren(g,s)<<endl;


return 0;
}