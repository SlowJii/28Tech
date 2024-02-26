#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int n;
cin>>n;
vector<int>vec;
for(int i = 0 ; i < n; i++)
{
    int tmp;    cin>>tmp;
    vec.push_back(tmp);
}
cout<<*min_element(vec.begin(), vec.end())<<endl;
cout<<*max_element(vec.begin(), vec.end())<<endl;
cout<<accumulate(vec.begin(), vec.end(), 0);
return 0;
}