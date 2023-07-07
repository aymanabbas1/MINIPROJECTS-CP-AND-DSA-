#include <iostream>
#include <string>

using namespace std;

// Function to encode the plaintext using Caesar cipher
string encode(string plaintext, int shift) {
    string text = "";

    for (char ch : plaintext) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = (ch - base + shift) % 26 + base;
        }
        text += ch;
    }

    return text;
}

// Function to decode the ciphertext using Caesar cipher
string decode(string ciphertext, int shift) {
    return encode(ciphertext, 26 - shift);
}

int main() {
    string plaintext;
    int shift;
    string process;

    cout << "Enter 'encode' to encrypt and 'decode' to decrypt: ";
    getline(cin, process);

    cout << "Enter the message: ";
    getline(cin, plaintext);

    cout << "Enter shift value: ";
    cin >> shift;

    if (process == "encode") {
        // Encode the plaintext
        string ciphertext = encode(plaintext, shift);
        cout << "The encoded message is: " << ciphertext << endl;
    } else if (process == "decode") {
        // Decode the ciphertext
        string decryptedText = decode(plaintext, shift);
        cout << "The decoded message is: " << decryptedText << endl;
    } else {
        cout << "Invalid process specified. Please enter 'encode' or 'decode'." << endl;
    }

    return 0;
}
