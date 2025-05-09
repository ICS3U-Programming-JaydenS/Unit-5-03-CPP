// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created By: Jayden Smith
// Date: May 8, 2025
// This code gets the user grade and changes it to percent

#include <iostream>
#include <string>

int grade_calculator(std::string letter_grade) {
    // Declare my variable
    int grade_percent;

    // Checks all the possible grades and assigns a percent to it
    if (letter_grade == "4+") {
        grade_percent = 95;
    } else if (letter_grade == "4") {
        grade_percent = 90;
    } else if (letter_grade == "4-") {
        grade_percent = 85;
    } else if (letter_grade == "3+") {
        grade_percent = 79;
    } else if (letter_grade == "3") {
        grade_percent = 75;
    } else if (letter_grade == "3-") {
        grade_percent = 70;
    } else if (letter_grade == "2+") {
        grade_percent = 69;
    } else if (letter_grade == "2") {
        grade_percent = 65;
    } else if (letter_grade == "2-") {
        grade_percent = 60;
    } else if (letter_grade == "1+") {
        grade_percent = 59;
    } else if (letter_grade == "1") {
        grade_percent = 55;
    } else if (letter_grade == "1-") {
        grade_percent = 50;
    } else {
        // If the grade is not a real one this happens
        grade_percent = -1;
    }
    return grade_percent;
}

int main() {
    // Define my variables
    std::string user_grade;
    int percent_grade;

    // Get my user grade
    std::cout << "What is your grade? ";
    std::cin >> user_grade;
    percent_grade = grade_calculator(user_grade);

    // What displays if it is not a valid grade
    if (percent_grade == -1) {
        std::cout << "Please enter a valid Canadian grade (4+, 4, 4-, etc.)\n";

    // If it is valid this happens
    } else {
        std::cout << "Your grade is " << percent_grade << "%\n";
    }
}
