#include<iostream>
using namespace std;
//交换
template<class T>  
void myswap(T &a,T &b){
    T temp;
    temp =a;
    a=b;
    b=temp;
}
//选择排序算法
template<class T>
void mysort(T arr[],int len){
    for(int i=0;i<len;i++){
        int min=i;
        for(int j=i+1;j<len;j++){
            if(arr[min]>arr[j]){
            min=j;
        }
        } 
        if(min!=i){
            myswap(arr[min],arr[i]);
        }
    }

}
//输出
template<class T>
void Print(T arr[],int len){
       cout<<"排序后的内容："<<endl;
     for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
     }
}
int main(){

int arr[]={5,4,3,2,1};
int len =sizeof(arr)/sizeof(int);
mysort(arr,len);
Print(arr,len);



    return 0;
}