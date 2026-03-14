/**
 * @author 佬
 * @brief 给你跪了狠狠学
 * 
 */

#include<iostream>
using namespace std;
template<class T>
void swap(T &a,T &b){     
    T temp;
    temp =a;
    a=b;
    b=temp;
}
//排序算法
template<class T>
void mysort(T arr[],int num){

    for(int i=0;i<num;i++){
        int max=i;
        for(int j=i+1;j<num;j++){
            if(arr[max]<arr[j]){
                max = j;
            }
        }
        if(max!=i){
            ::swap(arr[max],arr[i]);
        }
    }
}
template<class T>
void Printarr(T arr[],int num){
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
   
}
void test01(){
     char arr[]="abcdefg";
     int num = sizeof(arr)/sizeof(char)-1;//包含'\0'
     mysort(arr,num);
     cout<<"排完序之后的顺序： ";
     Printarr(arr,num);

}

int main(){
    
  
    test01();
}