#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> myL;
    cout << "introduza 3 valores na lista" << endl;
    for(size_t i=0;i<3;i++){
        cin >> myL[i];
    }
}