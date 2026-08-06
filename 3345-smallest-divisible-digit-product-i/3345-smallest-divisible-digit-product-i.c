int smallestNumber(int n, int t) {
    for (int i = n;i <= 100;i++) {
        int h = i,p = 1;
        while(h) {
            p *= h % 10;
            h /= 10;
        }
        if(p % t == 0) return i;
    }
    return 0;
}