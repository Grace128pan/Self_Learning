/*
float kmh_to_mph(float km_speed)
int gcd(int u, int v)
*/

#include <stdio.h>

int gcd(int u, int v) { //void typical means the absence of a data type
    int temp;

    while(v!=0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int main(void) {
    int result;

    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %d\n", result);

    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n", result);

    printf("The gcd of 83 and 240 is %d\n", gcd(83, 240));

    return 0;
}