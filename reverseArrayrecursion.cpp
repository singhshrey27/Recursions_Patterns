// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void fun(int arr[],int start,int end){
      if(start>=end){
          return;
      }
      int temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      fun(arr,start+1,end-1);
}
int main() {
    // Write C++ code here
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    fun(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}