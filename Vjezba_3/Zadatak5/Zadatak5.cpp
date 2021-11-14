#include<iostream>
#include<string>
#include "header5.hpp"

using namespace std;

int strInStr(string str, string subStr) {
    int cnt = 0;
    size_t nPos = str.find(subStr); // first occurrence
    while (nPos != string::npos)
    {
        cnt++;
        nPos = str.find(subStr, nPos + 1);
    }
    return cnt;
}