// Last updated: 11/12/2025, 23:25:30
1import java.util.HashMap;
2class Solution {
3    public int[] twoSum(int[] nums, int target) {
4        HashMap <Integer,Integer> map = new HashMap<>();
5        for(int i =0; i< nums.length; i++)
6        {
7            int need = target - nums[i];
8
9        if ( map.containsKey(need))
10        {
11            return new int[]{map.get(need),i};
12        }
13
14        map.put(nums[i],i);
15    }
16
17        return new int []{};        
18    }
19}