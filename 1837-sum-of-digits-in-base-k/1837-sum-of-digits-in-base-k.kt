class Solution {
    fun sumBase(n: Int, k: Int): Int {
        var c = 0
        var num = n
        while(num > 0){
            c += num % k
            num /= k
        }
        return c
    }
}