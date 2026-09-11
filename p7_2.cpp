#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    string paragraph;
    string additionalSentence;
    string keyword;
    string palindromeWord;

    cout << "********************************************" << endl;
    cout << "        DOCUMENT TEXT ANALYZER" << endl;
    cout << "********************************************" << endl;

    // ------------------------------------------------
    // PART A - TEXT ANALYSIS
    // ------------------------------------------------

    cout << "Enter Paragraph" << endl;
    getline(cin, paragraph);

    int characters = paragraph.length();
    int words = 0;
    int alphabets = 0;
    int digits = 0;
    int specialCharacters = 0;

    bool insideWord = false;

    for (int i = 0; i < paragraph.length(); i++)
    {
        char ch = paragraph[i];

        // Alphabet
        if (isalpha(ch))
        {
            alphabets++;
        }

        // Digit
        else if (isdigit(ch))
        {
            digits++;
        }

        // Special character
        else if (ch != ' ')
        {
            specialCharacters++;
        }

        // Word counting
        if (ch != ' ' && !insideWord)
        {
            words++;
            insideWord = true;
        }
        else if (ch == ' ')
        {
            insideWord = false;
        }
    }

    cout << "--------------------------------------------" << endl;
    cout << "Text Analysis" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Characters : " << characters << endl;
    cout << "Words : " << words << endl;
    cout << "Alphabets : " << alphabets << endl;
    cout << "Digits : " << digits << endl;
    cout << "Special Characters : " << specialCharacters << endl;


    // ------------------------------------------------
    // PART B - STRING EXTRACTION
    // ------------------------------------------------

    string firstWord;
    string lastWord;

    // Find first word
    int firstSpace = paragraph.find(' ');

    if (firstSpace != string::npos)
        firstWord = paragraph.substr(0, firstSpace);
    else
        firstWord = paragraph;

    // Find last word
    int lastSpace = paragraph.find_last_of(' ');

    if (lastSpace != string::npos)
        lastWord = paragraph.substr(lastSpace + 1);
    else
        lastWord = paragraph;

    // Remove punctuation from last word
    if (!lastWord.empty() && ispunct(lastWord.back()))
    {
        lastWord.pop_back();
    }

    cout << "--------------------------------------------" << endl;
    cout << "String Extraction" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "First Word : " << firstWord << endl;
    cout << "Last Word : " << lastWord << endl;
    cout << "First Character : " << paragraph[0] << endl;
    cout << "Last Character : " << paragraph[paragraph.length() - 1] << endl;


    // ------------------------------------------------
    // PART C - STRING CONCATENATION
    // ------------------------------------------------

    cout << "--------------------------------------------" << endl;
    cout << "Concatenation" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Enter Additional Sentence" << endl;
    getline(cin, additionalSentence);

    paragraph = paragraph + "\n" + additionalSentence;

    cout << "Updated Paragraph" << endl;
    cout << paragraph << endl;


    // ------------------------------------------------
    // PART D - PATTERN MATCHING
    // ------------------------------------------------

    cout << "--------------------------------------------" << endl;
    cout << "Pattern Matching" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Enter Search Word : ";
    getline(cin, keyword);

    size_t position = paragraph.find(keyword);

    if (position != string::npos)
    {
        cout << "Keyword Found" << endl;
        cout << "First Occurrence Position : " << position << endl;
    }
    else
    {
        cout << "Keyword Not Found" << endl;
    }


    // ------------------------------------------------
    // PART E - STRING TRANSFORMATION
    // ------------------------------------------------

    string upperText = paragraph;
    string lowerText = paragraph;
    string reversedText = paragraph;

    // Uppercase
    for (int i = 0; i < upperText.length(); i++)
    {
        upperText[i] = toupper(upperText[i]);
    }

    // Lowercase
    for (int i = 0; i < lowerText.length(); i++)
    {
        lowerText[i] = tolower(lowerText[i]);
    }

    // Reverse
    reverse(reversedText.begin(), reversedText.end());

    cout << "--------------------------------------------" << endl;
    cout << "String Transformation" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Uppercase" << endl;
    cout << upperText << endl;

    cout << "Lowercase" << endl;
    cout << lowerText << endl;

    cout << "Reverse" << endl;
    cout << reversedText << endl;


    // ------------------------------------------------
    // PALINDROME
    // ------------------------------------------------

    cout << "--------------------------------------------" << endl;
    cout << "Palindrome Check" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Enter Word : ";
    getline(cin, palindromeWord);

    string reversedWord = palindromeWord;
    reverse(reversedWord.begin(), reversedWord.end());

    if (palindromeWord == reversedWord)
    {
        cout << "Result : Palindrome" << endl;
    }
    else
    {
        cout << "Result : Not Palindrome" << endl;
    }


    // ------------------------------------------------
    // PART F - STANDARD STRING FUNCTIONS
    // ------------------------------------------------

    cout << "--------------------------------------------" << endl;
    cout << "Standard String Functions" << endl;
    cout << "--------------------------------------------" << endl;

    string str1 = "Hello";
    string str2 = "Hello";
    string copiedString;

    // strlen()
    cout << "Length : " << str1.length() << endl;

    // strcpy()
    copiedString = str1;
    cout << "String Copied Successfully" << endl;

    // strcmp()
    if (str1 == str2)
        cout << "Comparison Result : Equal" << endl;
    else
        cout << "Comparison Result : Not Equal" << endl;

    // strcat()
    string combined = str1 + str2;
    cout << "Concatenation : Successful" << endl;

    // strstr()
    if (paragraph.find(keyword) != string::npos)
        cout << "Substring Search : Found" << endl;
    else
        cout << "Substring Search : Not Found" << endl;

    // toupper()
    char ch = 'a';
    ch = toupper(ch);
    cout << "toupper() : Successful" << endl;

    // tolower()
    ch = tolower('A');
    cout << "tolower() : Successful" << endl;

    cout << "--------------------------------------------" << endl;

    return 0;
}