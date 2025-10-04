#include <stdio.h>

int main() {
    function1();
    return 0;
}

int function1() {
    function2();
    return 0;
}

int function2() {
    function3();
    return 0;
}

int function3() {
    function4();
    return 0;
}

int function4() {
    function5();
    return 0;
}

int function5() {
    function6();
    return 0;
}

int function6() {
    printf("Hello, World!\n");
    return 0;
}