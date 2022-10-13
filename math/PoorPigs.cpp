#include<bits/stdc++.h>
using namespace std;
int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int intervals = minutesToTest/minutesToDie;
        if(buckets==1)
            return 0;
        int  pigs = 1;
        while(true){
            int testability = pow(2,pigs)-1;
            if(buckets-(testability*intervals)<=1)
            {
                break;
            }else{
                pigs++;
            }
        }
        return pigs;
}
int main(){
    int n,a,b;
    cin>>n;
    cin>>a;
    cin>>b;
    cout<<poorPigs(n,a,b);    
}