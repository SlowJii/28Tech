/*
Cho một xâu S gồm nhiều từ, các từ được phân cách nhau bởi dấu cách hoặc các dấu '.', ',', '!', '?', hãy liệt kê các từ xuất hiện trong xâu, giữa các từ cách nhau một dấu cách, sau từ cuối cùng ko được in thừa dấu cách


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
for(char &c : s)
{
    if (!isalpha(c))       c = ' ';
}
// su dung tham chieu de thay doi truc tiep tren xau s
stringstream ss(s);
string word;
while(ss >> word)
{
    cout<<word<<" ";
}
return 0;
}