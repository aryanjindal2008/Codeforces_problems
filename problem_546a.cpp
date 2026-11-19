#include <iostream>
using namespace std;
int main(){
    int k,n,w;
    cin >> k >> n >> w ;
    long long total = k*w*(w+1)/n;
    long long borrow = total -n;
    if (borrow>0){
        cout << borrow << "\n";
    }
    else {
        cout << 0 << "\n";
    }
    return 0; 
}