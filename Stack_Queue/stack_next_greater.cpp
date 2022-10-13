#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int finale=0;
    void nextGreaterInsert(stack<int> &st,int ele){
        if(st.empty())
        {
            finale = -1;
            return;
        }
        if(st.top()>=ele){
            finale = st.top();
            return;
        }
        int elem = st.top();
        st.pop();
        nextGreaterInsert(st,ele);
        st.push(elem);
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int arr[1000000];
        stack<int> st;
        for(int i =nums2.size()-1;i>=0;i--){
            nextGreaterInsert(st,nums2[i]);
            cout<<finale<<endl;
            st.push(nums2[i]);
            arr[nums2[i]] = finale;
        }
        vector<int> elements;
        for(int i =0;i<nums1.size();i++){
            elements.push_back(arr[nums1[i]]);
        }
        return elements;
    }
};