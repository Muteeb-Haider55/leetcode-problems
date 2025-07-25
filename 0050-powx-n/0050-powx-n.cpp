class Solution {
    double powfun(double x, long n) {

        if (n == 0)
            return 1;

        if (n < 0)
            return powfun(1 / x, -n);
        if (n % 2 == 0) {
            return powfun(x * x, n / 2);
        }

        return x * powfun(x * x, (n - 1) / 2);
    }

public:
    double myPow(double x, int n) { return powfun(x, n); }
};