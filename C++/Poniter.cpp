#include <stdio.h>
#include <cstdlib> // for using abs i.e absolute.
void update(int *a,int *b) {
    // Complete this function 
    int first  = *a + *b;
    int second = abs(*a - *b);
    *a =  first;
    *b = second;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
