#include <bits/stdc++.h>
using namespace std;

int main () {
    int size = 0;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
    //HASHING
    int hash[1000] = {0};
    for (int i = 0; i < size; i++) {
        hash[arr[i]]++;

    }
    // count of any element in array
    int ele = 0;
    cin >> ele ;
    cout << hash[ele];
    return 0;

}          //Xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx  NOTE  xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                THIS WILL NOT WORK FOR NEGATIVE ELEMENT PREDENT IN ARRAY
//Pre-computation: O(N)



// Query: O(1)



// Space: O(K)