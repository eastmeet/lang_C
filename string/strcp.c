//
// Created by 이동우 on 1/31/25.
//
#include <stdio.h>
#include <string.h>

int main() {
    char str0[80] = "cat";
    char str1[80];
    strcpy(str0, "tiger");
    strcpy(str1, str0);
    printf("%s\n", str0);
    printf("%s\n", str1);
};
