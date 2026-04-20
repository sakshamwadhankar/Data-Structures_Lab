// Name: Saksham Wadhankar
// PRN: 25070521221
// Value Added Problem

#include <stdio.h>
#include <string.h>

char stack[1000000];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    if (top == -1) return '#';
    return stack[top--];
}

int match(char a, char b) {
    if (a == '(' && b == ')') return 1;
    if (a == '{' && b == '}') return 1;
    if (a == '[' && b == ']') return 1;
    return 0;
}

int main() {
    char s[1000000];
    scanf("%s", s);

    for (int i = 0; s[i]; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            push(s[i]);
        } else {
            char p = pop();
            if (!match(p, s[i])) {
                printf("false");
                return 0;
            }
        }
    }

    if (top == -1)
        printf("true");
    else
        printf("false");

    return 0;
}