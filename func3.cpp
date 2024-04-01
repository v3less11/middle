#include "middle.h"

bool itc_mirror_num(long long number){
    if(number < 0){
        number *= -1;
    }
    long long revk = 0;
    long long k = number;
    while(k > 0){
        int zef = k % 10;
        revk *= 10;
        revk += zef;
        k/=10;
    }
    if(number == revk){
        return true;
    }
    return false;
}

int itc_mirror_count(long long number){
    int kol = 0;
    for(int i = 1; i <= number; i++){
        if(itc_mirror_num(i)){
            kol++;
        }
    }
    return kol;
}
int itc_second_max_num(long long number){
    if(itc_len_num(number) == 1){
        return -1;
    }
    if(number < 0){
        number *= -1;
    }
    long long maxi = -1;
    long long maxi2 = -1;
    while(number > 0){
        int k = number % 10;
        if(k > maxi){
            maxi2 = maxi;
            maxi = k;
        }
        else if(k > maxi2){
            maxi2 = k;
        }
        number /=10;
    }
    return maxi2;
}

int itc_second_simple_max_num(long long number){
    if(itc_len_num(number) == 1){
        return -1;
    }
    if(number <= -10){
        number *= -1;
    }
    long long maxi = -1;
    long long maxi2 = -1;
    while(number > 0){
        int k = number % 10;
        if(k > maxi){
            maxi2 = maxi;
            maxi = k;
        }else if(k > maxi2){
            maxi2 = k;
        }
        number /= 10;
    }
    if(maxi == maxi2){
        return -1;
    }
    return maxi2;
    
}

    
}
