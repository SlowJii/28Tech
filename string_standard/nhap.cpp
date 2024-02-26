#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
char str[80] = "Hoc C - co ban va nang cao - tai QTM";
const char s[2] = "-";
char *token;
/* lay token dau tien */
token = strtok(str, s);
/* duyet qua cac token con lai */
while( token != NULL )
{
cout<<token<<endl;
token = strtok(NULL, s);
}
return 0;
}