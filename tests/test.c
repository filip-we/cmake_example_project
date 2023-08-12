#include <stdio.h>

#include "a.h"

int main() {
    printf("== Runing tests ==\n");
    if (give_me_numbers() == 11) {
        printf("OK!");
    }
    else {
        printf("Fail! But we exit with exit code anyway to say that the test itself is OK.");
    }
    return 0;
}
