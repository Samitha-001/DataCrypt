#include <iostream>

using namespace std;

string encrypt(string plaintext, string key) {
  string ciphertext = "";
  for (int i = 0; i < plaintext.length(); i++) {
    int index = plaintext[i] - 'A';
    ciphertext += key[index];
  }
  return ciphertext;
}

string decrypt(string ciphertext, string key) {
  string plaintext = "";
  for (int i = 0; i < ciphertext.length(); i++) {
    int index = key.find(ciphertext[i]);
    plaintext += (char)('A' + index);
  }
  return plaintext;
}

int main() {
  string plaintext = "Hello, World!";
  string key = "BCDEFGHIJKLMNOPQRSTUVWXYZA";

  string ciphertext = encrypt(plaintext, key);
  cout << "Encrypted text: " << ciphertext << endl;

  string decryptedText = decrypt(ciphertext, key);
  cout << "Decrypted text: " << decryptedText << endl;

  return 0;
}
