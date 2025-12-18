#include<iostream>
using namespace std;
int main() {
    // int num = 23154;
    // int ans = 0;

    // while(num){
    // int lastdigit = num%10;
    // num = num/10;
    // ans = ans*10+lastdigit;
    // }
    // cout << ans <<endl;

    // int num = 13, ans=0;

    // while(num!=0){
    //     int rem = num%2;
    //     num = num/2;
    //     // cout << rem;
    //     ans = ans*10+rem;
    // }
    
    // cout <<ans;
    
    int num = 11011;
    int ans = 0, mul = 1;

    while(num!=0){
        int rem = num%10;
        num/10;
        ans = ans+rem*mul;
        mul*=2;
    }
    
    cout << ans << endl;

    return 0;
}