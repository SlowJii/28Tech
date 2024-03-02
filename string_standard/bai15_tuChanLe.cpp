/*
Cho xâu kí tự S, trong xâu S có nhiều từ được phân cách nhau bởi 1 hoặc 1 vài dấu cách. Nhiệm vụ của bạn là đối với những từ xuất hiện ở vị trí lẻ thì thì in ra từ đó, còn những từ xuất hiện ở vị trí chẵn thì trước khi in từ đó bạn phải lật ngược từ đó trước. Các từ khi in viết cách nhau đúng 1 dấu cách và sau từ cuối cùng ko có dấu cách thừa.


*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string reverseString(string s)
{
    string tmp;
    for(int i = s.size()-1; i >= 0; i--)
    {
        tmp.push_back(s[i]);
    }
    return tmp;
}
// main
int main(int argc, char const *argv[])
{
/*code*/
string s;
getline(cin,s);
vector<string>vec;
stringstream ss(s);
string word;
while(ss>>word)
{
    vec.push_back(word);
} 
for(int i = 0; i < vec.size(); i++)
{
    if (i % 2 != 0)
    {
        vec[i] = reverseString(vec[i]);
    }
}
for(int i = 0; i < vec.size();i++)
{
    cout<<vec[i]<<" ";
}
return 0;
}