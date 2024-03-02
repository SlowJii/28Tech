/*
Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, nếu 2 từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ được xếp trước.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// ham sort yeu cau tra ve gia tri boolean de xac dinh thu tu cua 2 phan tu
bool customSort(string &a, string &b)
{
    if (a.length() == b.length())
    {
        return a < b;
        // neu chieu dai bang nhau thi sap xep theo thu tu tu dien
    }
    // sap xep theo chieu dai tang dan
    return a.length() < b.length();
}
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string s;
getline(cin,s);
stringstream ss(s);
string word;
vector<string> v;
while(ss>>word)
{
    v.push_back(word);
}
sort(v.begin(),v.end(), customSort);
for(auto x : v)
{
    cout<<x<<" ";
}
return 0;
}