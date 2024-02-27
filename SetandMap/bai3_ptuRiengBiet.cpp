/*
Cho dãy số A[] gồm có N phần tử, bạn hãy liệt kê các giá trị xuất hiện trong dãy theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê một lần.
Gợi ý : Dùng set để lưu các phần tử đã được in ra trước đó, gặp phần tử a[i] thì kiểm tra nhanh trong set có giá trị a[i] chưa để in ra
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n;  cin>>n;
set<int> se;
for(int i = 0; i < n; i++)
{
    int x;  cin>>x;
    //neu x chua nam trong SET thi in ra
    if (se.find(x) == se.end())
    {
        cout<<x<<" ";
        se.insert(x);
    }
}
return 0;
}