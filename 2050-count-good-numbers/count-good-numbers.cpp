class Solution {
int mod = 1000000007;
private:
    long long power(long long x, long long n){
        long long ans;
        if(n==0){
            return 1;
        }
        long long half=power(x, n/2);
        if(n%2==0){
            ans=(half*half)%mod;
        }
        else{
            ans=(half*half*x)%mod;
        }
        return ans;
    };
public:
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;

        long long odd=n-even;
        long long result = (power(5,even) * power(4,odd))%mod;
        return (int) result;
    }
};