/***
 * Advent of Code 2021 - Day 1 (Part One)
 * Barnabas Bulpett
 * Description: https://adventofcode.com/2021/day/1
 * Summary: Given text file of row-separated list of integers,
 *  find the number of times the subsequent value increases
 *  in relation to the last.
***/

#include <iostream>
#include <fstream>

int countDepthIncreases() {
    std::ifstream inputFile("../input.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Could not open the input file! :(" << std::endl;
        return EXIT_FAILURE;
    }

    int count = 0;
    int lastDatum = INT_MAX;
    int currentDatum;

    while (inputFile >> currentDatum) {
        if (currentDatum > lastDatum) {
            count ++;
        };

        lastDatum = currentDatum;
    }

    return count;
}

int main() {
    int count = countDepthIncreases();
    std::cout << "Num increases: " << count << std::endl;

    return 0;
}