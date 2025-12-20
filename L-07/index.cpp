#include<iostream>
using namespace std;

int main() {
    int mark[5] = {70,80,40,50,90};
    int sum = 0;
    // for(int i=0; i<5; i++){
    //     cout<< mark[i] <<endl;
    // }
    
    // for(int i=0; i<5; i++){
    //     sum+=mark[i];
    // }
    // cout<< sum/5 << endl;

    // int heightest = mark[0];
    // for(int i=0; i<5; i++){
    //     if(mark[i]>heightest){
    //         heightest = mark[i];
    //     }
    // }
    // cout << heightest << endl;

    int student_mark = 50;
    for(int i=0; i<5; i++){
        if(student_mark==mark[i]){
            cout << "YES";
            break;
        }
    }
    return 0;
}