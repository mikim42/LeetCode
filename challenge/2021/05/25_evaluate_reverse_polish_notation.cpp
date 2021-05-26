class Solution {
	public:
		int evalRPN(vector<string>& tokens) {
			stack<int> st;
			string ops = "+-*/";
			int size = tokens.size();

			for (int i = 0; i < size; ++i) {
				if (string::npos != ops.find(tokens[i])) {
					int b = st.top(); st.pop();
					int a = st.top(); st.pop();
					int c = 0;

					switch (tokens[i][0]) {
						case '+':
							c = a + b;
							break;
						case '-':
							c = a - b;
							break;
						case '*':
							c = a * b;
							break;
						case '/':
							c = a / b;
							break;
					}
					st.push(c);
				}
				else
					st.push(stoi(tokens[i]));
			}
			return st.top();
		}
};
