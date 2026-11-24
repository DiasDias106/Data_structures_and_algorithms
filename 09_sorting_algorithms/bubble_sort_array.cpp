#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num[10];
    int dim = sizeof(num)/sizeof(num[0]);
    cout << dim << endl;
    for(size_t i=0;i<10;i++ ){
            cin >> num[i];
        }

     for(size_t i=0;i<(dim-1);i++){
        for(size_t j=0;j<((dim-1)-i);j++){
            if(num[j] > num[j+1]){
                swap(num[j],num[j+1]);
            }
        }
     }
      for(auto El : num){
        cout << El << "\t";
      }
      cout << endl;
}