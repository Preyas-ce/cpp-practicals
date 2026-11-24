#include <cstdio>
#include <cstring>
#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "********************************************\n";
    cout << "FILE ORGANIZATION & FILE OPERATIONS UTILITY\n";
    cout << "********************************************\n";

    const char *sourceFilename = "Document.txt";
    const char *backupFilename = "BackupDocument.txt";

    FILE *outFile = fopen(sourceFilename, "w");
    if (outFile == nullptr) {
        cout << "Error: Unable to create " << sourceFilename << "\n";
        return 1;
    }
    cout << sourceFilename << " Created Successfully\n";

    cout << "Enter number of lines: ";
    int lineCount = 0;
    if (!(cin >> lineCount) || lineCount < 1) {
        cout << "Invalid number of lines.\n";
        fclose(outFile);
        return 1;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter File Contents\n";
    char line[1024];
    for (int i = 0; i < lineCount; ++i) {
        cin.getline(line, sizeof(line));
        if (fputs(line, outFile) == EOF || fputc('\n', outFile) == EOF) {
            cout << "Error: File write failed.\n";
            fclose(outFile);
            return 1;
        }
    }
    fclose(outFile);
    cout << "Data Written Successfully\n";

    FILE *inFile = fopen(sourceFilename, "r");
    if (inFile == nullptr) {
        cout << "Error: Unable to open " << sourceFilename << "\n";
        return 1;
    }
    cout << "Reading " << sourceFilename << "\n";
    while (fgets(line, sizeof(line), inFile) != nullptr) {
        cout << line;
    }
    if (feof(inFile)) {
        cout << "End of File Reached Successfully\n";
    }
    if (ferror(inFile)) {
        cout << "Error while reading " << sourceFilename << "\n";
        fclose(inFile);
        return 1;
    }
    fclose(inFile);

    FILE *source = fopen(sourceFilename, "rb");
    FILE *backup = fopen(backupFilename, "wb");
    if (source == nullptr) {
        cout << "Error: Unable to open " << sourceFilename << " for backup.\n";
        return 1;
    }
    if (backup == nullptr) {
        cout << "Error: Unable to create " << backupFilename << "\n";
        fclose(source);
        return 1;
    }
    int ch = 0;
    while ((ch = fgetc(source)) != EOF) {
        if (fputc(ch, backup) == EOF) {
            cout << "Error: Backup copy failed.\n";
            fclose(source);
            fclose(backup);
            return 1;
        }
    }
    if (ferror(source) || ferror(backup)) {
        cout << "Error: Backup copy failed.\n";
        fclose(source);
        fclose(backup);
        return 1;
    }
    fclose(source);
    fclose(backup);
    cout << "Backup File Created Successfully\n";

    FILE *randomFile = fopen(sourceFilename, "r");
    if (randomFile == nullptr) {
        cout << "Error: Unable to open " << sourceFilename << " for random access.\n";
        return 1;
    }
    if (fseek(randomFile, 0, SEEK_END) != 0) {
        cout << "Error: Unable to determine file length.\n";
        fclose(randomFile);
        return 1;
    }
    long fileLength = ftell(randomFile);
    cout << "Current File Position: " << fileLength << "\n";

    cout << "Enter valid random position (0-" << fileLength << "): ";
    long position = 0;
    if (!(cin >> position) || position < 0 || position > fileLength) {
        cout << "Invalid random access position.\n";
        fclose(randomFile);
        return 1;
    }
    if (fseek(randomFile, position, SEEK_SET) != 0) {
        cout << "Error: Unable to move file pointer.\n";
        fclose(randomFile);
        return 1;
    }
    cout << "Moving File Pointer...\n";
    if (position == fileLength) {
        cout << "Position points to end of file.\n";
    } else if (fgets(line, sizeof(line), randomFile) != nullptr) {
        cout << "Displaying Contents after Repositioning\n";
        cout << line;
    } else {
        cout << "Unable to read from the selected position.\n";
    }

    rewind(randomFile);
    cout << "Resetting File Pointer\n";
    while (fgets(line, sizeof(line), randomFile) != nullptr) {
        cout << line;
    }
    fclose(randomFile);

    cout << "\nProgram Executed Successfully\n";
    return 0;
}
