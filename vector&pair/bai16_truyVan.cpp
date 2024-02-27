/*
Bạn được cung cấp 1 bảng số gồm nhiều dòng, mỗi dòng có thể có số lượng số khác nhau và bạn cần chỉ ra giá trị nằm ở cột y của dòng x trong bảng số.
Input Format

Dòng 1 là N và Q : Số dòng và số truy vấn

N dòng tiếp theo mỗi dòng bao gồm số đầu tiên M là số lượng số của dòng đó, theo sau là M số của dòng này

Q dòng tiếp theo mỗi dòng là một truy vấn gồm dòng x và cột y, lưu ý dòng x và cột y được đánh số từ 1

Sample Input 0

5 5
8 29 20 78 68 62 92 71 37 
6 8 35 67 26 6 97 
9 81 50 15 93 62 33 28 87 28 
5 51 22 72 57 29 
8 0 76 49 71 23 41 22 92 
5 1
1 6
2 5
1 7
1 5
Sample Output 0

0
92
6
71
62
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int n, q;
    cin >> n >> q;
    vector<vector<int>> vec;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> row;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            row.push_back(x);
        }
        vec.push_back(row);
    }
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        x--;    y--;
        cout<<vec[x][y]<<endl;
    }
    return 0;
}