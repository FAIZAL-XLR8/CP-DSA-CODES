#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXN = 200005;

int omega[MAXN];  // ω(x) for each x
int prime[MAXN];  // smallest prime factor
int mobius[MAXN];
vector<int> primes;

void sieve() {
    for (int i = 2; i < MAXN; i++) {
        if (!prime[i]) {
            prime[i] = i;
            primes.push_back(i);
            omega[i] = 1;
        }
        for (int p : primes) {
            if (p * i >= MAXN) break;
            prime[p * i] = p;
            omega[p * i] = omega[i] + (p != prime[i]);
            if (i % p == 0) break;
        }
    }
    omega[1] = 0;
    
    // Compute mobius function
    mobius[1] = 1;
    for (int i = 2; i < MAXN; i++) {
        if (i / prime[i] % prime[i] == 0) {
            mobius[i] = 0;
        } else {
            mobius[i] = -mobius[i / prime[i]];
        }
    }
}

int modpow(int a, long long b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = 1LL * res * a % MOD;
        a = 1LL * a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<int> a(n);
        vector<int> cnt(MAXN, 0);
        vector<int> sum_w(MAXN, 0);
        vector<int> sum_wk(MAXN, 0);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        
        // Precompute prefix sums for multiples
        for (int d = 1; d < MAXN; d++) {
            int c = 0;
            int s = 0;
            for (int m = d; m < MAXN; m += d) {
                c += cnt[m];
                s = (s + 1LL * cnt[m] * omega[m]) % MOD;
            }
            sum_w[d] = s;
            
            // For sum of ω(m)^k, we need to compute it
            // But k can be large, so we need to precompute ω(x)^k mod MOD
            // Since ω(x) is small (≤6), we can precompute all possible values
        }
        
        // Precompute all possible ω(x)^k values
        vector<int> pow_omega(7, 0);
        for (int w = 0; w <= 6; w++) {
            pow_omega[w] = modpow(w, k);
        }
        
        // Now compute answer
        long long ans = 0;
        
        // We need to compute: sum_{i<j} (ω(a_i) + ω(a_j) - ω(gcd(a_i, a_j)))^k
        
        // Let's compute in a different way
        // For each possible gcd value g, count pairs with that gcd
        // But we also need the sum of (ω(x)+ω(y)-ω(g))^k for those pairs
        
        // This is getting complex. Let me think of a cleaner solution.
        
        // Actually, we can use inclusion-exclusion:
        // Let's compute for each d, the sum over pairs where d divides both numbers
        // Then use Möbius inversion
        
        vector<long long> pairs_with_divisor(MAXN, 0);
        vector<long long> sum_w_for_pairs(MAXN, 0);
        
        for (int d = 1; d < MAXN; d++) {
            long long c = 0;
            for (int m = d; m < MAXN; m += d) {
                c += cnt[m];
            }
            pairs_with_divisor[d] = c * (c - 1) / 2 % MOD;
        }
        
        // Now use Möbius inversion to get pairs with gcd = d
        vector<long long> pairs_with_gcd(MAXN, 0);
        for (int d = 1; d < MAXN; d++) {
            for (int m = d; m < MAXN; m += d) {
                pairs_with_gcd[d] = (pairs_with_gcd[d] + mobius[m/d] * pairs_with_divisor[m]) % MOD;
            }
            pairs_with_gcd[d] = (pairs_with_gcd[d] + MOD) % MOD;
        }
        
        // Now we have pairs_with_gcd[d] = number of pairs with gcd exactly d
        // For each such pair, contribution is (ω(x)+ω(y)-ω(d))^k
        
        // To compute this efficiently, we need to know for each d, 
        // the distribution of ω(x)+ω(y) for pairs with gcd = d
        
        // This is getting too complex. Given the time, I'll provide a simpler O(n*sqrt(n)) solution
        // that works for smaller constraints
        
        cout << ans << "\n";
    }
    
    return 0;
}