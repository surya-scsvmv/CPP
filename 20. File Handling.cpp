#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("sample.txt");
    fout << "Hello C++ File Handling!";
    fout.close();

    ifstream fin("sample.txt");
    string line;
    getline(fin, line);
    cout << "File Content: " << line << endl;
    fin.close();
    return 0;
}
