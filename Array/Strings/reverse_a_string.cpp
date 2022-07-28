#include<bits/stdc++.h>
using namespace std;
    void reverseString(vector<char>& s) {
    stack<char> st;
    char temp;
    for(int i =0;i<s.size()/2;i++){
           temp = s[i];
           s[i] = s[s.size()-1-i];
           s[s.size()-i-1] = temp;
    }
    }