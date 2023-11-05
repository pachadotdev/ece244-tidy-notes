#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("myFile.txt");

    int num = 0, sum = 0;

    while(!inFile.eof()) {
        inFile >> num;
        if (inFile.fail()) {
            inFile.clear();
            inFile.ignore(1000, '\n');
        } else {
            sum += num;
        }
    }

    cout << "Reached end of file" << endl;
    cout << "The sum is " << sum << endl;
    return 0;
}
