class Solution {
    fun checkDivisibility(n: Int): Boolean {
        var s = 0
        var p = 1
        val st = n.toString()
        for(ch in st){
            s += ch - '0'
            p *= ch - '0'
        }
        return n % (s+p) == 0
    }
}