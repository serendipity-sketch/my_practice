## 冒泡排序

```
//P1307 [NOIP 2011 普及组] 数字反转
//冒泡排序
  int main(){
    //deque<int>de;
    vector<int>v{10,54,6,1,3,45};
    for(int i=0;i<v.size();i++){
       for(int j=0;j<v.size()-i-1;j++){
    //冒泡排序，从小到大
        // if(v[j]>v[j+1]){
            // int temp;
            // temp=v[j];
            // v[j]=v[j+1];
            // v[j+1]=temp;
        // }
    //冒泡排序，从大到小
        if(v[j]<v[j+1]){
            int temp;
            temp=v[j];
            v[j]=v[j+1];
            v[j+1]=temp;
        }
       }

    }
    for(auto x:v){
        cout<<x<<" ";
    }
    
    return 0;

}
```

## 选择排序

```
//选择排序
#include <iostream>
using namespace std;
#include<deque>
#include<vector>
int main(){
    //deque<int>de;
    vector<int>v{10,54,6,1,3,45};
    for(int i=0;i<v.size();i++){
        int min=i;
        for(int j=i+1;j<v.size();j++){
        //选择排序，从小到大
        if(v[min]>v[j]){
            min =j;
        }
        }
         if(min!=i){
            int temp;
            temp=v[i];
            v[i]=v[min];
            v[min]=temp;
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }

    return 0;

}
```

## 数组求和思想

```
//可以把一个数组内任意和，转换成这种思想
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]<= m){
            m-=v[i];
        }else{
            count++;  
        }
    }
    cout<<count;
    return 0;
}
```