#include <cstdlib>
#include <ctime>

void generateRandomNumber(int A[]) {
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        A[i] = (rand() % 9) + 1;
        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                i--; 
                break;
            }
        }
    }
}
