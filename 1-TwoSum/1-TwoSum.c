// Last updated: 09/10/2025, 09:40:37
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for the result array
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2; // Set the size of the result array

    // Iterate through the array to find the two numbers
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) { // Start j from i+1 to avoid duplicate pairs
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result; // Return the result array
            }
        }
    }

    // If no solution is found, returnSize is set to 0
    *returnSize = 0;
    free(result); // Free allocated memory since we won't use it
    return NULL;
}
