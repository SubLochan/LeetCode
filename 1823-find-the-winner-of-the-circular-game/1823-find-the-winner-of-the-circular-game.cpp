class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> que;
        for(int i = 1 ; i <=n ; i ++){
            que.push(i);
        }
        while(que.size() > 1){
            for(int i = 1 ; i < k ; i++){
                int x = que.front();
                que.pop();
                que.push(x);
            }
            que.pop();
        }
        return que.front();
    }
};