#include <bits/stdc++.h>
#include <iterators>
using namespace std;

array<int,10> gr;

int main(){
    for(int i=0;i<gr.size();i++){
        cout << gr.at(i) << " ";
    }
    cout << endl;


    array<int,5> arr1 = {6};
    //Here we are initializing only zeroth index as 6.
    //Since the remaining are not initialized they are filled as 0.
    for(int i =0 ;i<arr1.size();i++){
        cout << arr1[i] << ' ';
    }
    cout << endl;

    array<int,7> arr2;
    //Without initializing garbage value will be assigned to evvery index.
    for(int i =0 ;i<arr2.size();i++){
        cout << arr2[i] << ' ';
    }
    cout << endl;

    array<int,5> arr3;
    //Fills every index into given number.
    arr3.fill(10);
    for(int i =0 ;i<arr3.size();i++){
        cout << arr3[i] << ' ';
    }
    cout << endl;

    arr3.fill(7);
    for(int i =0 ;i<arr3.size();i++){
        cout << arr3[i] << ' ';
    }
    cout << endl;

    for(int i=0;i<arr2.size();i++){
        cout << arr2.at(i) << " ";
    }
    cout << endl;

    array<int,6> arr = {2,4,6,8,10,12};
    for(auto it: arr.begin(); it!=arr.end();it++) {
        cout << *it << " ";
    }
}