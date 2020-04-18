class MinStack {
	private:
		vector<int> s;
		int sp;
		int m;

	public:
		/** initialize your data structure here. */
		MinStack() {
			sp = 0;
			m = INT_MAX;
		}

		void push(int x) {
			if (s.size() <= sp)
				s.push_back(x);
			else
				s[sp] = x;
			sp++;
			if (sp == 1 || m > x)
				m = x;
		}

		void pop() {
			if (sp > 0)
				sp--;
			if (m == s[sp]) {
				m = s[0];
				for (int i = 1; i < sp; i++)
					m = min(m, s[i]);
			}
		}

		int top() {
			if (sp > 0)
				return s[sp - 1];
			else
				return 0;
		}

		int getMin() {
			if (sp > 0)
				return m;
			else
				return 0;
		}
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
