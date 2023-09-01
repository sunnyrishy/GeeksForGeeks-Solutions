stack<char> stack; // Create a stack to store opening brackets

        // Loop through each character in the string
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                // If it's an opening bracket, push it onto the stack
                stack.push(c);
            } else if (!stack.empty() &&
                       ((c == ')' && stack.top() == '(') ||
                        (c == ']' && stack.top() == '[') ||
                        (c == '}' && stack.top() == '{'))) {
                // If it's a closing bracket that matches the top of the stack, pop the stack
                stack.pop();
            } else {
                // If it's a mismatched bracket or a closing bracket without a matching opening bracket
                return false; // The string is invalid
            }
        }

        // If all brackets are matched and the stack is empty, the string is valid
        return stack.empty();
