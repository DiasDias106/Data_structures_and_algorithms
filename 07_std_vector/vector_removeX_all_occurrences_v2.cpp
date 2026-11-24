#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV1(5);
    int num;
    cout << "introduza 5 numeros no array" << endl;
    for(size_t i=0;i<myV1.size();i++){
        cin >> myV1[i];
    }

    cout << "introduza um numero:" << endl;
    cin >> num;

    removeX(myV1,num);


}
bool removeX(vector<int> &v,int num){
    bool removeu = false;
    auto it = v.begin();
    while(it != v.end()){
        if(*it == num){
            v.erase(it);
            removeu = true;
        }else{
            it++;
        }
    }
    return removeu;
}


