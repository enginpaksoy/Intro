#include <stdio.h>

double toYen(double amount_usd_yen);
double toEuro(double amount_usd_euro);

int main(){
    double a;
    while(1) {
        printf("Enter the Amounts in USD for equivalent Yen and Euro: ");
        scanf("%lf", &a);
        printf("%s\t\t%s\t\t%s\n", "USD", "Yen", "Euro");
        printf("%.2lf\t\t%.2lf\t\t%.2lf\n", a, toYen(a), toEuro(a));
        if(a == 0) {
            printf("End of a program.\n");
            break;
        }
    }
}
double toYen(double amount_usd_yen){
    return amount_usd_yen * 118.87;
}
double toEuro(double amount_usd_euro){
    return amount_usd_euro * 0.92;
}
