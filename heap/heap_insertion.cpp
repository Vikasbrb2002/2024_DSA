#include<bits/stdc++.h>
using namespace std;
class heap {
    public:
    int arr[101];
    int size;

    heap(){
        size=0;
    }

    // value insert kario end me
    void insertion(int value){
        size=size+1;
        int index=size;
        arr[index]=value;
    
    // value to right(correct position) pe pahuchao
    while(index>1){
        int parentIndex=index/2;
        if(arr[parentIndex]<arr[index]){
            swap(arr[parentIndex],arr[index]);
            index=parentIndex;
        }
        else{
            break;
        }
    }

    }

    int deletion(){
        int ans=arr[1];
        arr[1]=arr[size];
        size--;
        int index=1;
        while(index<size){
        int left=2*index;
        int right=2*index+1;
        
        int largest= index;
        if(left<size && arr[largest]<arr[left])
          largest=left;

        if(right<size && arr[largest]<arr[right])
          largest=right;

        if(index==largest){
            // value is at correct position
            break; 

        }
        else{
            swap(arr[largest],arr[index]);
            index=largest;
        }
        }
        return ans;

    }
};

int main(){
  heap h;
  h.arr[0]=-1;
  h.arr[1]=100;
  h.arr[2]=50;
  h.arr[3]=60;
  h.arr[4]=30;
  h.arr[5]=40;
  h.arr[6]=45;
  h.arr[7]=55;
  h.arr[8]=10;
  h.arr[9]=20;

  h.size=9;
  
  cout<<"Before inserting 57 in heap "<<endl;
  for(int i=0;i<=h.size;i++){
    cout<<h.arr[i]<<" ";
  }
  h.insertion(57);
//   h.deletion();
  
  cout<<endl<<"After insertion : "<<endl;
  for(int i=0;i<=h.size;i++){
    if(h.arr[i]==57) cout<<"{"<<h.arr[i]<<"} ";
    else
    cout<<h.arr[i]<<" ";
  }
 
 cout<<endl<<"deleted node is : " << h.deletion();
  
  cout<<endl<<"After deleting root node : "<<endl;
  for(int i=0;i<=h.size;i++){
    if(h.arr[i]==57) cout<<"{"<<h.arr[i]<<"} ";
    else
    cout<<h.arr[i]<<" ";
  }

return 0;
}