class Solution {
public:
    int check(int n) {
        int sum = 0;
        while(n > 0) {
            sum += pow((n % 10), 2);
            n /=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(check(n) == 1 || check(n) == 7)
            return true;
        if(check(n) < 9)
            return false;
        return isHappy(check(n));
    }
};