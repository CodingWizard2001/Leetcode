# 2706. Buy Two Chocolates

### Description
You are given an integer array prices representing the prices of various chocolates in a store. You are also given a single integer money, which represents your initial amount of money.

You must buy exactly two chocolates in such a way that you still have some non-negative leftover money. You would like to minimize the sum of the prices of the two chocolates you buy.

Return the amount of money you will have leftover after buying the two chocolates. If there is no way for you to buy two chocolates without ending up in debt, return money. Note that the leftover must be non-negative.

### Code
```cpp

int buyChoco(vector<int>& prices, int money){
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    for(const int price : prices){
        if(price <= min1){
            min2 = min1;
            min1 = price;
        }
        else if(price < min2){
            min2 = price;
        }
    }
    const int minCost = min1 + min2;
    return minCost > money ? money : minCost - money;
}

```

### Steps to solution:

- It initializes two variables `min1` and `min2` to store the two minimum prices seen so far. They are initialized with the maximum possible integer value (`INT_MAX`) to ensure any price in the list will be smaller.
- It iterates through each `price` in the prices vector.
- For each price, it checks if it's less than or equal to `min1`. If it is, it updates `min2` to the value of `min1`, and `min1` to the current price. This ensures that `min1` always holds the smallest price encountered, and min2 holds the second smallest.
- If the price is not less than or equal to `min1` but less than `min2`, it updates `min2` to the current price. This ensures that `min2` always holds the second smallest price encountered.
- After processing all prices, it calculates the `minCost` as the sum of `min1` and `min2`.
- It then compares the `minCost` with the available money. If the `minCost` is greater than money, it means the available money is insufficient to buy two chocolates. In this case, it returns money. Otherwise, it returns the difference between `minCost` and money.

#### Time Complexity: O(n)
#### Space Complexity: O(1)