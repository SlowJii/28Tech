/*
Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện sắp xếp các từ trong xâu theo thứ tự từ điển tăng dần và giảm dần.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
string s;
getline(cin,s); 
vector<string>vec;
stringstream ss(s);
string word;
while(ss >> word)
{
    vec.push_back(word);
}
sort(vec.begin(),vec.end());
for(auto x : vec)
{
    cout<<x<<" ";
}
cout<<endl;
sort(vec.begin(), vec.end(), greater<string>());
for(auto x : vec)
{
    cout<<x<<" ";
}
return 0;
}