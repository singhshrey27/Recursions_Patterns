#include<iostream>
#include<vector> 
using namespace std;

void  printsubs(int index,vector<int> &vec,int arr[],int n)
{
    if(index==n)
    {
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
        if(vec.size()==0)
        cout<<"{}"<<endl;
        //for printing the null value
        cout<<endl;
        return;
    }
    vec.push_back(arr[index]);
    //This will include the current value(take condition here) and call the further functions till it is included
    printsubs(index+1,vec,arr,n);
    vec.pop_back();
    //This will remove (not take condition here)
    printsubs(index+1,vec,arr,n);

}

int main()
{
    int arr[]={3,1,2};
    vector<int> vec;
    int n=3;
    printsubs(0,vec,arr,3);
    return 0;
}
//time compexity is around 2^n as every element is having two option of getting picked or not