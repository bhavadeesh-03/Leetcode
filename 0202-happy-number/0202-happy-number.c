bool isHappy(int n) {
    int sum = n,t = n;
   // if(t == 1 || t == 7 || t == 10) return true;
    while(sum > 4) {
        sum = 0;
       while(t) {
        int d = t % 10;
        sum += d * d;
        t /= 10;
       }
       t = sum;
    }
   // if(sum > 1) t = sum;
    return sum == 1;
}