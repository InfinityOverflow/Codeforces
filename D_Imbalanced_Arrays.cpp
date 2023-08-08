#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    
    while (n--) {
        cin >> k;
        priority_queue<int, vector<int>, greater<int>> pq; // min-heap
        
        for (int i = 0; i < k; i++) {
            int num;
            cin >> num;
            pq.push(num);
        }
        
        if (!pq.empty()) {
            cout << pq.top() << endl;
        }
    }
    
    return 0;
}