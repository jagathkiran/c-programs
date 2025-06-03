#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int* split_sum(int num) {
    int dig,sum = 0;
    int *p = (int *) malloc (2*sizeof(int));
    num = abs(num);
    int i=num;
    int count = 0;
    while(i>0) {
        dig = i % 10;
        i = i / 10;
        sum += dig;
        count++;
    }
    p[0] = count;
    p[1] = sum;
    return p;
}

int main() {
    int num;
    int* number;
    char str[10];


    num = 191;
    number = split_sum(num);

    printf("sum = %d \n",number[1]);
    printf("count = %d \n",number[0]);
}