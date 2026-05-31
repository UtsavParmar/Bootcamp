// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     bool found = false;

//     for(int i = 0; i < n; i++) {

//         int count = 1;

//         for(int j = i + 1; j < n; j++) {

//             if(arr[i] == arr[j]) {
//                 count++;

//                 if(count > n/4) {
//                     cout << arr[i] << " occurs more than n/4 times";
//                     found = true;
//                     break;
//                 }
//             }
//         }

//         if(found)
//             break;
//     }

//     if(!found) {
//         cout << "Not found";
//     }

//     return 0;
// }

//HASHMAP
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int freq[100] = {0};

    // store frequencies
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    bool found = false;

    // check frequency
    for(int i = 0; i < n; i++) {

        if(freq[arr[i]] > n/4) {

            cout << arr[i] << " occurs more than n/4 times";

            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Not found";
    }

    return 0;
}