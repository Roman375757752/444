#include <stdio.h>
#include <stdlib.h>

void encode() {
    char c;
    while (scanf(" %c", &c) == 1) {
        printf("%02X ", c);
    }
    printf("\n");
}

void decode() {
    char hex[3];
    while (scanf("%2s", hex) == 1) {
        int value;
        if (sscanf(hex, "%X", &value) == 1) {
            printf("%c ", value);
        } else {
            printf("n/a\n");
            return;
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("n/a\n");
        return 0;
    }

    int mode = atoi(argv[1]);
    if (mode == 0) {
        encode();
    } else if (mode == 1) {
        decode();
    } else {
        printf("n/a\n");
    }

    return 0;
}

