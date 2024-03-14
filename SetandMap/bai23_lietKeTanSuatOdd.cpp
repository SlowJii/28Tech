#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
Cho mảng A[] gồm N phần tử, bạn hãy in ra các giá trị có số lần xuất hiện chẵn trong mảng.


*/
// main
int main(int argc, char const *argv[])
{
/*code*/
int n;
cin>>n;
map<int,int> myMap;
for(int i = 0; i < n; i++)
{
    int x;  cin>>x;
    myMap[x]++;
}
for(auto x : myMap)
{
    if (x.second % 2 == 0)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
cout<<endl;
for(auto it = myMap.rbegin(); it != myMap.rend(); it ++)
{
    if ((*it).second % 2 == 0)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
return 0;
}