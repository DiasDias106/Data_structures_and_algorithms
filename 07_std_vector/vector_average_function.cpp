#include<iostream>
#include<vector>
using namespace std;
void media(vector<int> &v){
   float media =0;
   for(int i=0;i<5;i++){
    media += v[i];
   }
   cout << "media:" << media/5;
}
int main(){
   vector<int> myV1(5);
   const int tam = 5;
   for(size_t i=0;i<5;i++){
    cout << "introduza numero" << endl;
    cin >> myV1[i];
   }
   media(myV1);
}