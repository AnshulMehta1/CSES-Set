// Apple Division
// Author : Anshul Mehta
// n apples with known weigths
//  Task is to divde them into 2 groups s.t. difference is minimal between their sums 
//  Input:1st Line n and 2nd Line: Weigths of the Apple
#include <stdio.h>
#include <stdlib.h>
#define N   20
#define ll long long 
ll abs_(ll a) {
    return a > 0 ? a : -a;
    // If not greater than 0 than return -a
}

int main() {
    
    int n, i, b;
    ll sum, sum_, d_, d;
    static int pp[N];
    
    scanf("%d", &n);
    sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &pp[i]);
        sum += pp[i];
    }
    d_ = sum;
    for (b = 0; b < 1 << (n - 1); b++) {
        sum_ = 0;
        for (i = 0; i < n - 1; i++)
            if (b & 1 << i)
                sum_ += pp[i];
        if (d_ > (d = abs_(sum_ - (sum - sum_))))
            d_ = d;
    }
    printf("%lld\n", d_);
    return 0;
}
