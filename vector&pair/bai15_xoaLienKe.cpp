/*
Cho vector gồm N số, bạn hãy viết 1 hàm trả về 1 vector có được từ vector đầu vào bằng cách xóa đi các phần tử đứng cạnh mà giống nhau. Lưu ý sau khi xóa 1 phần tử trong vector thì phần tử đứng trước và đứng sau phần tử vừa xóa lại được coi là đứng cạnh nhau. Ví dụ vector = {1, 1, 1, 2, 2, 3, 4, 4, 4, 5} sẽ có kết quả là {1, 2, 3, 4, 5}. Bạn phải cài đặt chương trình theo khuôn mẫu sau :

vector<int> unique_vector(vector<int> v){

}

vector<int> nhap(){

}

void in(vector<int> v){

}

int main(){
    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);
}
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> unique_vector(vector<int> v)
{
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] == v[i-1])
        {
            v.erase(v.begin()+i);
            i--;
            // i-- de tranh truong hop bo sot
            // vi du 1 1 1 1, khi xoa v[1] di thi v.size() = 3, khi do cai v[2] cua vector ban dau se bi bo qua
        }
    }
    return v;
}

vector<int> nhap()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    return vec;
}

void in(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);
    return 0;
}