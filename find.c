#include<stdio.h>
int main () {
    int numsSize=4;
    int nums[4]={3,2,2,3};
    int val=3;
    int k,i,j;
    
    for(i=0;i<numsSize;i++) {
        if(nums[i]==val) {
            for(j=0;i<numsSize-k;j++){
                nums[j]=nums[j+1];
            }
        }
        else {
            k++;
        }
    }
    for(i=0;i<k;i++) {
        printf("%d",nums[i]);
    }
}