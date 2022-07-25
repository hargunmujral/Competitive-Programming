class Solution {
public:
    int recursiveLastRemaining(int n, bool left){
        if(n==1) return 1;
        if(!left && !(n%2)) return recursiveLastRemaining(n/2, !left) * 2 - 1;
        else return recursiveLastRemaining(n/2, !left)*2;
        
    }
    int lastRemaining(int n) {
        return recursiveLastRemaining(n, true);
    }
};
