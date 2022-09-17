class Solution {
public:
    int reverse(int x) {
        bool neg = 0;
        if(x == -2147483648) return 0;
        if(x<0) {
            neg = 1;
            x = -x;
        }
        int y = 0, cnt = 0, lg = x%10;
        while(x){
            if(cnt==9 && y>214748364) return 0;
            y = y*10 + x%10;
            x /= 10;
            cnt++;
        }
        if(neg) return -y;
        return y;
    }
};
