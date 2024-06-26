#include "middle.h"

long long itc_bin_num(long long number){
    long long r = 0;
    long long a = 0;
    long long res = 0;
    long long tmp = number;
    while(tmp > 0){
        int v = tmp%2;
        r ++;
        a += v;
        tmp /= 2;
        a*= 10;
    }
    while(a > 0){
        res += a % 10;
        a /= 10;
        res *= 10;
    }
    res = res/10;
    int b = itc_len_num(res);
    
    if(r > b){
        while(r > b){
            res *= 10;
            b = itc_len_num(res);
        }
    }
    return res;
}


long long itc_oct_num(long long number){
    int a = 0;
    long long res = 0;
    long long r = 0;
    while(number > 0){
        int k = number % 8;
        a += k;
        r++;
        a*=10;
        number /= 8;
    }
    while(a > 0){
        res *=10;
        res += a % 10;
        a /=10;
    }
    int w = itc_len_num(res);
    if(w < r){
        while(w < r){
            res *= 10;
            w = itc_len_num(res);
        }
    }
    return res;
    
}

int itc_rev_bin_num(long long number){
    long long n = number;
    int step = 1;
    long long res = 0;
    while(n > 0){
        int k = n%10;
        res += k * step;
        n/=10;
        step *= 2;
    }
    return res;
}
