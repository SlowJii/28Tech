/*
Một địa chỉ email hợp lệ nếu :

Bắt buộc kết thúc bằng 1 trong các đuôi : @gmail.com, @28tech.com.vn, @yahoo.com, @hotmail.com

Không được chứa các ký tự đặc biệt và dấu cách mà chỉ được chứ các kí tự là chữ số và chữ cái, ngoại trừ @, dấu chấm và dấu gạch dưới

Không được chứa nhiều hơn 1 ký tự @
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool validEmail(string s)
{
    set<string> se = {"@gmail.com", "@28tech.com.vn", "@yahoo.com", "@hotmail.com"};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '@')
        {
            string tmp = s.substr(i);
            if (se.find(tmp) == se.end())
            {
                return false;
            }
        }
        else if (!isdigit(s[i]) && !isalpha(s[i]) && s[i] != '.' && s[i] != '_')
        {
            return false;
        }
    }
    return true;
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        if (validEmail(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}