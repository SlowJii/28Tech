/*
Cho dãy số A[] gồm có N phần tử, có 3 thao tác như sau :

Thao tác 1 : Thêm 1 phần tử X vào mảng.

Thao tác 2 : Xóa 1 phần tử X khỏi mảng. Trong trường hợp phần tử X không xuất hiện trong mảng, sẽ không thực hiện xóa, nếu trong mảng có nhiều phần tử X thì chỉ xóa đi 1 phần tử X trong mảng.

Thao tác 3 : Truy vấn xem phần tử X có xuất hiện trong mảng hay không?

Ban đầu mảng A có N phần tử, với các truy vấn phần tử X trong mảng, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.

Gợi ý : Bài này vừa muốn xóa nhanh vừa muốn tìm kiếm nhanh lại phải lưu được giá trị trùng nhau => Sử dụng multiset
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int n;
    cin >> n;
    multiset<int> se;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)         se.insert(b);
        else if(a == 2)
        {
            auto it = se.find(b);
            if (it == se.end())
            {
                continue;
            }
            else    se.erase(it);
        }
        else if (a == 3)   
        {
            if (se.find(b) != se.end()) cout<<"YES"<<endl;
            else    cout<<"NO"<<endl;
        } 
    }
    return 0;
}