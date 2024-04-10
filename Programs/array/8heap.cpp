#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int len;
    KthLargest(int k, vector<int> nums) {
        len = k;
        for(auto val : nums) {
            pq.push(val);
            if(pq.size() > k) {
                pq.pop();
            }
        }
    }
};

int main() {
    int k = 3;
    vector<int> nums = {4, 5, 8, 2};
    KthLargest kthLargest(k, nums);
    cout << "The kth largest element is: " << kthLargest.pq.top() << endl;
    return 0;
}
