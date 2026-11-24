# Practical 11.2 — File-Handling Observations

## Tested operations

The test used a temporary working directory with:

- Two entered lines:
  - `Alpha line`
  - `Beta line`
- Random position `0`

Actual observations:

```text
Document.txt Created Successfully
Data Written Successfully
Reading Document.txt
Alpha line
Beta line
End of File Reached Successfully
Backup File Created Successfully
Current File Position: 23
Moving File Pointer...
Displaying Contents after Repositioning
Alpha line
Resetting File Pointer
Alpha line
Beta line
```

## API versus PDF

The PDF permits and requires C-style file-position and EOF concepts. The current source uses C file functions:

- `fopen`
- `fputs`, `fputc`
- `fgets`, `fgetc`
- `feof`, `ferror`
- `fseek`, `ftell`, `rewind`

This matches the PDF requirement and the syllabus comparison names `feof()`, `ferror()` and `ftell()`.

## Position observations

| Position | Observed behavior |
|---|---|
| Beginning (`0`) | Reads `Alpha line` |
| Middle (`6`) | Reads from the selected line/offset |
| EOF (`23`) | Reports end-of-file position |
| Negative | Rejected as invalid |
| Beyond EOF | Rejected as invalid |

## Backup verification

The tested `Document.txt` and `BackupDocument.txt` had matching SHA-256 hashes in the temporary run.
