#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isSorted(const vector<int>& vec);
bool rev(int a, int b);
int main(){
  vector<int> myV1(5);
  bool esta;
  cout << "introduza 5 valores ao contentor" <<endl;
  for(size_t i=0;i<5;i++){
    cin >> myV1[i];
  }
  sort(myV1.begin(),myV1.end(),rev);

 esta = isSorted(myV1);
 if(esta){
    cout << "o vetor esta de facto ordenado" << endl;
 }
}
bool rev(int a, int b){
    return a>b;
}

bool isSorted(const vector<int>& vec) {
    if (vec.empty() || vec.size() == 1) {
        // Um vetor vazio ou com um único elemento é considerado ordenado
        return true;
    }

    bool ascending = true;
    bool descending = true;

    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] < vec[i - 1]) {
            ascending = false;
        }
        if (vec[i] > vec[i - 1]) {
            descending = false;
        }
    }

    return ascending || descending;
}