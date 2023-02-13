#include<bits/stdc++.h>
using namespace std;
//Leetcode combinationSum problem : eg arr[]={2,3,6,7};  target =7
//use a element as many times you can => ans=[[2,2,3],[7]]

/* Time : O(2^n)*k    since every element has two choices hence 2^n and, where k is the time taken to store in another vector when the condition is hitted here
*/

void combinationsum(int index,int target,vector<vector<int>> &ans,vector<int> &ds,int arr[],int n){
    if(index==n)
    {
        //at the end we will get our required answer if it follows the target =0 condition then it
        // a possible answer for our requirement
        if(target==0)
        {
            ans.push_back(ds);
        }
        return;
    }
    //This is for pickup the element
    if(arr[index]<=target)
    {
        ds.push_back(arr[index]);
        combinationsum(index,target-arr[index],ans,ds,arr,n);
        //after all left function calls gets over then it checks for the right part
        ds.pop_back();
    }
   
    combinationsum(index+1,target,ans,ds,arr,n);

}

int main()
{
    int arr[]={2,3,6,7};
    int target=7;
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    vector<vector<int>> ans;
    combinationsum(0,target,ans,ds,arr,size);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

 return 0;
}