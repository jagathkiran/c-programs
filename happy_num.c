#include<stdio.h>
#include<math.h>
#include<stdlib.h>

bool happy_num(int num) {
    int dig,sum;
    num = abs(num);
    int i=num;
    while(sum!=4) {
        sum = 0
        while(i>0) {
            dig = i % 10;
            i = i / 10;
            sum += dig * dig;
        }
        i=sum;
        if(1==sum) {
            return true;
        }
    }
    return false;
}

int main() {
    int num,sum;
    bool happy;
    char str[10];

    
    num = 19;
    sum = happy_num(num);

    printf("sum = %d \n",sum);
}