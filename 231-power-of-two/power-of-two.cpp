class Solution {
    bool solve(int n, int p){
        if(pow(2,p)==n) return true;
        if(pow(2,p)>n) return false;
         return solve(n, p+1);
    }
public:
    bool isPowerOfTwo(int n) {
        //Latest Approach using recursion
        return solve(n, 0);
    }
};

//my first approach
/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        return false;

        while(n % 2 == 0){
            n/=2;
        }
        return n==1;
    }
};

*/