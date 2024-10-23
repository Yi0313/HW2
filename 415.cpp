#include <stdio.h>
#include <math.h>

int main() {
    double principal = 55000.0,rate,amount;  // 初始投資金額、利率 、最後金額 
    int years = 15;// 投資年數 
     
    printf("Year\tRate\t\tAmount on deposit\n");

    // 不同的利率  
    for (rate = 10.0; rate <= 12.0; rate += 0.1) {
        // 每一年的利率變化  
        printf("Interest rate: %.1f%%\n", rate);
        // 每年金額 
        for (int year = 1; year <= years; year++) {
            // 複利 
            amount = principal * pow(1.0 + rate / 100.0, year);

            printf("%d\t%.1f%%\t\t%.2f\n", year, rate, amount);
        }
        printf("\n");
    }

    return 0;
}

