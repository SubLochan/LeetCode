class Solution {
    fun countCommas(n: Int): Int {
        var c = 0
        if(n < 1000)    return c
        var k = 1000
        while(k <= n){
            c++
            k++
        }
        return c
    }
}