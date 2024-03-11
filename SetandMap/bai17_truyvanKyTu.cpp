#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
Huong giai quyet:
1. Ki tu co tan suat lon nhat va co thu tu tu dien nho nhat
    Do MAP tu sap xep tu be den lon nen chi can duyet MAP tu trai qua phai
    va tim key nao co value lon nhat
2. Ki tu co tan suat xuat hien nho nhat va co thu tu tu dien lon nhat
    Duyet MAP tu phai qua trai va tim key co value lon nhat
3. Tim so luong ki tu khac nhau: in ra tong so key
*/
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string s;
cin>>s;
map<char,int> mp;
for(int i = 0; i < s.length(); i++)
{
    mp[s[i]]++;
}
int fre_1 = INT_MIN;
int fre_2 = INT_MAX;
char ans_1, ans_2;
for(auto x : mp)
{
    if (x.second > fre_1)
    {
        fre_1 = x.second;
        ans_1 = x.first;
    }
}
for(auto it = mp.rbegin(); it != mp.rend(); ++it)
{
    if (it->second < fre_2)
    {
        fre_2 = it->second;
        ans_2 = it->first;
    }
}
cout<<ans_1<<" "<<fre_1<<endl;
cout<<ans_2<<" "<<fre_2<<endl;
cout<<mp.size();
return 0;
}