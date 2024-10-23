#include <stdio.h>
#include <math.h>

int main() {
    double principal = 55000.0,rate,amount;  // ��l�����B�B�Q�v �B�̫���B 
    int years = 15;// ���~�� 
     
    printf("Year\tRate\t\tAmount on deposit\n");

    // ���P���Q�v  
    for (rate = 10.0; rate <= 12.0; rate += 0.1) {
        // �C�@�~���Q�v�ܤ�  
        printf("Interest rate: %.1f%%\n", rate);
        // �C�~���B 
        for (int year = 1; year <= years; year++) {
            // �ƧQ 
            amount = principal * pow(1.0 + rate / 100.0, year);

            printf("%d\t%.1f%%\t\t%.2f\n", year, rate, amount);
        }
        printf("\n");
    }

    return 0;
}

