# 458. Poor Pigs

### Description
There are buckets buckets of liquid, where exactly one of the buckets is poisonous. To figure out which one is poisonous, you feed some number of (poor) pigs the liquid to see whether they will die or not. Unfortunately, you only have minutesToTest minutes to determine which bucket is poisonous. You can feed the pigs according to these steps:

1. Choose some live pigs to feed.
2. For each pig, choose which buckets to feed it. The pig will consume all the chosen buckets simultaneously and will take no time. Each pig can feed from any number of buckets, and each bucket can be fed from by any number of pigs.
3. Wait for minutesToDie minutes. You may not feed any other pigs during this time.
4. After minutesToDie minutes have passed, any pigs that have been fed the poisonous bucket will die, and all others will survive.
5. Repeat this process until you run out of time.

Given buckets, minutesToDie, and minutesToTest, return the minimum number of pigs needed to figure out which bucket is poisonous within the allotted time.

### Code
```cpp

int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
    const int base = (minutesToTest / minutesToDie) + 1;
    int ans = 0;
    for(int i = 1;i < buckets;i *= base) ++ans;
    return ans;
}

```

### Steps to solution:

- It calculates the base as (`minutesToTest / minutesToDie) + 1`. This represents the number of states each pig can test within the given time frame, including the possibility of not consuming any poison.
- It initializes a variable `ans` to `0`, which represents the number of pigs needed.
- It iterates through the buckets using a for loop, starting from `i = 1` and doubling `i` each time until `i` exceeds the number of buckets.
- For each iteration, it increments `ans` by 1.
- After the loop, it returns the value of `ans`, which represents the minimum number of pigs needed to determine which buckets are deadly within the given time frame.


#### Time Complexity: O(logn)
#### Space Complexity: O(1)