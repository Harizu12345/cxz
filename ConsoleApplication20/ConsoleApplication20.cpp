#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//1

/*
int main() {
    FILE* cppcFile = fopen("cppc.txt", "r");

    if (!cppcFile) {
        cout << "error cppc.txt\n";
        return 1;
    }   

    string lines[100];
    int count = 0;

    char line[255];
    while (fgets(line, sizeof(line), cppcFile)) {
        lines[count++] = line;
    }

    fclose(cppcFile);

    if (count == 0) {
        cout << "file cppc.txt dont have text\n";
        return 1;
    }

    FILE* prinFile = fopen("prin.txt", "w");

    if (!prinFile) {
        cout << "error prin.txt\n";
        return 1;
    }

    for (int i = 0; i < count - 1; ++i) {
        fputs(lines[i].c_str(), prinFile);
    }

    fclose(prinFile);

    cout << "The last line is deleted and written to the file prin.txt\n";

    return 0;
}
*/



//2

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream lasFile("las.txt");

    if (!lasFile.is_open()) {
        cout << "error las.txt\n";
        return 1;
    }

    ofstream aslFile("asl.txt");

    if (!aslFile.is_open()) {
        cout << "erroe asl.txt\n";
        return 1;
    }

    string line;
    int lineNumber = 1;

    while (getline(lasFile, line)) {
        if (lineNumber % 2 != 0) {
            aslFile << line << '\n';
        }
        lineNumber++;
    }

    lasFile.close();
    aslFile.close();

    cout << "The even-numbered lines are deleted and written to the file asl.txt\n";

    return 0;
}
