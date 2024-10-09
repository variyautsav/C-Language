//string is pelindrom or not
   // proccess= odd like madam m=m,a=a
               //even like maddam  m=m,a=a,d=d
#include <stdio.h>

int main() {
    char a[10];
    int i, j, k;

    printf("Enter the string: ");
    scanf("%s", a);

    for (i = 0; a[i] != '\0'; i++);

    if (i % 2 == 1) {
        for (j = 0; j < i / 2; j++) {
            if (a[j] != a[i - j - 1])
            {
                printf("%s is not   a palindrome\n", a);
                return 0;
            }
        }
        printf("%s is a palindrome\n", a);
    }
    else
    {
         if (i % 2 == 0)
          {
        for (j = 0; j < i / 2; j++) {
            if (a[j] != a[i - j - 1])
            {
                printf("%s is not   a palindrome\n", a);
            }
        }
        printf("%s is a palindrome\n", a);
    }
    else
    {
        printf("is not pelindrom");
    }

    }

    return 0;
}
