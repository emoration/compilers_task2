int add(int x, int y, ) {  // incomplete parameter list
    return x + y;
}
int (int x, int y) {  // missing function name
    return x + y;
}
printf(char* str) {  // missing function type
    put_c(str);
}

float global_float = ; // missing value
global_float = 3.14;  // unexpected statement

int main() {
    int a=1, flag = true true;  // multiple value
    int arr[5][];  // incomplete array declaration
    type id = &a;  // unknown type
    char char c = 'c';  // multiple type
    char str[20] = "Hello"  // missing semicolon
    a=1;

    int add(int x, int y) {  // unexpected nested function
        return x + y;
    }

    printf("%d\n", ); // missing argument

    if (flag) {
        if (c == 'c')
            ;
        else
            *pointer = 2 + ;  // incomplete expression
        else  // unexpected else
            ;
    }

    for (int i = 0, float f = 0; i < 5; i+=1, ) {  // multiple declaration, incomplete expression
        printf("%d\n", i);
    }

    while (b > 0) {
        do
            b -= a[;  // missing closing bracket
        // missing while
        a -= 1;
        b += 1;
        while(a);
    }

    {
        local_var = (1 + 2) * 3 + ( ;  // unmatched parenthesis
        int local_var;
    // missing closing brace

    return 0;
}
