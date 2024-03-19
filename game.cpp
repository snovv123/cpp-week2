void generateRandomNumber(int A[]);

#include <iostream>

void playGame() {
    int A[3];
    int G[3];

   
    generateRandomNumber(A);

    int strike = 0, ball = 0;
    int count = 0;

    while (true) {
        strike = 0, ball = 0;
        int guess;
        std::cout << "Enter a guess : ";
        std::cin >> guess;

        
        for (int i = 2; i >= 0; i--) {
            G[i] = guess % 10;
            guess /= 10;
        }

        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (A[i] == G[j]) {
                    if (i == j) {
                        strike++;
                    } else {
                        ball++;
                    }
                }
            }
        }

        
        if (strike == 3) {
            std::cout << "You Win!" << std::endl;
            break;
        } else {
            std::cout << "Strike : " << strike << " Ball : " << ball << std::endl;
        }

        
        if (count == 5) {
            std::cout << "You lose!" << std::endl;
            break;
        }
        count++;
    }
}
