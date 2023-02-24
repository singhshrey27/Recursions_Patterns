#include<bits/stdc++.h>
using namespace std;
 
 void oddevensum(int num,int &odd,int &even){
    if(num<=0)
    return;
    
    //repetition part 
    int rem=num%10;
    if(rem%2==0){
        even+=rem;
    }
    else{
        odd+=rem;
    }
    oddevensum(num/10,odd,even);
 }

 int main()
 {
    int num=123456;
    int arr[2];
    int odd=0,even=0;
    oddevensum(num,odd,even);
    arr[0]=odd;
    arr[1]=even;
    cout<<arr[0]<<" "<<arr[1];
 }