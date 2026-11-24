#include<iostream>
using namespace std;
int main(){
    int tot;
    int *pnum = nullptr;
    cout << "introduza tot" << endl;
    cin >> tot;

    pnum = new(nothrow) int[tot];
    if(!pnum) return 8;

    for(size_t i=0;i<tot;i++){
        cout<<"introduza " << tot << "numeros" <<endl;
        cin>> pnum[i];
    }

    for(size_t i=0;i<tot ;i++){
        cout << pnum[i] << endl;
    }

    delete[] pnum;
}