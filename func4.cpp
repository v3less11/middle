long long itc_bin_num(long long number){
    int a = 0;
    long long res = 0;
    while(number > 0){
        a*=10;
        a += number % 2;
        number /= 2;
    }
    while(a > 0){
        res *=10;
        res += a % 10;
        a /=10;
    }
    
    return res;
}

long long itc_oct_num(long long number){
    int a = 0;
    long long res = 0;
    while(number > 0){
        a*=10;
        a += number % 8;
        number /= 8;
    }
    while(a > 0){
        res *=10;
        res += a % 10;
        a /=10;
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
