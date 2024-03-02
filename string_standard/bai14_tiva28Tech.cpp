#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string toLower(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    string s;
    getline(cin, s);
    string tmp = toLower(s);
    stringstream ss(tmp);
    string word;
    int count = 0;
    while (ss >> word)
    {
        if (word == "28tech")
            count++;
    }
    cout << count;
    return 0;
}