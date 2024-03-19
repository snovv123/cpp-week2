int generateRandomNumber();

#include <iostream>

void playGame() {
    int A[3];
    int G[3];
    int answer = generateRandomNumber();
    std::cout << "Answer is : " << answer << "\n";

    for (int i = 2; i >= 0; i--) {
        A[i] = answer % 10;
        answer /= 10;
    }

    int strike = 0, ball = 0;
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
    }
}
