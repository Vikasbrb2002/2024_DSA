#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int size,int i){
    int index=i;
    int left=2*index;
    int right=2*index+1;
    int largest=index;
    
        
        if(left<size && arr[left]>arr[largest])
           largest=left;

        if(right<size && arr[right]>arr[largest])
           largest=right;
        
        if(largest!=index){
            // left ya right me se koi > than current value
            swap(arr[largest],arr[index]);
            index=largest;
           heapify(arr,size,index);
        
    }
     
}
int main(){
  int arr[]={-1,12,50,60,30,40};
  heapify(arr,5,1);
  for(int i=1;i<=5;i++){
    cout<<arr[i]<<" ";
  }

return 0;
}