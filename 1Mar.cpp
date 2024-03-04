#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        if(s.size()==1) return s;
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        // string rev = string(s.rbegin(), s.rend());
        int last=s.size()-1;
        int i=0;
        while(i<=last){
            if(s[i]=='0'){
                swap(s[i-1],s[last]);
                break;
            }
            i++;
        }
        return s;
    }
};
int main(){
Solution obj;
string s="1010011";
cout<<obj.maximumOddBinaryNumber(s)<<endl;

return 0;
}