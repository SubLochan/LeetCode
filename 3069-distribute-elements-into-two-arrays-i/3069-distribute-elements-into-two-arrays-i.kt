class Solution {
    fun resultArray(nums: IntArray): IntArray {
        val a = mutableListOf<Int>()
        val b = mutableListOf<Int>()
        a.add(nums[0])
        b.add(nums[1])
        for(i in 2 until nums.size){
            if(a.last() > b.last()){
                a.add(nums[i])
            }
            else{
                b.add(nums[i])
            }
        }
        val res = a + b
        return res.toIntArray()
    }
}