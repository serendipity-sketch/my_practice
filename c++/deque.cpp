// #include <iostream>
// using namespace std;
// #include<deque>
// #include<vector>
// void Print(deque<int>de){
//     for(auto x:de){
//         cout<<x<<" ";
//     }
//     cout<<endl;
      
// }
//  void test(){
//     deque<int>de;
//     for(int i=0;i<10;i++){
//         de.push_back(i);
//     }
//     Print(de);
//     de.insert(de.begin(),2,4);
//     Print(de);



// }
// int main(){

//     test();

//     return 0;
// }


#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    float a,b,c;
    float t=0.0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
    }
    for(int j=0;j<n;j++){
        t+=sqrt(a*a+b*b)/50.0+n*1.0+0.5*n;
    }
    int up=ceil(t);
    cout<<up;
    return 0;
}