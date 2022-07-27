#include<bits/stdc++.h>
using namespace std;
vector<int> decompressRLElist(vector<int>& nums) {
  vector<int> v;
    int cnt =0;
    for(int i =0;i<nums.size();i+=2){
        int num1 = nums[i];
        int num2 = nums[i+1];
        while(cnt<num1){
            v.push_back(num2);
            cnt++;
        }
        cnt=0;
    }
    return v;        
}