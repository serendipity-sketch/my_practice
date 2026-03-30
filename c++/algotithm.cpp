#include<iostream>
using namespace std; 
//STL 算法 数据结构 
#define N 100
int main(){
    int a[N];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    //5 4 2 1
    //4 5 2 1     
    // 42 51
    for(int j=1;j<n;j++){
        int key=a[j-1];
        while(a[j]<key){
            int temp; 
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
    }

    return 0;
}