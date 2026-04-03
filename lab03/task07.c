#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    int n, i, max_idx = 0;
    scanf("%d", &n);
    Student *s = (Student*)malloc(n * sizeof(Student));
    for(i = 0; i < n; i++) {
        scanf("%s %d", s[i].name, &s[i].age);
    }
    for(i = 1; i < n; i++) {
        if(s[i].age > s[max_idx].age) max_idx = i;
    }
    printf("%s %d\n", s[max_idx].name, s[max_idx].age);
    free(s);
}