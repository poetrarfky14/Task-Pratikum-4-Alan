#include <stdio.h>

int main (){
    int N;
    printf("Masukan nilai N : ");
    scanf("%d", &N);
    
    if (N > 50) {
        N = N - 25;    
    }
    N = N + 10;
    
    printf("Nilai N setelah diproses : %d\n", N);
    
    return 0;
}


