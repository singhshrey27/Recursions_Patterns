#include<iostream>
using namespace std;
void fun(int num){
    if(num<1)
    return;
    else
    cout<<num<<" ";
    fun(num-1);
}
int main(){
    int n=7;
    fun(n);
    return 0;
}