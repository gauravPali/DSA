#include <bits/stdc++.h>
using namespace std;
// time complexity -> 
// void getSteps() {
// }

bool isLucky(int n) {
    static int itr =2;
    if(n%itr ==0){
        return false;
    }
    if(n<itr){
        return true;
    }
    n = n-(n/itr);
    itr++;
    return isLucky(n);
}
int main() {
    // int n;
    // cin>>n;
    // getSteps();
    cout<< isLucky(74) << 5;
    return 0;
}
