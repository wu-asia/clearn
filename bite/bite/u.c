//#include <stdio.h>
//
//int findSingleNumber(int nums[], int numsSize) {
//    int result = 0;
//    for (int i = 0; i < numsSize; i++) {
//        result ^= nums[i];
//    }
//    return result;
//}
//
//int main() {
//    int nums[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//    int size = sizeof(nums) / sizeof(nums[0]);
//    int single = findSingleNumber(nums, size);
//    printf("只出现一次的数字是: %d\n", single);
//    return 0;
//}
