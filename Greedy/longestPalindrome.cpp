#include<bits/stdc++.h>
using namespace std;
int longestPalindrome(string s)
{
    cout<<s.length()<<endl;
    map<char,int> map;
    for(int i =0;i<s.length();i++)
    {
        map[s[i]]++;
    }
    for(auto &ele:map)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    int sum =0;
    int max =0;
    for(auto &ele : map)
    {
        if(ele.second%2==0){
            sum+=ele.second;
        }else{
            if(max<ele.second){
                max = ele.second;
            }
        }
    }
    sum+=max;
    return sum;
}
int main()
{

    int n = longestPalindrome("civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth");
    cout<<n<<endl;
    return 0;
}