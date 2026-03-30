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


#include<iostream>
using namespace std;
#include<cmath>
#define R 3.14 
int main(){ 
    int a,b;
    cin>>a>>b;
    float t=20*1000/(R*b*b*a);
    cout<<ceil(t);
    return 0;
}