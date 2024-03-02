#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool palindrome(string s){
    for(int i = 0; i < s.size();i++)
    {
        if (s[i] != s[s.size() - i -1])
        {
            return false;
            break;
        }
    }
    return true;
}

int main(){
    string s; cin >> s;
    cout << boolalpha << palindrome(s) << endl;
}