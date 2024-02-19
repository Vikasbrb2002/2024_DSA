#include<bits/stdc++.h>
using namespace std;
 bool check_power(int n){
    if(n==0 || n==INT_MAX || n==INT_MIN) return false;
    if(n & n-1) return false;
    else return true;
 }
int main(){
 int n=16;
 if(check_power(n)){
    cout<<"number can be represented in power of 2"<<endl;
 }else cout<<"False"<<endl;

return 0;
}