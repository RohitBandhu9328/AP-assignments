#include<stdio.h>
#include<time.h>

void linear(int n){
    int a =0;
    for(int i=0;i<=n;i++){ 
        a = a + 1; 
    } 
    printf("\n");
    return;
}

void constant(int n){
    int a = 5+2;
    printf("\n");
    return ;
}

void quadratic(int n){
    int a = 0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            a = a + 1;
        }
    } printf("\n");
    return ;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("input : %d", n);

    clock_t constant_st = clock();
    constant(n);
    clock_t constant_end = clock();
    double time_constant = ((double)constant_end - (double)constant_st) * 1000;
    printf("time for the case of constant : %f ms\n", time_constant);
    
    clock_t linear_st = clock();
    linear(n);
    clock_t linear_end = clock();
    double time_linear = ((double)linear_end - (double)linear_st) * 1000;
    printf("time for the case of linear : %f ms\n", time_linear);

    clock_t quadratic_st = clock();
    quadratic(n);
    clock_t quadratic_end = clock();
    double time_quadratic = ((double)quadratic_end - (double)quadratic_st) * 1000;
    printf("time for the case of quadratic : %f ms\n", time_quadratic);
    
    return 0;
}