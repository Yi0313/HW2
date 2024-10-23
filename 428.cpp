#include <stdio.h>

int main() {
    int payCode,hoursWorked,itemsProduced;  // 薪資代碼 、工時 、產品數量 
    double weeklyPay = 0.0,hourlyWage,grossSales,wagePerItem,weeklySalary;  // 員工週薪 、時薪 、銷售額、每件產品的薪資 、固定薪資 

    while (1) {
        printf("Enter employee pay code \n(1 for Manager, 2 for Hourly Worker, 3 for Commission Worker, 4 for Pieceworker) (-1 to end): ");
        scanf("%d", &payCode);

        if (payCode == -1) 
            break;  
            
        switch (payCode) {
            case 1:  // Manager
                printf("Enter the manager's weekly salary: ");
                scanf("%lf", &weeklySalary);
                weeklyPay = weeklySalary;
                break;

            case 2:  // Hourly Worker
                printf("Enter the hourly wage: ");
                scanf("%lf", &hourlyWage);
                printf("Enter the number of hours worked: ");
                scanf("%d", &hoursWorked);

                if (hoursWorked <= 40) {
                    weeklyPay = hourlyWage * hoursWorked;
                } else {
                    weeklyPay = hourlyWage * 40 + (hoursWorked - 40) * (hourlyWage * 1.5);
                }
                break;

            case 3:  // Commission Worker
                printf("Enter the gross weekly sales: ");
                scanf("%lf", &grossSales);
                weeklyPay = 250 + grossSales * 0.057;
                break;

            case 4:  // Pieceworker
                printf("Enter the number of items produced: ");
                scanf("%d", &itemsProduced);
                printf("Enter the wage per item: ");
                scanf("%lf", &wagePerItem);
                weeklyPay = itemsProduced * wagePerItem;
                break;

            default:
                printf("Invalid pay code. Please try again.\n");
                continue;  // 重新開始下一輪
        }

        printf("The weekly pay is: $%.2lf\n", weeklyPay);
    }

    printf("Program ended.\n");
    return 0;
}

