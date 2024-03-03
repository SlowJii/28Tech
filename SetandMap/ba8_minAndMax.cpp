#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n;
cin>>n;
set<int>se;
for(int i = 0;  i< n; i++)
{
    int tmp; cin>>tmp;
    se.insert(tmp);
}
int q;  cin>>q;
while(q--)
{
    int thaotac;
    cin>>thaotac;
    if (thaotac == 1)
    {
        int num; cin>>num;
        se.insert(num);
    }
    else if(thaotac == 2)
    {
        int num; cin>>num;
        se.erase(num);
    }
    else if(thaotac == 3)
    {
        cout<<*se.begin()<<endl;
    }
    else if(thaotac == 4)
    {
        cout<<*se.rbegin()<<endl;
    }
}
return 0;
}