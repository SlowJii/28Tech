#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string array_to_string(char a[], int n){
    //code here
    string ans(a,n);
    return ans;
}

int main(){
    int n;
    char a[10001];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << array_to_string(a, n) << endl;
}