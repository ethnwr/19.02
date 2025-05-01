#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    size_t length;     
    char* str;       

public:
   
    String(const char* initStr) {
        length = strlen(initStr);
        str = new char[length + 1];
        copy(initStr, initStr + length, str);
        str[length] = '\0';
    }
    String(size_t len) : length(len) {
        str = new char[length + 1];
        str[0] = '\0'; 
    }
    String(const String& other) {
        length = other.length;
        str = new char[length + 1];
      
        copy(other.str, other.str + length, str);
        str[length] = '\0';
    }
    ~String() {
        delete[] str; 
    }   
    void display() const {
        cout << str << endl;
    }
    void setString(const char* newStr) {
        size_t newLength = strlen(newStr);

        if (newLength > length) {
            delete[] str; 
            str = new char[newLength + 1]; 
            length = newLength; 
        }
       copy(newStr, newStr + newLength, str);
        str[newLength] = '\0';
    }
    const char* getString() const {
        return str;
    }
    size_t getLength() const {
        return length;
    }
};
