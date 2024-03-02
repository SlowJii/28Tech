/*
Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện đếm số lượng các từ khác nhau trong xâu mà không phân biệt hoa thường, ví dụ "28TecH" được coi là giống với từ "28teCH". (Bài này các bạn có thể thử code 2 vòng for lồng nhau hoặc sử dụng sort)


*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string allLower(string s)
{
    for(int i = 0; i < s.size();i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string str;
getline(cin,str);
string s = allLower(str);
stringstream ss(s);
string word;
set<string>se;
while(ss>>word)
{
    se.insert(word);
}
cout<<se.size();

return 0;
}