#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void rev(vector<int> &v)
{
    int start = 0;
    int end = v.size() - 1;
    while(start < end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
}
void nhap(vector<int> &v)
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
}
void in(vector<int>&v)
{
    for(auto x : v)
    {
        cout<<x<<" ";
    }
}
// main
int main(int argc, char const *argv[])
{
/*code*/ 
vector<int>vec;
nhap(vec);
rev(vec);
in(vec);
return 0;
}