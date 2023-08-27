#include<iostream>
#include<vector>
#include <time.h>

int main () {
    double sum = 0;
    double add = 1;
    // Start measuring time
    struct timespec begin, end; 
    clock_gettime(CLOCK_REALTIME, &begin);
    int iterations = 1000*1000*1000;
    for (int i=0; i<iterations; i++) {
        sum += add;
        add /= 2.0;
    }
       int t=100;
        int n=200000;
        while (t){
        std::vector<int> a;
        for (int i=0;i<n;i++)
        a.push_back(i);
        t--;
        }
    // Stop measuring time and calculate the elapsed time
    clock_gettime(CLOCK_REALTIME, &end);
    long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;
    printf("Result: %.20f\n", sum);
    printf("Time measured: %.3f seconds.\n", elapsed);
 clock_gettime(CLOCK_REALTIME, &begin);
    int iterations = 1000*1000*1000;
    for (int i=0; i<iterations; i++) {
        sum += add;
        add /= 2.0;}
         t=100;
         n=200000;
	 while (t)
 {
	vector<int> b;
       	b.reserve(n+1);
	 for (int i=0;i<n;i++)
	 b.push_back(i);
	 t--;	 }
       
    // Stop measuring time and calculate the elapsed time
    clock_gettime(CLOCK_REALTIME, &end);
    long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;
    printf("Result: %.20f\n", sum);
    printf("Time measured: %.3f seconds.\n", elapsed);




    return 0;
}
