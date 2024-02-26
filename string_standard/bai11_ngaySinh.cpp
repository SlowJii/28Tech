#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    char ngaySinh[11];
    cin.getline(ngaySinh, sizeof(ngaySinh));
    char *token = strtok(ngaySinh, "/");
    int ngay = atoi(token);
    token = strtok(NULL, "/");
    int thang = atoi(token);
    token = strtok(NULL, "/");
    int nam = atoi(token);
    cout << setfill('0') << setw(2) << ngay << "/"
         << setfill('0') << setw(2) << thang << "/"
         << nam;
    return 0;
}