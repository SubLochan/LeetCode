class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
         int n = grid.length;
        Map<Integer,Integer> freq = new HashMap<>();
        int[] res = new int[2];
       for(int i = 0; i < n; i++) {
    for(int j = 0; j < grid[0].length; j++) {
        freq.put(grid[i][j],freq.getOrDefault(grid[i][j],0)+ 1);
    }
}
int c = 0;
    for(Map.Entry<Integer, Integer> ent : freq.entrySet()) {

            if(ent.getValue() > 1) {
                c = ent.getKey();
                res[0] = c;
            }
        }
        
        int p = n * n;
        int s = 0;
        int r = p * (p + 1)  / 2;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < grid[0].length; j++){
                s += grid[i][j];
            }
        }
        res[1] = (r - s + c);
        return res;
    }
}