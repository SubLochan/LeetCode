class Solution {
    fun maximumWealth(accounts: Array<IntArray>): Int {
        var mx = Int.MIN_VALUE
        for(i in accounts.indices){
           var  s = 0
            for(j in accounts[i].indices){
                s += accounts[i][j]
                mx = maxOf(s,mx)
            }
        }
        return mx
    }
}