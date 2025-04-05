# Operations on Arrays

- Traversing 
- Inserting 
- Deleting
- Searching 
- Sorting 

# Traversing 

- "How to read the data from the keyboard and how to display data items stored in the array ?"

```
1. for-llop
2. while-loop
3. do-while
4. if-statement
5. switch-statement 
```

- Here, memory for 5 integers is reserved and each item in the array can be access by specifying the index :
```
int a[5];
```

![alt text](image.png)

- "How to store the data items in these locations which are read from the keyboard ?"

- This is achived by reading n data items from the keyboard using scanf() function which is available in C library as shown 

```
scanf("%d", &a[0]);
scanf("%d", &a[1]);
scanf("%d", &a[2]);
scanf("%d", &a[n-1]);

In general, scanf("%d", &a[i]) where i=0,1,2,3,.......,n-1
```