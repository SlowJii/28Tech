#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool checkUpper(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            return false;
            break;
        }
    }
    return true;
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word)
    {
        /* code */
        if (checkUpper(word))
            count++;
    }
    cout << count;
    return 0;
}