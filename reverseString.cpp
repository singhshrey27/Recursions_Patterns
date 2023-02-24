#include<bits/stdc++.h>
using namespace std;
void reversestring(string &s,int start,int end)
{
    if(start>=end)
    {
    return;
    }

    char temp=s[start];
    s[start]=s[end];
    s[end]=temp;

    reversestring(s,start+1,end-1);
}
int main()
{
    string s="abcd";
    int n=s.length()-1;
    reversestring(s,0,n);
    cout<<s<<endl;
    return 0;
}