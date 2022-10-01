class Solution {
public:
    int tribonacci(int n) {
        if(!n)return 0;
        if(n==1 or n==2)return 1;
        int a=0, b=1, c=1, ans;
        for(int i=3; i<=n; i++){
            ans=a+b+c;
            a=b;
            b=c;
            c=ans;
        }
        return ans;
    }
};
