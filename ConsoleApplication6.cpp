#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

string convertToRoman(int arabicNumber) {
    int j = 1;
    string romanNumber = "";
    map<int, string> listRomanNumbers;

    listRomanNumbers[1] = "I";
    listRomanNumbers[2] = "II";
    listRomanNumbers[3] = "III";
    listRomanNumbers[4] = "IV";
    listRomanNumbers[5] = "V";
    listRomanNumbers[6] = "VI";
    listRomanNumbers[7] = "VII";
    listRomanNumbers[8] = "VIII";
    listRomanNumbers[9] = "IX";
    listRomanNumbers[10] = "X";
    listRomanNumbers[20] = "XX";
    listRomanNumbers[30] = "XXX";
    listRomanNumbers[40] = "XL";
    listRomanNumbers[50] = "L";
    listRomanNumbers[60] = "LX";
    listRomanNumbers[70] = "LXX";
    listRomanNumbers[80] = "LXXX";
    listRomanNumbers[90] = "XC";
    listRomanNumbers[100] = "C";
    listRomanNumbers[200] = "CC";
    listRomanNumbers[300] = "CCC";
    listRomanNumbers[400] = "CD";
    listRomanNumbers[500] = "D";
    listRomanNumbers[600] = "DC";
    listRomanNumbers[700] = "DCC";
    listRomanNumbers[800] = "DCCC";
    listRomanNumbers[900] = "CM";
    listRomanNumbers[1000] = "M";
    listRomanNumbers[2000] = "MM";
    listRomanNumbers[3000] = "MMM";

    while (arabicNumber > 0) {
        j = j * 10;
        int k = arabicNumber % (j);
        romanNumber += listRomanNumbers[k];
        arabicNumber = arabicNumber - k;
    }

    reverse(romanNumber.begin(), romanNumber.end());
    return romanNumber;
}
int main()
{
    setlocale(LC_ALL, "ru");
    int arabicNumber;

    cout << "Ввдеите арабское число: ";
    cin >> arabicNumber;

    string romanNumber = convertToRoman(arabicNumber);
    cout << "Римское число: " << romanNumber;
    return 0;
}