// 204_Count_Primes

class Solution {
    public int findPrimes(int n) {
        boolean[] primes = new boolean[n + 5];
        for (int i = 2; i <= n; ++i) {
            if (!primes[i]) {
                for (int j = i + i; j <= n; j += i) {
                    primes[j] = true;
                }
            }
        }

        int cnt = 0;
        for (int i = 2; i < n; ++i) {
            if (!primes[i]) {
                cnt++;
            }
        }
        return cnt;
    }

    public int countPrimes(int n) {
        return findPrimes(n);
    }
}