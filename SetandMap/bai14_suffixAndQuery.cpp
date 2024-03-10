/*
Cho mảng A[] gồm N phần tử. Bạn được yêu cầu trả lời cho các truy vấn, mỗi truy vấn yêu cầu bạn đếm số các giá trị khác nhau từ chỉ số L tới chỉ số N - 1.

Gợi ý : Gọi F[i] là số lượng các giá trị khác nhau tính từ chỉ số i tới chỉ số n - 1 trong mảng, xây dựng trước mảng F[i], sau đó mỗi truy vấn chỉ cần truy cập vào F[l] là có thể tìm được số lượng các giá trị khác nhau từ l tới n - 1. Cách xây dựng mảng F[] là duyệt từ cuối về và dùng 1 set để lưu các giá trị khác nhau tính từ cuối, gán F[i] = set.size()
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
int a[n];
for(int i = 0; i < n; i++)
{
    cin>>a[i];
} 
set<int>se;
int f[n];
for(int i = n - 1; i >= 0; i--)
{
    se.insert(a[i]);
    f[i] = se.size();
}
int q;  cin>>q;
while(q--)
{
    int l;  cin>>l;
    cout<<f[l]<<endl;
}
return 0;
}