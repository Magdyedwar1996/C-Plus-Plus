    for (int i = 0; i < n; i++) {
        // if the stack is empty or the current building is taller than the top building
        if (st.empty() || h[i] >= h[st.top()]) {
            st.push(i);  // push the current index to the stack
        } else {
            // if the current building is shorter than the top building
            while (!st.empty() && h[i] < h[st.top()]) {
                int idx = st.top();  // get the top index from the stack
                st.pop();  // pop the top index from the stack
                ll width = st.empty() ? i : i - st.top() - 1;  // calculate the width of the rectangle
                ll area = h[idx] * width;  // calculate the area of the rectangle
                max_area = max(max_area, area);  // update the maximum area if necessary
            }
            st.push(i);  // push the current index to the stack
        }
    }