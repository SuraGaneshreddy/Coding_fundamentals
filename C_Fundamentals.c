#include <stdio.h>

int main()
{
    /*
    printf("Hello World!");
    // Variables, Data Types
    int integer = 10;
    float digit = 3.14;
    char character = 'A';
    char text[] = "I See You"; // char array is used to store strings in C
    _Bool isTrue = 1;

    printf("%d\n %.2f\n %c\n %s\n", integer, digit, character, text);
    printf("%d\n", isTrue);
    // Input and Output
    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name); // Use & to get the address of the variable
    printf("Hello %s\n", name);
    //Control the space
    int a = 10;
    int b = 20;
    int c = 30;
    printf("%-9d %-9d %d\n", a, b, c); // Left align
    printf("%9d %9d %9d\n", a, b, c); // Right align
    // Operators. Logical Operators: && (logical AND), || (logical OR), ! (logical NOT)
    int a = 5, b = 3;
    printf("%d + %d = %d\n", a, b,  a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b); // Use %% to print the % symbol
    // string formatting
    char name[20] = "John";
    printf("Hello %s\n", name);
    printf("%c\n", name[0]); // Accessing individual characters in a string
    name[0] = 'M'; // Modifying a character in a string
    printf("Hello %s\n", name);
    char *greeting = "Good Morning"; // String literal stored in read-only memory it cannot be modified if tried behavior is undefined
    printf("%s\n", greeting);
    greeting[0] = 'B'; // This will cause a segmentation fault because we are trying to modify a string literal
    printf("%s\n", greeting); // This line will not be executed due to the segmentation fault in the previous line
    // Decision Making
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a < b) {
        printf("%d is less than %d\n", a, b);
    }
    else {
        printf("%d is Equal to %d\n", a, b);
    }
    // Ternary Operator
    int age = 30;
    char *result = (age >= 18) ? "Adult" : "Minor";
    printf("You are an %s\n", result);
    (age >= 18) ? printf("You are an Adult\n") : printf("You are a Minor\n");
    // switch case
    int day;
    printf("Enter a number (1 - 7) to represent a day of the week: ");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    // while loop
    int h = 1;
    while (h <= 5) {
        printf("%d\n", h);
        h++;
    };
    // do while loop
    int g = 1;
    do {
        printf("%d\n", g);
        g++;
    }while (g <= 5);
    // For Loop
    for (int i = 10; i > 0; i--) {
        for (int j = 0; j > 11-i-1; j--){
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 10; i > 0; i--) {
        for (int j = 0; j < 11-i-1; j++){
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10-i-1; j++){
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10 -i-1; j++){
            printf(" ");
        }
        for (int j = 1; j <= (2*i-1); j++) {
            printf("*");
        }
        printf("\n");
     // Arrays
    int numbers[5] = {1, 2, 3, 4, 5};
    printf("%d\n", numbers[0]);
    // print all elements in array using for loop
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    //Array size
    int num[10];
    num[0] = 1;
    printf("%d\n", num[0]);
    // Multidimensional Arrays
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    // print all elements in 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // Enumerator
    // By default, the first enumerator has the value 0, and each subsequent enumerator's value is incremented by 1.
    // However you can assign specific values to the enumerators,
    // and the subsequent enumerators will continue incrementing from that value.
    enum week {Mon = 7, tues, wed, thurs, fri, sat, sun} day;
    printf("Please enter a number between 7 and 13 :");
    scanf("%d", &day);
    switch (day) {
        case Mon: printf("Monday\n");break;
        case tues: printf("Tuesday\n");break;
        case wed: printf("Wednesday\n");break;
        case thurs: printf("Thursday\n");break;
        case fri: printf("Friday\n");break;
        case sat: printf("Saturday\n");break;
        case sun: printf("Sunday\n");break;
        default: printf("Invalid input! Please enter a number between 7 and 13 : ");break;
    }
    // memory address
    int myage = 30;
    int *ptr  = &myage; // Use * to declare a pointer variable and & to get the address of the variable
    printf("%d\n", myage); // print the value of the variable
    printf("%d\n", *ptr); // Use * to deference the pointer variable to get the value stored at that address
    printf("%p\n", ptr); // print the address stored in the pointer variable
    printf("%p\n", &myage); // Use & to get the address of the variable
    // Difference b/w pinter and normal variable
    int u = 10;
    int v = u;
    printf("%d\n", v);
    printf("%p\n", &u);
    printf("%p\n", &v);
    return 0;
    */
    // unsigned int: It is a data type that can only store non-negative integers (0 and positive integers).
    unsigned int a=5, b=3;
    int c = a & b; // Bitwise AND
    printf("%d\n", c);
    
}