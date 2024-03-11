#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int t;
    cin >> t;
    cin.ignore();
    map<string, vector<string>> myMap;
    while (t--)
    {
        string s;
        getline(cin, s);
        int pos = s.find("-");
        // tao xau con co do dai = pos tinh tu chi so 0
        string homeTeam = s.substr(0, pos - 1);
        // tao xau con tu vi tri (pos +2)
        string awayTeam = s.substr(pos + 2);
        myMap[homeTeam].push_back(awayTeam);
        myMap[awayTeam].push_back(homeTeam);
    }
    // sap xep vector ben trong MAP roi in ra
    // map<string, vector<string>>
    for (auto it : myMap)
    {
        cout << it.first << " : ";
        sort(it.second.begin(), it.second.end());
        for (int i = 0; i < it.second.size(); i++)
        {
            cout << it.second[i];
            if (i != it.second.size() - 1)
            {
                cout << ", ";
            }
        }
        cout << endl;
    }
    return 0;
}