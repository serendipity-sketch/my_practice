// #include<iostream>
// using namespace std;
// int main(){
//   //P1307 [NOIP 2011 普及组] 数字反转
//     int N;
//     cin>>N;
//     if(N ==0){
//       cout<<0;
//   }else{
//        int a=0;
//        while(N){
//         a=a*10+N%10;
//         N = N/10;   
//     }
//        cout<<a;
//   }
//   return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k;
    cin>>k;
    vector<int>v(k);
    for(int i=0;i<k;i++){
        cin>>v[i];
    }
    int one=-1;
    int five=-1;
    int ten=-1;
    for(int i=0;i<k;i++){
        if(v[i]==1&&one==-1){
            one=i;
        }
  
        if(v[i]==5&&five==-1){
            five=i;
        }
        if(v[i]==10&&ten==-1){
            ten=i;
        }
    }
    if(one==-1||five==-1||ten==-1){
      cout<<"False";
    }else{
      cout<<one<<" "<<five<<" "<<ten;
    }
    return 0;
}