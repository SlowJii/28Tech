/*
Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn đó là với mỗi phần tử trong mảng bạn hãy chỉ ra đó là lần thứ mấy nó xuất hiện ? Ví dụ mảng A[] = {1, 2, 3, 1, 1, 4, 2, 3} sẽ có kết quả là : 1, 1, 1, 2, 3, 1, 2, 2
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
int n;  cin>>n;
int a[n];
map<int,int> myMap;
for(int i = 0; i < n; i++)
{
    cin>>a[i];
    myMap[a[i]]++;
    cout<<myMap[a[i]]<<" ";
    // in ra lan xuat hien cua phan tu
    // vi du input: 1 0 1 0 4 0 1 3 3 0 
    // a[0] = 1, key = 1, value = 1 nen in ra 1
    // a[2] = 1, key = 1, value = 2 nen in ra 2
}
return 0;
}