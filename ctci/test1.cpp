/**
 * @file test1.cpp
 * @author Weipeng Zhang
 * created at: 18:00 Dec 12
 */

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(int argc, char* argv[]) {
    map<string, int> mymap;
    mymap.insert(pair<string, int>("name", 2));
    
    map<string, int>::iterator it;
    for (it = mymap.begin(); it != mymap.end(); it++) {
        cout << it->first << " => " << it->second <<endl;
    }
    return 0;
}
