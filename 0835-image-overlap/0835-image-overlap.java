class Solution {
    public int largestOverlap(int[][] img1, int[][] img2) {
        int n = img1.length;
        List<int[]> o1 = new ArrayList<>();
        List<int[]> o2 = new ArrayList<>();
        for(int r = 0 ; r < n ; r++){
            for(int c = 0 ; c < n ;c++){
                if(img1[r][c] == 1) o1.add(new int[] {r,c});
                if(img2[r][c] == 1) o2.add(new int[] {r,c});
            }
        }
        int mx = 0;
        Map<String,Integer> sc = new HashMap<>();
        for(int[] p1 : o1){
            for(int[] p2 : o2){
                String sh = (p2[0] - p1[0]) +","+ (p2[1] - p1[1]);
                sc.put(sh,sc.getOrDefault(sh,0)+ 1);
                mx = Math.max(mx,sc.get(sh));
            }
        } 
        return mx;       
    }
}