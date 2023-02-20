#include<bits/stdc++.h>
using namespace std;
int bin(int arr[],int start,int end,int target)
{
    int mid=(start+end)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        bin(arr,start,mid-1,target);
    }
    else{
        bin(arr,mid+1,end,target);
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int target=5;
    cout<<bin(arr,0,5,target);
}