/*
Cho mảng A[] gồm N phần tử, gọi B[] là mảng chứa các phần tử khác nhau trong mảng A[], bạn hãy in ra : - Số lượng phần tử của mảng B

Giá trị lớn nhất, nhỏ nhất của mảng B[]

Giá trị lớn thứ nhỉ, nhỏ thứ nhì của mảng B[]

Dữ liệu đảm bảo B[] có ít nhất 2 phần tử.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n; cin>>n;
int a[n];
set<int>se;
for(int i = 0; i < n; i++)
{
    cin>>a[i];
    se.insert(a[i]);
}
cout<<se.size()<<endl;
auto left = se.begin();
auto right = prev(se.end());
cout<<*right<<" "<<*left<<endl;
right--;
left++;
cout<<*(right)<<" "<<*(left);
return 0;
}