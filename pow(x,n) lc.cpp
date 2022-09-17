class Solution {
public:
double myPow(double x, int n) {
    
double ans=1.0;
long long int num = abs(n);
    
    while(num!=0)
    {
        if(num%2==0)
        {   x*=x;
            num=num/2;
        }
        else
        {   ans =  ans *x;
            num--;}
        }
    if(n<0)
    return (1.0/ans);
       return ans;
  }
};
