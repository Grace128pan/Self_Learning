/*
automatic and static variables
1.when we declare a local variable inside a function, the keyword auto can be preceded the declaration of such variables.
2. The keyword auto is optional, and it is the default storage class for local variables.
3. an automatic variable is created when the function is called and destroyed when the function is exited.
float squareRoot(float x) {
    const float epilson = 0.00001;
    float guess = 1.0;
    -----
}
4.static variable: a static variable is a local variable that retains its value between function calls.
5.a static local variable is initialized only once at the start of the overall program execution and not each time that the function
is called. a static variable must be a simple constant or constant expression.
6.static variables also have default initial values of zero.
void auto_static(void) {
    static int staticVar = 100;
    ...
}
if we want to set the static variables' value to 100 each time the function is executed, we can use explicit assignment
statement 
void auto_static(void) {
    static int staticVar;
    staticVar = 100;
}
*/
//program 7.16 illustrate static and automatic variables(page 193)
#include <stdio.h>

void auto_static(void) {
    int autoVar = 1;
    static int staticVar = 1;

    printf("automatic = %d, static = %i\n", autoVar, staticVar);

    autoVar++;
    staticVar++;

}

int main(void) {
    int i;
    void auto_static(void);

    for(i = 0; i < 5; i ++) {
        auto_static();
    }

    return 0;
}

//in this case, the output will be automatic = 1(repeated for 5 times), static = 1, 2, 3, 4, 5 each time