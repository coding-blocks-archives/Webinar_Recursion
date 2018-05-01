#include <iostream>
using namespace std;
int fact(int n){
    if (n == 0) return 1;

    int smallFact = fact(n - 1);
    int ans = smallFact * n;
    return ans;
}

void incPrint(int n){
    if (n == 0){
        return;
    }
    incPrint(n - 1);
    cout << n << " ";
}

void decPrint(int n){
    if (n == 0){
        return;
    }
    cout << n << " ";
    decPrint(n-1);
}

int main(){
    // int n;
    // cin >> n;
    // int ans = fact(n);
    // cout << ans;

    int n;
    cin >> n;
    // incPrint(n);
    decPrint(n);
}