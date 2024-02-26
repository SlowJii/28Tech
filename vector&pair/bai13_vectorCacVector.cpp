#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void nhap(vector<vector<int>> &v, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }
}
void xuat(vector<vector<int>> &v, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
void rev(vector<vector<int>> &v, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = m - 1;
        while(start < end)
        {
            swap(v[i][start], v[i][end]);
            start++;
            end--;
        }
    }
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v;
    nhap(v,n,m);
    rev(v,n,m);
    xuat(v,n,m);
    return 0;
}