<!-- This is very important property of linear arrays (Linked list dose not have this property) -->

# Example 2.1 - 

```
A car manufacturing company uses an array to record number of cars sold each year starting from 1965 to 2015. 
rather than beginning the array index from 0 to 1, 
it is more useful to begin the array index from 1965 as shown below:
```

![alt text](image-1.png)

a. Find the total number of years 
b. Suppose base addrss = 500, word length w=4, find address of car[1967], car[1969] and car[2015]


# Solution 2.1

a. Given 
```
Lower bound = lb = 1965
Upper Bound = ub = 2015 

so total number of years = 2015 - 1965 + 1 = 51 years total years
```
b. Given location to find for j respectively : 1967, 1969 and 2015 , w=4 , lb=1965

```

loc = bassadd + w * (j-lb)

1. loc(car[1967])= 500 + 4 * (1967-1965) = 508
2. loc(car[1969])= 500 + 4 * (1969-1965) = 516
3. loc(car[2015])= 500 + 4 * (2015-1965) = 700

```


# Example 2.2 - 

```
 Consider the linear arrays AAA(5:50), BBB(-5:10) and CCC(1:18)

 (a) Find the number of elements in each array 
 (b) Suppose Base(AAA) = 300 and w=4 words per memory cell for AAA. FInd the address of AAA[15], AAA[35] and AAA[55]

```

# Solution 2.2: 

```
a. 

- Number of elements in AAA(5:50) => ub - lb + 1 = 50 - 5 + 1 = 46
- Number of elements in BBB(-5:10) => ub - lb + 1 = 10 - (-5) + 1 = 16
- Number of elements in CCC(1:18) => ub - lb + 1 = 18 - 1 + 1 = 18

b. 

- loc(AAA[15]) = baseadd + w* (j-lb) = 300 + 4 * (15-5) => 340
- loc(AAA[35]) = baseadd + w* (j-lb) = 300 + 4 * (35-5) => 420
- loc(AAA[55]) = Cannot be ccomputed as sinxe 55 is exceeding ub 50
```


