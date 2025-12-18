#include<iostream>
using namespace std;
int main() {

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // if(age >= 18) {
    //     cout << "You can vote it.";
    // }else {
    //     cout << "you can not vote.";

    // }

// for(int j=1; j<=6; j++){
//     for(int i=1; i<=5; i++){
//         cout << i;
//     }
//     cout << endl;
// }


// for(int j=1; j<=5; j++){
//     for(char i='a'; i<='z'; i++){
//     cout << i;
//    }
//    cout << endl;
// }

// for(int i=5; i<=50; i=i+5){
//     cout << i << endl;
// }

// for(int j=0; j<=5; j++){
//     for(int i=0; i<=5; i++){
//         cout << " * ";
//     }
//     cout<< endl;
// }

for(int i=1; i<=5; i++){
    for(int j =0; j<i; j++){
       cout << "*";
    }
    cout<< endl;
}
    return 0;
}

