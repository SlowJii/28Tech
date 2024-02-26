#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string subBigNum(string num1, string num2)
{
    string ans = "";
    while(num1.size() > num2.size())
    {
        num1 = "0" + num1;
    }
    while(num1.size() < num2.size())
    {
        num2 = "0" + num2;
    }
    int nho  = 0;
    for (int i = num1.size() - 1; i >= 0; i--)
    {
        int tmp = (num1[i] - '0') - (num2[i] - '0') - nho;
        
    }
}
// main
int main(int argc, char const *argv[])
{
/*code*/ 

return 0;
}