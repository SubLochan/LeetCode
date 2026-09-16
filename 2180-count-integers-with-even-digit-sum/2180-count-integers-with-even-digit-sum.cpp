class Solution {
public:
    int countEven(int num) {
         int c = 0;
        for(int i = 1 ; i <= num ; i++){
            if((i < 10 && i % 2 == 0) || fun(i)){
                c++;
            }
            
        }
        return c;
    }
    private:
    bool fun (int n){
        int s = 0;
        while(n > 0){
            s += n % 10;
            n /= 10;
        }
        return s % 2 == 0;
    }
};