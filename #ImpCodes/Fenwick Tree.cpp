const int N =  (int)(1 * 1e6 + 10);
int fen[N] = {0};

void update(int i, int add) {
    while(i < N) {
        fen[i] += add;
        i += (i & (-i));
    }
}

int fenSum(int i) {
    int s = 0;
    while(i>0) {
        s += fen[i];
        i -= (i & (-i));
    }
    return s;
}

int rangeSum(int l, int r) {
    return (fenSum(r) - fenSum(l-1));
}

// Binary Lifting on Fenwick Tree :

int find(int k) {
    int curr = 0, ans = 0, prevSum = 0;
    for(int i = log2(N); i>=0; --i) {
        if(fen[curr + (1<<i)] + prevSum < k) {
            curr += (1<<i);
            prevSum += fen[curr];
        }
    }
    return curr+1;
}

int lowerBound(int x) {
    int idx = find(x);
    int res = sum(idx);
    return res;
}