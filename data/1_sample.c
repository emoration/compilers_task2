// function
int add(int x, int y) {
    return x + y;  // return expression
}
void printf(char* str) {
    printf("%s", str);
    return;  // return nothing
}
// global declaration
float global_float;
// main function
int main() {
    // declaration
    int a=1, flag = true;
    int arr[5];
    int * pointer = &a;
    char c = 'c';
    char str[20] = "Hello";
    // if-else
    if (flag) {
        if (a * 2 < 10)
            if (c == 'c')
                str[a] = 1;  // array variable index
            else  // Dangling else
                *pointer = 2;  // pointer variable
    }
    // for
    for (i = 0; i < 5; i+=1, a=1) { // separated by comma
        printf("%d\n", i);  // function call
        for (int i = 0; i < 5; i+=1) {  // for with declaration
            result = (a > b) && (b < 10);  // expression
        }
    }
    // while
    while (b > 0) {
        do
            b-=1;
        while (b > 0);
    }
    // block
    {
        ;  // empty statement
        int local_var;
        local_var = 1;
    }
    // return
    return 0;
}
