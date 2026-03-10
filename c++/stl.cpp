//STL 容器 算法 迭代器 仿函数 适配器 空间配置器
//c++面向对象的三大特性：封装、继承、多态
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//     v.push_back(1666);
//    v.push_back(65);
//通过迭代器访问
//    vector<int>::it// void Print(int val){
//     cout<<val<<endl;
// } 


// void test01(){
//    vector<int> v;
//    v.push_back(1);
//    v.erator itBegin  =v.begin();//起始位置
//    vector<int>::iterator itEnd=v.end();

// for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//     cout<<*it<<" ";
// }

// for_each(v.begin(),v.end(),Print);
// }

void Print(vector<int> v){
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }  
    cout<<endl;
}
//通过[]访问
void Print1(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
//at的方式访问
void Print2(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

}

// void test01(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(15);
//     v.push_back(20);
//     v.pop_back();
//     Print(v);

//     //插入其他位置
//     v.insert(v.begin(),100);
//     Print(v);

//     v.insert(v.begin()+1,10);
//     Print(v);

//     v.assign(v.begin()+1,v.end()-1);
//      Print(v);

//     v.erase(v.begin()+1,v.end()-1);
//     Print(v);  
//     vector<int>v1{1,2,3,4,5};
//     for(auto it=v1.begin();it!=v1.end();it++){
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     for(vector<int>::iterator it=v1.begin();it!=v1.end();it++){
//         cout<<*it<<" ";
//     }
// } 

// void test01(){
//     vector<int>v;
//     for(int i=0;i<10;i++){
//         v.push_back(i);
//     }
//     Print2(v);
// //获取第一个元素
//     cout<<"第一个元素是："<<v.front()<<endl;
//     cout<<"第一个元素是："<<v[0]<<endl;
// //获取最后一个元素
//     cout<<"最后一个元素是："<<v.back()<<endl;
//     cout<<"最后一个元素是："<<v.at(v.size()-1);
// }


// void test(){
//     vector<int>v;
//     vector<int>v1;
//     cout<<"交换前"<<endl;
//     for(int i=0;i<10;i++){
//         v.push_back(i);
//     }
//     Print1(v);

//     for(int i=10;i>0;i--){
//         v1.push_back(i);
//     }
//     Print1(v1);

//     cout<<"交换后"<<endl;
//     v.swap(v1);
//     Print1(v);
//     Print1(v1);

     
// }

int main(){

    // vector<int> v;
    // for(int i=1;i<10;i++){
    //     v.push_back(i);
    // }
    // Print(v);

    // vector<int>v1(v.begin(),v.end());
    // Print(v1);
    // //拷贝构造
    // vector<int>v2(v1);
    // Print(v2);
    // cout<<"v2的大小"<<v2.size()<<endl;
    // cout<<"v2的容量"<<v2.capacity();
    vector<int>v;
    int n=v.size();
    int number,i=0,n;
    while(cin>>number){
        v.push_back(number);
        i++;
        if(number!= ' '){
            break;
        }
    }
    
} 