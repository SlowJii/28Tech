#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n;
cin>>n;
vector <pair<pair<int,int>, int>> points(n);
for(int i = 0; i < n; i++)
{
    cin>>points[i].first.first>>points[i].first.second>>points[i].second;
}
for (int i = 0; i < n; i++)
{
    /* code */
    int sum = points[i].first.first + points[i].first.second + points[i].second;
    cout<<sum<<" ";
}

return 0;
}