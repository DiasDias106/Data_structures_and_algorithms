#include<iostream>
using namespace std;
int main(){
    int tot;
    int *pnum = nullptr;
    cout << "introduza quantos valores quer:\t" <<endl;
    cin >> tot;

    pnum = new(nothrow) int[tot];
    if(!pnum) return 8;
    cout << "introduza numeros" << endl;
     for(size_t i=0;i<tot;i++){
        cin >> pnum[i];
     }
     
     for(size_t i=0;i<tot;i++){
        cout << pnum[i] << endl;
     }

     delete []pnum;

}