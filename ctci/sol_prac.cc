/**
 * @file sol_prac.cpp
 * @author Weipeng Zhang
 * created at: 13:20 2014 Jan 16
 */

#include<iostream>
#include<cstdio>
#include<map>


/**
 * implement an algorithm to determine if a string has all unique characters.
 * Write code to reverse a C-Style String
 */

/**
 * the basic implementation
 * time complexity: n^2
 */
int str_uniq(char* str) {
    int pos= 1;
    while (str[pos] != '\0') {
        for (int j = 0; j < pos; j++) {
            if (str[j] == str[pos]) {
                return 1;
            }
        }
        pos++;
    }
    return 0;
}

/**
 * Use C++ map
 */
int str_uniq_map(char* str) {
    int pos = 1;
    std::map<char, int> mymap;
    while (str[pos] != '\0') {
        if (mymap.count(str[pos]) > 0) {
            return 1;
        } else {
            mymap.insert(std::pair<char, int>(str[pos], 1));
        }
    }
    return 0;
}

/**
 * ASCII code, just 256, using bit operation
 */
int is_uniq_ascii(char* str) {
    int map[8];
    memset(map, 0, sizeof(int) * 8);
    int pos = 0, cha, div, rem;
    while (str[pos] != '\0') {
        cha = (int)str[pos];
        div = cha / 32;
        rem = cha % 32;
        if ((map + int(str[pos])) > 0) {
            return 1;
        } else {
            



int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s string\n", argv[0]);
        return 1;
    }
    if (str_uniq_map(argv[1]) > 0) {
        printf("This string: %s is not a uniq string.\n", argv[1]);
    } else {
        printf("This string: %s is a uniq string.\n", argv[1]);
    }
    return 0;
}
