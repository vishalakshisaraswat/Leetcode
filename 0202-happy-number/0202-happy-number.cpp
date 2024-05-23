class Solution {
private:
    int next(int n){
        int sum = 0;
        while(n!=0){
            int d = n%10;
            sum += d*d;
            n = n/10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        int fast=next(n);
        int slow=n;
        while(slow != 1 && fast != slow){
            slow = next(slow);
            fast = next(next(fast));
        }
        return fast == 1;
    }
};