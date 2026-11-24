#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int manualLength(const char text[]) {
    int length = 0;
    while (text[length] != '\0') ++length;
    return length;
}

void manualCopy(char destination[], const char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        ++i;
    }
    destination[i] = '\0';
}

int manualCompare(const char first[], const char second[]) {
    int i = 0;
    while (first[i] != '\0' && second[i] != '\0') {
        if (first[i] < second[i]) return -1;
        if (first[i] > second[i]) return 1;
        ++i;
    }
    if (first[i] == '\0' && second[i] == '\0') return 0;
    if (first[i] == '\0') return -1;
    return 1;
}

int main() {
    cout << "********************************************" << endl;
    cout << "        DOCUMENT TEXT ANALYZER" << endl;
    cout << "********************************************" << endl;

    char paragraph[1000];
    cout << "Enter Paragraph" << endl;
    cin.getline(paragraph, sizeof(paragraph));
    if (paragraph[0] == '\0') {
        cout << "Empty input is not allowed." << endl;
        return 1;
    }

    int characters = manualLength(paragraph);
    int words = 0, alphabets = 0, digits = 0, specialCharacters = 0;
    bool insideWord = false;
    for (int i = 0; paragraph[i] != '\0'; ++i) {
        unsigned char ch = static_cast<unsigned char>(paragraph[i]);
        if (isalpha(ch)) ++alphabets;
        else if (isdigit(ch)) ++digits;
        else if (paragraph[i] != ' ' && paragraph[i] != '\t') ++specialCharacters;

        if (!isspace(ch) && !insideWord) {
            ++words;
            insideWord = true;
        } else if (isspace(ch)) {
            insideWord = false;
        }
    }

    cout << "--------------------------------------------" << endl;
    cout << "Text Analysis" << endl;
    cout << "Characters : " << characters << endl;
    cout << "Words : " << words << endl;
    cout << "Alphabets : " << alphabets << endl;
    cout << "Digits : " << digits << endl;
    cout << "Special Characters : " << specialCharacters << endl;

    char firstWord[1000] = {0}, lastWord[1000] = {0};
    int i = 0;
    while (paragraph[i] != '\0' && !isspace(static_cast<unsigned char>(paragraph[i]))) {
        firstWord[i] = paragraph[i];
        ++i;
    }
    firstWord[i] = '\0';

    int end = manualLength(paragraph) - 1;
    while (end >= 0 && isspace(static_cast<unsigned char>(paragraph[end]))) --end;
    int begin = end;
    while (begin >= 0 && !isspace(static_cast<unsigned char>(paragraph[begin]))) --begin;
    int lastLength = end - begin;
    for (int j = 0; j < lastLength; ++j) lastWord[j] = paragraph[begin + 1 + j];
    lastWord[lastLength] = '\0';

    while (lastLength > 0 &&
           ispunct(static_cast<unsigned char>(lastWord[lastLength - 1]))) {
        lastWord[--lastLength] = '\0';
    }

    cout << "--------------------------------------------" << endl;
    cout << "String Extraction" << endl;
    cout << "First Word : " << firstWord << endl;
    cout << "Last Word : " << lastWord << endl;
    cout << "First Character : " << paragraph[0] << endl;
    cout << "Last Character : " << paragraph[characters - 1] << endl;

    char additionalSentence[1000];
    cout << "Enter Additional Sentence" << endl;
    cin.getline(additionalSentence, sizeof(additionalSentence));
    if (manualLength(paragraph) + manualLength(additionalSentence) + 2 <
        static_cast<int>(sizeof(paragraph))) {
        strcat(paragraph, "\n");
        strcat(paragraph, additionalSentence);
    } else {
        cout << "Additional sentence is too long." << endl;
    }

    cout << "Updated Paragraph" << endl << paragraph << endl;

    char keyword[500];
    cout << "Enter Search Word : ";
    cin.getline(keyword, sizeof(keyword));
    char *occurrence = strstr(paragraph, keyword);
    if (keyword[0] != '\0' && occurrence != nullptr) {
        cout << "Keyword Found" << endl;
        cout << "First Occurrence Position : " << occurrence - paragraph << endl;
    } else {
        cout << "Keyword Not Found" << endl;
    }

    char upperText[1000], lowerText[1000], reversedText[1000];
    strcpy(upperText, paragraph);
    strcpy(lowerText, paragraph);
    for (int j = 0; upperText[j] != '\0'; ++j) upperText[j] = toupper(static_cast<unsigned char>(upperText[j]));
    for (int j = 0; lowerText[j] != '\0'; ++j) lowerText[j] = tolower(static_cast<unsigned char>(lowerText[j]));

    int paragraphLength = strlen(paragraph);
    for (int j = 0; j < paragraphLength; ++j) reversedText[j] = paragraph[paragraphLength - 1 - j];
    reversedText[paragraphLength] = '\0';

    cout << "Uppercase" << endl << upperText << endl;
    cout << "Lowercase" << endl << lowerText << endl;
    cout << "Reverse" << endl << reversedText << endl;

    char palindromeWord[500];
    cout << "Enter Word : ";
    cin.getline(palindromeWord, sizeof(palindromeWord));
    int palindromeLength = strlen(palindromeWord);
    bool palindrome = true;
    for (int j = 0; j < palindromeLength / 2; ++j) {
        if (palindromeWord[j] != palindromeWord[palindromeLength - 1 - j]) {
            palindrome = false;
            break;
        }
    }
    cout << "Result : " << (palindrome ? "Palindrome" : "Not Palindrome") << endl;

    char str1[] = "Hello";
    char str2[] = "Hello";
    char copiedString[100];
    manualCopy(copiedString, str1);

    cout << "Manual Length : " << manualLength(str1) << endl;
    cout << "Standard Length : " << strlen(str1) << endl;
    cout << "Manual Copy : " << copiedString << endl;
    strcpy(copiedString, str1);
    cout << "strcpy() Copy : " << copiedString << endl;
    cout << "Manual Comparison : " << manualCompare(str1, str2) << endl;
    cout << "strcmp() Comparison : " << strcmp(str1, str2) << endl;

    char combined[100] = "Hello";
    strcat(combined, "Hello");
    cout << "strcat() Concatenation : " << combined << endl;
    cout << "strstr() Search : "
         << (strstr(paragraph, keyword) != nullptr ? "Found" : "Not Found") << endl;
    cout << "toupper() : " << static_cast<char>(toupper('a')) << endl;
    cout << "tolower() : " << static_cast<char>(tolower('A')) << endl;
    return 0;
}
