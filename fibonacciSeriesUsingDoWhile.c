#include <stdio.h>
int main(){
    int nthTerm, fibonacciOfnthTerm = 0, alpha = 0, beta = 0, i = 1;
    scanf("%d", &nthTerm);

    printf("%d", fibonacciOfnthTerm); //0

    beta = i;
    fibonacciOfnthTerm = (beta + alpha);
    printf(" %d", fibonacciOfnthTerm); //1

    do{
        fibonacciOfnthTerm = (beta + alpha);
        printf(" %d", fibonacciOfnthTerm);
        alpha = beta;
        beta = fibonacciOfnthTerm;
        i++;
    }
    while(i<=nthTerm);
    
    return 0;
}
