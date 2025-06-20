int majorityElement(int* nums, int numsSize) {
    int i,j;
    for(i=0;i<numsSize;i++){
        int freq=0;
        for(j=0;j<numsSize;j++){
            if(nums[i]==nums[j]){
                freq++;
            }
        }
        if(freq>numsSize/2){
            return nums[i];
        }
    }
    return nums[i];
}