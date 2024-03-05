# 412. Fizz Buzz

### Description
Given an integer n, return a string array answer (1-indexed) where:

1.  answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
2.  answer[i] == "Fizz" if i is divisible by 3.
3.  answer[i] == "Buzz" if i is divisible by 5.
4.  answer[i] == i (as a string) if none of the above conditions are true.

### Code
```cpp

vector<string> fizzBuzz(int n){
    vector<string>ans;
    for(int i = 1;i <= n;i++){
        string s;
        if(i % 3 == 0) s += "Fizz";
        if(i % 5 == 0) s += "Buzz";
        ans.push_back(s.empty() ? to_string(i) : s);
    }
    return ans;
}

```

### Steps to solution:

- It initializes an empty vector ans to store the FizzBuzz sequence.
- It iterates from 1 to n.
- For each number i, it checks if it's divisible by 3 or 5 or both.
- If i is divisible by 3, it appends "Fizz" to the string s.
- If i is divisible by 5, it appends "Buzz" to the string s.
- If the string s remains empty (i.e., i is not divisible by 3 or 5), it appends the string representation of i to s.
- Finally, it pushes the string s into the vector ans.

#### Time Complexity: O(n)
#### Space Complexity: O(n)