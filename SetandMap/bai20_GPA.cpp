/*
Cho thông tin điểm thi của các môn học của các sinh viên, bạn hãy tính điểm trung bình của sinh viên đó và in ra màn hình. Điểm trung bình được tính bằng cách lấy tổng hệ số điểm và số tín chỉ chia cho tổng số tín chỉ. Ví dụ sinh viên X học môn A 2 tín chỉ và có điểm là 5, môn B 3 tín chỉ và có điểm là 4 thì điểm trung bình được tính = (2 * 5 + 3 * 4) / (2 + 3).
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    string name;
    map<string, vector<pair<int, int>>> myMap;
    while (cin >> name)
    {
        int credit, score;
        cin >> credit >> score;
        myMap[name].push_back(make_pair(credit, score));
    }
    for (auto it = myMap.rbegin(); it != myMap.rend(); it++)
    {
        // duyet MAP tu cuoi ve dau
        int sumCredit = 0;
        int creSco = 0;
        for (auto vec : it->second) // truy cap vao vector chua cac pair
        {
            sumCredit += vec.first;             // tong tin chi cua mot sinh vien
            creSco += (vec.first * vec.second); // tin chi * diem cua tung mon
        }
        double gpa = 1.0 * creSco / sumCredit;
        cout << it->first << " : "
             << setprecision(2) << fixed << gpa << endl;
    }
    return 0;
}