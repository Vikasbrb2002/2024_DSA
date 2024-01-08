#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long area=0;
        long long result;
        float dia;
        float initialDia=0;
        for(int i=0;i<dimensions.size();i++){
          
                
    dia=sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]);
                  result=dimensions[i][0]*dimensions[i][1];
                  if(dia>initialDia || dia==initialDia && result >area) {
                    area=result;
                    initialDia=dia;
                }
             } 
        
        return area;
    }
};
int main(){
    Solution obj;
    vector<vector<int>> nums={{9,3},{8,6}};
    cout<<obj.areaOfMaxDiagonal(nums);


return 0;
}