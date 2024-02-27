/*
Cho input gồm nhiều dòng, mỗi dòng gồm nhiều ký tự viết cách nhau 1 dấu cách. Bạn hãy tiến hành lưu các ký tự này vào vector, sau đó những ký tự là in hoa thì đổi thành in thường, in thường thì đổi thành in hoa, chữ số thì giữ nguyên và in ra màn hình. Bạn phải triển khai mã nguồn theo khuôn mẫu sau :

vector<char> nhap(){
    
}

vector<char> thaydoi(vector<char>){
    
}

void in(vector<char>){
    
}
int main(){
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);
}
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<char> nhap()
{
    vector<char> vec;
    char x;
    while (cin >> x)
    {
        vec.push_back(x);
    }
    return vec;
}
vector<char> thaydoi(vector<char> v)
{
    vector<char> res;
    for (char x : v)
    {
        if (islower(x))
            res.push_back((char)toupper(x));
        else if (isupper(x))
            res.push_back((char)tolower(x));
        else
            res.push_back(x);
    }
    return res;
}
void in(vector<char> v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);
    return 0;
}