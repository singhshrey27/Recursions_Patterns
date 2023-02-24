#include<bits/stdc++.h>
using namespace std;
void sumofdigit(int num,int &sum){
    if(num<0){
        return;
    }
    
    int rem=num%10;
    sum=sum+rem;
    sumofdigit(num/10,sum);
}
int main()
{
    int n=1234;
    int sum=0;
    sumofdigit(n,sum);
    cout<<sum<<endl;
    return 0;
}