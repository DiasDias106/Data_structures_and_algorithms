#include<iostream>
#include<string>
using namespace std;
int main(){
    int tot;
    int *pnum;
    cout << "introduza o total";
    cin >> tot;
    pnum = new(nothrow) int[tot];
    if(!pnum) return 8;
    for(int i=0;i<tot;i++){
        cout << "introduza numeros"<<endl;
        cin >> pnum[i];
    }
    for(int i=0;i<tot;i++){
        cout << pnum[i] <<endl;
    }
    delete[] pnum;
}