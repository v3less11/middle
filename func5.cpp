int itc_rev_oct_num(long long number){
    long long n = number;
    int step = 1;
    long long res = 0;
    while(n > 0){
        int k = n%10;
        res += k * step;
        n/=10;
        step *= 8;
    }
    return res;
}

int itc_covert_num(long long number, int ss){
    long long a = 0;
    long long res = 0;
    while(number > 0){
        int l = number % ss;
        a += l;
        number /= ss;
        a *= 10;
        
    }
    while(a > 0){
        res += a % 10;
        a /=10;
        res *= 10;
    }
    
    return res;
}

int itc_rev_covert_num(long long number, int ss){
    long long tmp = number;
    int step = 1;
    int res = 0;
    while(tmp > 0){
        int k = tmp % 10;
        res += k * step;
        tmp/=10;
        step *= ss;
    }
    return res;
    
}
