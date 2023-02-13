#include<iostream>
#include<vector> 
using namespace std;

void  printsubsequal_K(int index,vector<int> &vec,int arr[],int n,int sum,int s)
{
    if(index==n)
    {
        //if the sum is equals to the target sum then just print the vector
        if(s==sum)
    {
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
        return;
    }
    
    s+=arr[index];
    vec.push_back(arr[index]);
    //This will include the current value(take condition here) and call the further functions till it is included
    printsubsequal_K(index+1,vec,arr,n,sum,s);
    vec.pop_back();
    s-=arr[index];
    //for not pick condition just remove the current value from the sum variable
    //This will remove (not take condition here)
    printsubsequal_K(index+1,vec,arr,n,sum,s);

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