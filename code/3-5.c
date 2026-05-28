#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }


    int sum = 0;

char a[100];
    while(fscanf(fp, "%s", a) == 1) {
        int i = 0;
        int num = 0;
        int b = 1; 
        while(a[i]  != '\0') {
            if (a[i] < '0' || a[i] > '9') {
                b = 0;
                break;
            }
            num = num * 10 + (a[i] - '0');
            i++;
        }
        if(b == 1) {
            sum += num;
        } else{
            fprintf(stderr, "invalid input %s\n", a);
        }
    }
    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
