
#pragma once
#include<string.h>
#include<iostream>


template <typename T> T Tmax(T a, T b){
    return  a > b ? a : b;
}

template< typename T> T Tmax(T * tab,  int n){
    T max = *tab;
    for(int i = 1; i < n; i++)
        if(max<*(tab+i))
            max =*(tab+i); 
    return max;
}

template <typename T> void Tswap(T& a, T& b){
    T temp = a;
    a = b; b = temp;
}

template<typename T, typename T2>T convert(T2 a){
    return static_cast<T>(a);
}