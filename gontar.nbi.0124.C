#include <stdio.h>

int main() {
    double A;
    int S;
    int n;

    printf("Введите начальную сумму вклада (S): ");
    scanf("%d", &S);
    
    printf("Введите количество лет (n): ");
    scanf("%d", &n);
    
    A = S * (1 + 0.03)*n;
    
    printf("Сумма вклада через %d лет составит: %.2f\n", n, A);
    
    return 0;
}
