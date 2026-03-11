#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
//查找函数，最先出现元素的位置find(),他返回的是个指针
    auto it =find(v.begin(),v.end(),2)-v.begin();
    cout<<it;
    return 0;
}