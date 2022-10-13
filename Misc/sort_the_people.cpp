#include<bits/stdc+++.h>
using namespace std;
class NameHeight
{
    public:
    String name;
    int height;
    NameHeight(int ht,Sting nm)
    {
        name = nm;
        height = ht;
    }
};
vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    NameHeight nmh[names.size()];
    for(int i=0;i<names.size();i++)
    {
        nmh[i](names[i],height[i]);
    } 
    sort(nmh,nmh+nmh+nmh.length(),comparatorInterval);
    for(NameHeight &ch:nmh){
        names[i] = ch;
    }
}
bool comparatorInterval(NameHeight h1,NameHeight h2){
    return h1.height>h2.height;
}