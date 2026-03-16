// #include <iostream>
// using namespace std;
// #include<deque>
// #include<vector>
// int main(){
//     deque<int>de;
 

//     return 0;
// }


#include <iostream>
using namespace std;
#include<deque>
#include<vector>
int main(){
    //deque<int>de;
    vector<int>v{10,54,6,1,3,45};
    for(int i=0;i<v.size();i++){
        int min=i;
        for(int j=i+1;j<v.size();j++){
            if(v[min]>v[j]){
                min=j;
            }
        }
        if(min!=i){
            int temp=v[min];
            v[min]=v[i];
            v[i]=temp;
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }

    return 0;
}