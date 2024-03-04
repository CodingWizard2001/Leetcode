# 455. Assign Cookies

### Description
Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.

### Code
```cpp

int findContentChildren(vector<int>& g, vector<int>& s){
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int i = 0,j = 0,count = 0;
    while(i < g.size() && j < s.size()){
        if(s[j] >= g[i]){
            count++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return count;
}

```

### Steps to solution:

- It sorts the vectors `g` (greed factors of children) and `s` (sizes of cookies) in ascending order.
- It initializes two indices `i` and `j` to traverse the sorted vectors `g` and `s` respectively, and a counter `count` to keep track of the number of content children.
- It iterates through both vectors using a while loop until either of the vectors is exhausted.
- If the size of the current cookie `s[j]` is greater than or equal to the greed factor of the current child `g[i]`, it means the cookie can be given to the child, so it increments both `i` and `j` and increments the `count`.
- If the size of the current cookie is less than the greed factor of the current child, it means the current cookie cannot satisfy the current child. So, it only increments `j` to try the next cookie with the same child.
- After traversing both vectors, it returns the count of content children, which represents the maximum number of children that can be content with the available cookies.
- In the `main` function, it takes input for the greed factors of children and the sizes of cookies, and then it calls the `findContentChildren` function to get the maximum number of content children and prints it out.

#### Time Complexity: O(nlogn)
#### Space Complexity: O(1)