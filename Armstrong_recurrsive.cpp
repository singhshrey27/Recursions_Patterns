#include<bits/stdc++.h>
using namespace std;

bool armstrong(int originalvalue,int num,int sum)
{
if(num<0)
{
    if(sum==originalvalue)
    {
        return true;
    }
}
int rem=num%10;
sum+=(rem*rem*rem);
armstrong(originalvalue,num/10,sum);

return false;
}

int main()
{
    int num=371;
    int sum=0;
    int originalvalue=num;
    if(armstrong(num,originalvalue,sum))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;
}