#include<bits/stdc++.h>
using namespace std;
bool checkStraightLine(vector<vector<int>>& coordinates) {
    pair<int,int> p;
    vector<pair<int,int>> v;
    for(auto i = coordinates.begin();i!=coordinates.end();i++){
        v.push_back(new pair((*i)[0],(*i)[1]));
    }
    auto lambda = [](int a,int b){
        pair<int,int> p1=v[0];
        pair<int,int> p2=v[1];
        float m = (p2.second-p1.second)/(p1.second-p1.first);
        float res = (b-p1.second)-m*(a-p1.first)
        return res;
    }
    for(auto i = v.begin();i!=v.end();i++){
        if(lambda((*i).first,(*i).second)!=0)
            return false;
    }
}