#include <bits/stdc++.h>
using namespace std;

int main() {
    int size = 0;
    cin >> size;

    int arr[size];
    vector <int> lead;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    // brute force { t.c = O(N SQARE) S.C IS O(size of vector)  it is only for ans}
    // for (int i = 0; i < size; i++) {
    //     bool leader = true;
    //     for (int j = i + 1; j < size; j++) {
    //         if (arr[i] < arr[j]) {
    //             leader = false;
    //             break;
    //         }
    //     }
    //     if(leader){
    //         lead.push_back(arr[i]);
    //     }
    // }
    // for (int i = 0; i < lead.size(); i++) {
    //     cout << lead[i] <<" ";
    // }

    // optimal tc O(n) and ac is same as brute
    int maxi = INT_MIN;
    for (int i = size - 1; i >= 0; i--) {
        if( arr[i] > maxi) {
            lead.push_back(arr[i]);
            maxi = arr[i];
        }

    }
    for (int i = 0; i < lead.size(); i++) {
        cout << lead[i] <<" ";
    }
    

    return 0;
}


// optimal tc O(n) and ac is same as brute
