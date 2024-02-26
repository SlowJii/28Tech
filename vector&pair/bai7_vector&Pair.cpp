#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
int n;
cin>>n;
vector<pair<int,int>> points(n);// neu ko có (n) thi k nhap dc pair ?
for(int i = 0 ; i < n; i++)
{
    cin>>points[i].first>>points[i].second;
} 
for(int i = 0; i < n; i++)
{
    double x = points[i].first;
    double y = points[i].second;
    double ans = sqrt(x*x + y*y);
    cout<<fixed<<setprecision(2)<<ans<<" ";
}
return 0;
}