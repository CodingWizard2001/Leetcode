# 997. Find the Town Judge

### Description
In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge. If the town judge exists, then:

1.  The town judge trusts nobody.
2.  Everybody (except for the town judge) trusts the town judge.
3.  There is exactly one person that satisfies properties 1 and 2.

You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist. Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

### Code
```cpp

int findJudge(int n, vector<vector<int>>& trust) {
    vector<int>count(n + 1);
    for(vector<int>&t : trust){
        --count[t[0]];
        ++count[t[1]];
    }
    for(int i = 1;i < n + 1;i++){
        if(count[i] == n - 1){
            return i;
        }
    }
    return -1;
}

```

### Steps to solution:

- It initializes a vector count with size n + 1, where count[i] will store the difference between the number of people trusting person i and the number of people trusted by person i. This initialization ensures that each person's count starts from 0.
- It iterates through each trust relationship represented by a vector t in the trust vector.
- For each trust relationship t, it decrements the count of the person being trusted (t[0]) and increments the count of the person trusting (t[1]).
- After processing all trust relationships, it iterates through the count vector from index 1 to n.
- For each index i, it checks if the count is equal to n - 1, which means that person i is trusted by everyone else in the town.
- If such a person is found, it returns their index, which represents the town judge.
- If no town judge is found after iterating through all indices, it returns -1 to indicate that there is no town judge in the town.

#### Time Complexity: O(n + m)
#### Space Complexity: O(n)