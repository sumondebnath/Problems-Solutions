/*
    Problem Link : https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875
*/

void reverseStack(stack<int> &st) {
    // Write your code here
    if(st.empty()) {
        return;
    }
    int temp = st.top();
    st.pop();
    reverseStack(st);

    stack<int> cs;
    while(!st.empty()) {
        cs.push(st.top());
        st.pop();
    }
    st.push(temp);
    while(!cs.empty()) {
        st.push(cs.top());
        cs.pop();
    }
}