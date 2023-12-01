#include <iostream>
#include <fstream>

using namespace std;

void encryptFile(string inputFile, string outputFile, string key) {
  ifstream fin(inputFile, ios::in);
  ofstream fout(outputFile, ios::out);

  string line;
  while (getline(fin, line)) {
    fout << encrypt(line, key) << endl;
  }

  fin.close();
  fout.close();
}

void decryptFile(string inputFile, string outputFile, string key) {
  ifstream fin(inputFile, ios::in);
  ofstream fout(outputFile, ios::out);

  string line;
  while (getline(fin, line)) {
    fout << decrypt(line, key) << endl;
  }

  fin.close();
  fout.close();
}

int main() {
  string inputFile, outputFile, key;
  bool encrypt = true;

  cout << "Enter the input file: ";
  cin >> inputFile;

  cout << "Enter the output file: ";
  cin >> outputFile;

  cout << "Enter the key: ";
  cin >> key;

  cout << "Encrypt (1) or Decrypt (0): ";
  cin >> encrypt;

  if (encrypt) {
    encryptFile(inputFile, outputFile, key);
    cout << "File encrypted successfully." << endl;
  } else {
    decryptFile(inputFile, outputFile, key);
    cout << "File decrypted successfully." << endl;
  }

  return 0;
}
