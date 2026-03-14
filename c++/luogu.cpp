#include<iostream>
using namespace std;
int main(){ //佬这么会学？给你跪了Orz
    int N;
    cin>>N;
    if(N ==0){
      cout<<0;
  }else if(N>0){
      if(N%10 ==0){
        cout<<"";
        N=N/10;
      }
       while(N){
        int a=N%10; 
        N = N/10;
        cout<<a;
        
    }
  }else{
    cout<<"-";
    int B=(-1)*N;
    if(B%10 ==0){
        cout<<"";
        B=B/10;
      }
    while(B){
    int a=B%10;
    B= B/10;
    cout<<a;
  }
}
  return 0;
}