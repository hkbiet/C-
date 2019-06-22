#include <stdio.h>

void update(int *a,int *b) {

    int sum,absdiff, inc;
    inc =0;
    sum = *a + *b;
    
    absdiff = *a - *b;

    if(absdiff < 0){
        
        //while((absdiff + inc) != 0){
          //  inc = inc +1;
        //}
        absdiff = absdiff * -1;

        *a = sum;
        *b=absdiff;

    }else {

    *a = sum;
    *b = absdiff;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


