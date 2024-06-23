class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        // Approach 1:
        // int ans = 1;
        // while(n) {
        //     ++ans;
        //     if(!(ans % a) || !(ans % b) || !(ans % c)) --n;
        // }
        // return ans;

        // Approach 2:
        long long low = 1, high = 2e9, a2 = a, b2 = b, c2 = c;
        long long lcm_ab = lcm(a2, b2), lcm_bc = lcm(b2, c2), lcm_ac = lcm(a2, c2), lcm_abc = lcm(a2, lcm(b2, c2));

        while(low <= high) {
            long long mid = low + (high - low) / 2;

            (mid/a + mid/b + mid/c 
            - mid/lcm_ab - mid/lcm_bc 
            - mid/lcm_ac + mid/lcm_abc) >= n ? high = mid - 1 : low = mid + 1;
        }
        return low;
    }
};