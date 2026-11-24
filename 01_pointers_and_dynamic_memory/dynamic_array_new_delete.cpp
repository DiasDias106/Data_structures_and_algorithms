#include<iostream>
using namespace std;
int main(){
    int tot;
    int *pnum = nullptr;
    
    cout << "total:";
    cin>> tot;

    pnum = new (nothrow) int[tot];

    if(!pnum) return 8;
    for(int i;i<tot;i++){
        cin >> pnum[i];
    }
    cout << "valores lidos";
    for(int i=0;i<tot;i++){
        cout << "pnum[i]"<<endl;
    }
    delete []pnum;
    return 0;
}