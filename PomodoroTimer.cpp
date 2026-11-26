// PomodoroTimer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <thread>
#include <chrono>

int main(int argc, char* argv[]){

    int number;

    std::cout << "Enter a number: ";
    
    if (!(std::cin >> number)) {
		// c++ is dumb, this means, do the assigemnt anyways and if does not work, then do the code in the if statement
        std::cerr << "Invalid input! Please enter a number.\n";
        return 1;
    }

    std::cout << "Timer starts now" << "\n";
    
    int secondsLeft = number;

    while (secondsLeft > 0) {
        // Display time
        std::cout << "Time left: " << secondsLeft << " seconds\n";
        //minus 1 from the time
        --secondsLeft;
        // Wait for 1 secon
		std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "Time is up!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
