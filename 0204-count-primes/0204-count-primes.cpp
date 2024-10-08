class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<bool> prime(n + 1, 1);
        prime[0] = prime[1] = 0;
        for (int i = 2; i < n; i++) {
            if (prime[i] == 1) {
                cnt++;
                for (int j = 2 * i; j < n; j += i) {
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};