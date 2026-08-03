class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int a = 0 , b = 0;
        for(int i = 0 ; i < piles.size() ; i++){
            if(i % 2 == 0){
                a += piles[i];
            }
            else{
                b += piles[i];
            }
        }
        return (a > b)? true: true;
    }
};