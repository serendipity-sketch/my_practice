#include<iostream>
using namespace std;
int main(){
  //P1307 [NOIP 2011 普及组] 数字反转
    int N;
    cin>>N;
    if(N ==0){
      cout<<0;
  }else{
       int a=0;
       while(N){
        a=a*10+N%10;
        N = N/10;   
    }
       cout<<a;
  }
  return 0;
}