// file: hello.c
#include <stdio.h>

int main() {
    int *ptr = NULL;
    *ptr = 42; // Gây ra core dump
    return 0;
}