#include <stdio.h>
#include <stdint.h>


int main() {
    char c = 100;
    short s = -8712;
    int i = 123456;
    long l = 1234567890;
    unsigned char u = 255;
    unsigned un = 2^32;
    unsigned long lon = 2^64;

    int8_t ocho = 8;
    int16_t diecises = 16;
    int32_t treintaydos = 32;
    int64_t sesentaycuatro = 64;
    uint8_t ochou = 23;
    uint16_t six = 121;
    uint32_t utreinta = 3222;
    uint64_t sixty = 2323;



    printf("char(%lu): %d \n", sizeof(c), c);
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("long(%lu): %ld \n", sizeof(1), 1);
    printf("long(%lu): %ld \n", sizeof(un), un);
    printf("long(%lu): %ld \n", sizeof(lon), lon);
    printf("long(%lu): %ld \n", sizeof(u), u);

    printf("char(%lu): %d \n", sizeof(ocho), ocho);
    printf("short(%lu): %d \n", sizeof(diecises), diecises);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("long(%lu): %ld \n", sizeof(1), 1);
    printf("long(%lu): %ld \n", sizeof(un), un);
    printf("long(%lu): %ld \n", sizeof(lon), lon);
    printf("long(%lu): %ld \n", sizeof(u), u);




}