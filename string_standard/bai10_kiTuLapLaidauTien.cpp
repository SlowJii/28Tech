/*
Tim ky tu lap lai dau tien bang Mang Danh Dau
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[256];
// main
int main(int argc, char const *argv[])
{
/*code*/ 
string s;
cin>>s;
for(char c : s)
{
    if (arr[c])
    {
        cout<<c;
        return 0;
    }
    arr[c] = 1;
}
cout<<"NONE";
return 0;
}