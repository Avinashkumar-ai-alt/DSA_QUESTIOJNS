#include <bits/stdc++.h>
using namespace std;

int main() {
    int size = 0;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    

    // declare unordered map
    // pre-computation
    unordered_map <int , int > mpp;
    for (int i = 0; i < size ; i++) {
        mpp[arr[i]]++;
    }
    // Frequency query
    int ele = 0;
    cin >> ele;

    cout << mpp[ele];

    return 0;
}




// - Pre-computation: O(N) average.
// - Query: O(1) average.
// - Space: O(U), where U is the number of distinct elements.
// Average case
//  O(1) lookup and insertion.

// Worst case
//  O(N) lookup and insertion due to hash collisions.



// ordered map
// - Pre-computation: O(N log N) worst case.
// - Query: O(log N).
// - Space: O(U).
// Why?

// An ordered map internally uses a self-balancing Binary Search Tree (typically Red-Black Tree).

// Therefore:
// - Insertion: O(log U)
// - Searching: O(log U)
// - Elements remain sorted by key.