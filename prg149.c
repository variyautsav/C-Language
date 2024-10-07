#include <stdio.h>

int main() {
    int i;
    float income[5], tax[5];

    for (i = 0; i < 5; i++) {
        printf("Enter the income: ");
        scanf("%f", &income[i]);
    }

    printf("unit  \t \t  Tax to pay: ");
    for (i = 0; i < 5; i++)
     {
        if (2500 <income[i])
         {
            tax[i] = 0;
            printf("\n %f \t%f ",income[i], tax[i]);
        }
         else if (2500 <= income[i] && income[i] < 5000)
          {
                tax[i] = 0.1 * (2500 - income[i]);
                printf("\n%f\t %f",income[i], tax[i]);
          }


               else if (5000< income[i] && income[i] < 10000)
                 {
                    tax[i] = 0.1 * (5000 - 2500) + 0.2 * (5000 - income[i]);
                      printf("\n%f\t %f",income[i], tax[i]);
                }
                else if (10000>=income[i])
                 {
                    tax[i] = 0.1 * (5000 - 2500) + 0.2 * (5000 -income[i]) + 0.3 * (10000 - income[i]);
                      printf("\n%f\t %f",income[i], tax[i]);
                }

        }


    return 0;
}
