#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    
    start = clock(); 
    for (int i = 0; i < 1000; i++) {
        printf("Hello World\n");
    }
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; 
    printf("Time execution: %f second\n", cpu_time_used);
    
    return 0;
}

