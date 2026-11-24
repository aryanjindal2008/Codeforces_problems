#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int solved=0;
    for (int i=0; i<n;i++){
        int p,v,t;
        cin >> p >> v >> t ;
        if (p+v+t>=2){
            solved++;

        }
    }
    cout << solved << "\n";
    return 0;
}