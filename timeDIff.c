#include<stdio.h>
#include<time.h>

time_t begin, end;

int main()
{
    long i;
    begin = time( NULL );
    
    
    for ( i = 0; i < 15000; i++ )
        printf("la i: %d\n",i);
    
    end = time( NULL );
    printf("start, %ld\n", begin);
    printf("end, %ld\n", end);
    printf("El tiempo que duro el for es: %f\n", difftime(end,begin));

    return 0;
}