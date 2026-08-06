class Solution {
    fun smallestNumber(n: Int, t: Int): Int {
        var num = n.toString().toCharArray()
        var p = 1
        for(ch in num){
            p *= (ch - '0')
        }
        if(p % t == 0)  return n;
        return smallestNumber(n+1,t)
    }
}