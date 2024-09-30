class CustomStack {
    int mx, t, *p;

public:
    CustomStack(int maxSize) {
        mx = maxSize;
        p = new int[mx];
        t = -1;
    }

    ~CustomStack() { delete[] p; }

    void push(int x) {
        if (t < mx - 1) {
            t++;
            p[t] = x;
        }
    }

    int pop() {
        if (t > -1) {
            t--;
            return p[t + 1];
        } else
            return -1;
    }

    void increment(int k, int val) {
        int lim = min(k, t + 1);
        for (int i = 0; i < lim; i++) {
            p[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */