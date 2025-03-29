#include <stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num < 2) return 0;

    for (int i = 2; i <= sqrt(num); i++) { 
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

// int main() {
//     int t, num;
//     scanf("%d", &t); // Read number of test cases

//     while (t--) {
//         scanf("%d", &num); // Read each number
//         printf("%d\n", isPrime(num)); // Print result
//     }

//     return 0;
// }

