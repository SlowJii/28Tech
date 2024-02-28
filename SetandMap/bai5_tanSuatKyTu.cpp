/*
Cho N kí tự được nhập từ bàn phím, bạn hãy thực hiện các yêu cầu sau

In ra kí tự có từ điển nhỏ nhất và tần suất xuất hiện của nó
In ra kí tự có từ điển lớn nhất và tần suất xuất hiện của nó
In ra các kí tự xuất hiện trong N kí tự đã cho theo thứ tự từ điển tăng dần kèm tần suất của nó
In ra các kí tự xuất hiện trong N kí tự đã cho theo thứ tự từ điển giảm dần kèm tần suất của nó
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
    map<char, int> mp;
    while (n--)
    {
        char x;
        cin >> x;
        mp[x]++;
    }
    auto maxElement = mp.begin(); //maxElement la mot con tro tro den phan tu dau tien cua map
    auto minElement = prev(mp.end()); // minElement la mot con tro tro den phan tu cuoi cua map
    cout<<maxElement->first<<" "<<maxElement->second<<endl; //su dung -> de tro den thanh vien cua container day, trong truong hop nay maxElement->first tro den thanh vien mp.firts co vi tri dau tien trong map
    cout<<endl;
    cout<<minElement->first<<" "<<minElement->second<<endl;
    cout<<endl;
    // in ra theo thu tu tu dien tang dan kem theo tan suat
    for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;
    // in ra theo thu tu tu dien giam dan kem theo tan suat
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}