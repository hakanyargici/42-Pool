

// int main()
// {
//     int i = 5;

//     int *p = &i;

//     printf("%u\n", p);
//     printf("%d", *p);
// }

//  & (ampersand) değişkenin adres bilgisini veriyor.
//  * (yıldız) adresteki değer bilgisini veriyor.
//  "%u" ile bellekte sakladığı yeri veriyor.

// int main()
// {
//     int age = 25;

//     printf("%p", &age);
// }

// "%p" ile hafızada saklandığı belleğe erişiyoruz.
#include <stdio.h>

int main()
{
    int x = 25;
    int *ptr;

    ptr = &x;
    
    printf("%d", *ptr);
}