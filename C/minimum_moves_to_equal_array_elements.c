long sum(int* nums, int numsSize){
    long sum = 0;
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
    }
    return sum;
}
    
long min(int* nums, int numsSize){
    long min = nums[0];
    for(int i = 0; i < numsSize; i++){
        if(nums[i] < min) 
            min = nums[i];
    }
    return min;
}

int minMoves(int* nums, int numsSize){
    return sum(nums, numsSize) - min(nums, numsSize) * numsSize;
}
