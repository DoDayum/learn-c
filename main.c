#include <stdio.h>

int main() {

    char demoInt [100];
    for (int i = 0; i < sizeof(demoInt) / sizeof(demoInt[0]); ++i){
        demoInt[i] = 'hello';
    }

    printf("Hello, World!\n");
    return 0;
}
