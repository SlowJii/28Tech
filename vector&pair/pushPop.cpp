#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n; 
cin>>n; 
vector<int> vec;
while(n--)
{
    int action;
    cin>>action;
    if (action == 1)
    {
        int num;
        cin>>num;
        vec.push_back(num);
    }
    if (action == 2 && !vec.empty()) // if vector not empty, erase the last element
    {
        vec.pop_back();
        // erase the last element
    }
}
if (!vec.empty())
{
    for(int i : vec)
    {
        cout<<i<<" ";
    }
}
else    cout<<"EMPTY";
return 0;
}