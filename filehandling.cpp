#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string data;
    ofstream outfile("data.txt");

    if (!outfile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    cout << "Enter some data: ";
    getline(cin, data);

    outfile << data;
    outfile.close();

    cout << "Data written to file successfully." << endl;
    ifstream infile("data.txt");

    if (!infile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nData read from file: " << endl;

    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();

    return 0;
}
