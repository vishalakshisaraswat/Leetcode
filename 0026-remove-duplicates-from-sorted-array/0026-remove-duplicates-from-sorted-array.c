int removeDuplicates(int* nums, int numsSize){
    int i=0,j,x=0,k=1;
    if(numsSize<=1)
        return numsSize;
    
    
        for(i=1;i<numsSize;i++)
        {
            if(nums[i] != nums[k-1])
            {
               nums[k]=nums[i];
               k++;
            }
        }
    
    return k;
}