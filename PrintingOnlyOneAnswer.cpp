#include<iostream>
#include<vector> 
using namespace std;
/*Problem and modification : If we want to print only one answer and we will avoid the further function calls
then use this method*/

bool  printsubsequal_K(int index,vector<int> &vec,int arr[],int n,int sum,int s)
{
    if(index==n)
    {
    //if the sum is equals to the target sum then just print the vector
        if(s==sum)
        {
        for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
        
        return true;
        }
        else
        return false;
    }
    
     vec.push_back(arr[index]);
    s+=arr[index];
    //This will include the current value(take condition here) and call the further functions till it is included
    if(printsubsequal_K(index+1,vec,arr,n,sum,s)==true);
    return true;

    vec.pop_back();
    s-=arr[index];

    //for not pick condition just remove the current value from the sum variable
    //This will remove (not take condition here)
    if(printsubsequal_K(index+1,vec,arr,n,sum,s)==true);
    return true;

    return false;
}

int main()
{
    int arr[]={1,2,1};
    vector<int> vec;
    int n=3;
    int target=2;
    printsubsequal_K(0,vec,arr,n,target,0);
    return 0;
}
//time compexity is around 2^n as every element is having two option of getting picked or not