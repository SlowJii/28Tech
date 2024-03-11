/*
Cho thông tin các trận đấu của giải bóng đá Sunday League, nhiệm vụ của bạn là đối với mỗi đội bóng hãy liệt kê các đối thủ đã từng chạm trán. Danh sách các đội bóng được liệt kê theo thứ tự từ điển tăng dần và danh sách đối thủ của từng đội bóng cũng được liệt kê tăng dần theo thứ tự từ điển.
------Input:
13
Arsenal - Lyon
Fullham - Liverpool
Fullham - Chelsea
Barcelona - Chelsea
Barcelona - Fullham
Lyon - Barcelona
Chelsea - AC Milan
PSG - Manchester City
Arsenal - Fullham
Fullham - Arsenal
Real Madrid - Barcelona
Arsenal - Manchester City
Manchester United - Liverpool
-----Output:
AC Milan : Chelsea
Arsenal : Fullham, Fullham, Lyon, Manchester City
Barcelona : Chelsea, Fullham, Lyon, Real Madrid
Chelsea : AC Milan, Barcelona, Fullham
Fullham : Arsenal, Arsenal, Barcelona, Chelsea, Liverpool
Liverpool : Fullham, Manchester United
Lyon : Arsenal, Barcelona
Manchester City : Arsenal, PSG
Manchester United : Liverpool
PSG : Manchester City
Real Madrid : Barcelona
*/
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