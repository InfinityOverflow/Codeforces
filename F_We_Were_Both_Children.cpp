#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void max_frogs_caught(int t, vector<vector<int>>& test_cases) {
    for (int i = 0; i < t; i++) {
        int n = test_cases[i][0];
        vector<int>& hops = test_cases[i];

        unordered_map<int, int> hop_counts;
        int max_hop_count = 0;

        for (int j = 1; j <= n; j++) {
            int hop = hops[j];
            hop_counts[hop]++;
            max_hop_count = max(max_hop_count, hop_counts[hop]);
        }

        cout << max_hop_count << endl;
    }
}

int main() {
    int t;
    cin >> t;

    vector<vector<int>> test_cases(t);
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        test_cases[i].resize(n + 1);
        test_cases[i][0] = n;
        for (int j = 1; j <= n; j++) {
            cin >> test_cases[i][j];
        }
    }

    max_frogs_caught(t, test_cases);

    return 0;
}
