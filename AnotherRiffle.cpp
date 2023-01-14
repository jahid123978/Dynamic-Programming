#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the kth power of the riffle permutation
vector<int> riffle_power(int N, int K) {
    // Initialize the identity permutation
    vector<int> f(N);
    for (int i = 0; i < N; i++) {
        f[i] = i;
    }
    // Iterate through the powers of the riffle permutation
    for (int i = 0; i < K; i++) {
        vector<int> g(N);
        for (int j = 0; j < N; j++) {
            if (j % 2 == 0) {
                g[j] = f[j/2];
            } else {
                g[j] = f[N/2 + j/2];
            }
        }
        f = g;
    }
    return f;
}

int main() {
    int N = 8; // length of the identity permutation
    int K = 2; // number of times to riffle the permutation
    vector<int> res = riffle_power(N, K);
    // Output the result
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}