```c
void main() {
    int var = 15;
    while (var > 0) {
        var -= 2;
        if(var%3 ==0) {
            printf("variable = %i \n", var);
        }
    }
}
```

# Solution
var = 15\
13 -> 11 -> 9 -> 7 -> 5 -> 3 -> 1 -> -1

## Prints:
```
variable = 9
variable = 3
```