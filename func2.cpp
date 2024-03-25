#include "middle.h"

int itc_max_num(long long number){
    if(number < 0){
        number *= -1;
    }
    int maxi = number%10;
    while(number > 0){
        int num2 = number%10;
        number/=10;
        if(maxi < num2){
            maxi = num2;
        }
    }
    return maxi;
}
int itc_min_num(long long number){
    if(number < 0){
        number *= -1;
    }
    int mini = number%10;
    while(number > 0){
        int num2 = number%10;
        number/=10;
        if(mini > num2){
            mini = num2;
        }
    }
    return mini;
}
int itc_rev_num(long long number){
    if(number < 0){
        number *= -1;
    }
    
    long long a = 0;
    while(number > 0){
        a *= 10;
        a += number % 10;
        number /= 10;
    }
    return itc_len_num(a);
}

int itc_null_count(long long number){
    int nulcout = 0;
    while(number > 0){
        int k = number % 10;
        number /=10;
        if(k == 0){
            nulcout++;
        }
    }
    return nulcout;
}
