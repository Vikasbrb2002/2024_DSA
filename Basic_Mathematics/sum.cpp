#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> &arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
          ans+=arr[i];
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3};
 int sum=1+fun(arr);
cout<<sum;
return 0;
}