#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    int steps = 1;
    std::cout << "------------------------welcome-----------\n";
    std::cout << "Welcome to number guessing game\n";

    int from , to;
    std::cout <<"enter the range from > ";
    std::cin >> from;
    std::cout << "to > ";
    std::cin >> to;


    srand(time(0));

    int secret = rand() % (to - from  - 1) + from + 1;

    std::cout << "-----okay i choose a number , time for u to guess----\n";
    int input;
    while(true){
        std::cout << "guess > ";
        std::cin >> input;
        if (secret == input){
            break;
        }
        if (input > secret){
            std::cout << " bitch  number to high guess low\n"; 
            steps += 1;
        }

        else{
            std::cout << "whore number too low guess high\n";
            steps += 1;

        }

    }

    std::cout << "congo you guessed the number " << secret << " in " << steps << "\n";

}