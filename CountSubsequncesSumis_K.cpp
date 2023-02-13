#include<iostream>
using namespace std;

int countsubsequences(int arr[],int index,int target,int s,int n)
{
  //base condition 
  if(index==n)
  {
    if(s==target)
    return 1;
    else
    return 0;
  }
  s+=arr[index];
  int l=countsubsequences(arr,index+1,target,s,n);
  //This call is for picking up

  s-=arr[index];
  int r=countsubsequences(arr,index+1,target,s,n); 
   //This call is not picking up the element 

  return l+r;
}
int main()
{
    int arr[]={1,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<countsubsequences(arr,0,2,0,size);
}