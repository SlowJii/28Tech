/*
Cho 1 mảng A[] gồm N số nguyên, 28tech cung cấp cho bạn các thao tác sau :

1 x : Thêm phần tử x vào mảng A[]

2 x : Xóa phần tử x khỏi mảng A[] nếu x tồn tại trong mảng, và nếu x xuất hiện nhiều lần bạn chỉ xóa đi 1 phần tử duy nhất.

3 x : Chỉ ra giá trị đầu tiên của phần tử >= x trong A[] khi mảng A[] được sắp xếp tăng dần, nếu không tồn tại in ra -1

4 x : In ra giá trị của phần từ lớn nhất <= x trong mảng A[], nếu không tồn tại phần tử này thì in ra -1.
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
    while (n--)
    {
        int tmp;
        cin >> tmp;
        se.insert(tmp);
    }
    int quest;
    cin >> quest;
    while (quest--)
    {
        int tt, x;
        cin >> tt >> x;
        if (tt == 1)
        {
            se.insert(x);
        }
        else if (tt == 2)
        {
            if (se.find(x) != se.end())
            {
                se.erase(se.find(x));
                // xoa bang iterator thi chi xoa di mot lan
            }
        }
        else if (tt == 3)
        {
            // lower_bound tro ve phan tu dau tien >= x
            auto it = se.lower_bound(x);
            // khong dung se.lower_bound(se.begin(),se.end(),x) vi no cham (SLOW) vkl
            if (it != se.end())
                cout << *it << endl;
            else
                cout << "-1" << endl;
        }
        else
        {
            // upper_bound tro ve phan tu dau tien > x
            //  vi du: 1 2 3 3 4 5. x = 4, vay iterator tro den x = 5, lay it-- la ra x = 4 va la ptu lon nhat <= x
            auto it = se.upper_bound(x);
            it--;
            if (it != se.end())
                cout << *it << endl;
            else
                cout << "-1" << endl;
        }
    }
    return 0;
}