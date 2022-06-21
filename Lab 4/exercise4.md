```c
void main() {
    int n;
    for (n =0; n <=20; n++) {
        if (n%2==0) {
            printf("%i is even \n", n);
            n += 3 ;
        }
        if (n%3==0) {
            printf("%i is multiple of 3 \n", n);
            n += 5 ;
        }
        if (n%5==0) {
            printf("%i is multiple of 5 \n", n);
        }
    }
}
```

# Solution
0 (+3)= 3 (+5)= 8 (n++)= 9 (+5)= 14 (n++)= 15 (+5)= 20

## Prints:
```
0 is even
3 is mutiple of 3
9 is mutiple of 3
15 is mutiple of 3
20 is mutiple of 5
```
