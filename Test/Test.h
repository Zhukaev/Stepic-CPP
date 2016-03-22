// 1

// Example program
#include <iostream>

int main () {
    
    int N,M,a,b,c,d,e,f,g,k,a1,b1,c1,d1,e1,f1,g1;
    M = 0;
    std::cin >> N;
    a1 = N / 1000000 % 10;
    b1 = N / 100000 % 10;
    c1 = N / 10000 % 10;
    d1 = N / 1000 % 10;
    e1 = N / 100 % 10;
    f1 = N / 10 % 10;
    g1 = N % 10;
    for (int i = 0; i < N; i++){
    
        a = i / 1000000 % 10;
        b = i / 100000 % 10;
        c = i / 10000 % 10;
        d = i / 1000 % 10;
        e = i / 100 % 10;
        f = i / 10 % 10;
        g = i % 10;
        if ((a + b + c + d + e + f + g) == (a1 + b1 + c1 + d1 + e1 + f1 + g1))
        M++;
    }
    std::cout << M;
    return 0;
}


// 2

#include <iostream>

int main(){
    int N;
    int b;
    std::cin >> N;
    if (N == 1){
    std::cin >> b;
    std::cout << b;
    }
    
    else if ( N == 0) {return 0;}
    
    else if (N % 2 == 0){
    int array[N];
    for (int i = 0; i < N; i++){std::cin >> array[i];}
    for (int j = 0; j < N/2; j++){std::cout << array[j] + array[N - j - 1 ] << " ";}
    }
    
    else if (N % 2 != 0){
    int array[N];
    for (int i = 0; i < N; i++){std::cin >> array[i];}
    for (int j = 0; j < N/2; j++){std::cout << array[j] + array[N - j - 1 ] << " ";}
        std::cout << array[N/2];
    }
    
    return 0;
}