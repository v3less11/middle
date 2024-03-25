#include<iostream>


using namespace std;

void itc_num_print(int number){
    cout<<number;
}
int itc_len_num(long long number){
    if(number < 0){
        number *= -1;
    }
    if(number == 0){
        return 1;
    }
    int k = 0;
    while(number > 0){
        k++;
        number /= 10;
    }
    return k;
}
int itc_sum_num(long long number){
    if(number < 0){
        number *= -1;
    }
    int k = 0;
    while(number > 0){
        k += number % 10;
        number /= 10;
    }
    return k;
}
long long itc_multi_num(long long number){
    if(number < 0){
        number *= -1;
    }
    long long k = 1;
    while(number > 0){
        k *= number % 10;
        number /= 10;
    }
    return k;
}
