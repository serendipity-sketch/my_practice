#include <iostream>
#define day 1 //宏变量
 const int day_i=1;  //不可修改，常量
using namespace std;
#include<ctime>
int main() {
    // int a=10;
    // cout<<a<<endl;
    // cout<<"a="<<a<<endl;
    // cout<<"数据类型 变量名"<<endl;
    // cout<<"你好，管理内存地址大学"<<endl;
    // cout<<day;
    // int b=32769000;
    // cout<<3e2<<endl;
    // cout<<sizeof(double);
    //将ascll编码放入存储单元
    // int b=97;
    // cout<<(char)b<<endl;
    
    //换行\n \t 
    // char a='a';
    // cout<<a; 
    // string a="hello";
    // cout<<a<<endl;
    // int a=1,b=1;
    // cout<<a++<<endl;
    // cout<<++b<<endl;

    // int a=10;
    // int b=1;
    // (a>b?a:b)=100;
    // cout<<a<<endl;

    //switch用法

//     int score;
//     cout<<"请输入你的评价分数：";
//     cin>>score;
//     switch(score){
//         case 10:
//              cout<<"first";
//              break;
//         case 9:
//              cout<<"second"<<endl;
//              break;
//         default:
//              cout<<"last"<<endl;
//     }
     //   srand((unsigned int) time (NULL));
     //   int num = rand() %100 + 1;
     //   int val;
     //   cout<<"请输入要猜测的值： ";
     //   cin>>val;
     //   while(1){
     //      if(val == num){
     //           cout<<"恭喜回答正确！";
     //           break;
     //      }else if(val>num){
     //           cout<<"猜大了"<<endl;
     //           cout<<"请再次输入要猜测的值： ";
     //           cin>>val;
     //      }else{
     //           cout<<"猜小了"<<endl;
     //           cout<<"请再次输入要猜测的值： ";
     //           cin>>val;
     //      }
     //   } 

     // for(int i=1;i<=100;i++){
     //      if(i%7==0 || i%10==7 || i/10%10 == 7){
     //           cout<<i<<'\t';
     //      }
     // }

     // for(int i=1;i<=9;i++){
     //      for(int j=1;j<=i;j++){
     //           cout<<j<<'*'<<i<<'='<<i*j<<'\t';
     //      }
     //      cout<<endl;
     // }

     // int arr[2]={1,2};
     // cout<<"数组占用的内存空间大小："<<sizeof(arr)<<endl;
     // cout<<"每个元素占用的内存空间大小："<<sizeof(arr[0])<<endl;
     // cout<<"数组中元素的个数："<<sizeof(arr)/sizeof(arr[0]);

     int arr[5]={1,2,3,4,5};
     int num =sizeof(arr)/sizeof(arr[0])-1;
     int start= 0;
     int temp =0;
     for(int i=0;i<5;i++){
        if(start<num){
          temp =arr[start];
          arr[start]=arr[num];
          arr[num]=temp;
          start++;
          num--;
     }
}
      for(int i=0;i<5;i++){
      cout<<arr[i]<<'\t';
      }
      
    return 0;


}    