/*
Cho N điểm trong hệ tọa độ Oxy, bạn hãy xác định có bao nhiêu điểm riêng biệt trong các điểm đã cho. Gợi ý : Dùng set hoặc map lưu pair
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
int n;
cin>>n;
set<pair<int,int>>se;
for(int i = 0; i < n; i++)
{
    int x,y;
    cin>>x>>y;
    se.insert(make_pair(x,y));
} 
cout<<se.size();
return 0;
}