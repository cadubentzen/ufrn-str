#include  <time.h>   // clock()
#include <stdio.h>   // printf()
#include <unistd.h>  // sleep()
#include <stdlib.h>  // exit()
#include <math.h>    // sin()

// função para simular carregamento da CPU
void carga(int k) {
    float f = 0.999999;
    for(int i=0; i<k; i++){
        f = f*f*f*f*f;
        for(int j=0; j<k; j++){
            f = sin(f)*sin(f)*f*f*f;
        }
    }
}

int main() {
    while(1);
}



