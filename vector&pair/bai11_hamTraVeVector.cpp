#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void inputVec(vector<int>& vec)
{
    int n;
    cin>>n;
    vec.resize(n);
    for(int i = 0; i < n; i++)
    {
        int x; cin>>x;
        vec.push_back(x);
    }
}
void outputVec(vector<int>& vec)
{
    for(auto x : vec)
    {
        cout<<x<<" ";
    }
}
bool checkPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for(int i = 5; i <= sqrt(n); i+= 6)
    {
        if (n % i == 0 || n % (i+ 2) == 0)
        {
            return false;
        }
    }
    return true;
}
vector<int> prime_list(vector<int>v)
{
    vector<int>vec;
    vec.reserve(v.size()); // tang hieu suat bang cach tranh viec thay doi kich thuoc cua vector qua nhieu lan
    for(const auto& x : v) //tranh viec sao chep vector qua nhieu
    {
        if (checkPrime(x))
        {
            vec.push_back(x);
        }
    }
    return vec;
}
// main
int main(int argc, char const *argv[])
{
/*code*/
vector<int> vec;
inputVec(vec);
vector<int> res = prime_list(vec);
outputVec(res);
return 0;
}