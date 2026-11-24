# Practical 11.3 — Student File-Management Observations

## Valid test

Two records were entered:

```text
24CE001, Amit Patel, CE, 1, 86.40, A+
24CE002, Riya Shah, IT, 1, 82.60, A
```

Actual observations:

```text
StudentRecords.txt Created Successfully
Student Records Stored Successfully
Reading StudentRecords.txt
Enrollment: 24CE001
Name: Amit Patel
Branch: CE
Semester: 1
Percentage: 86.40
Grade: A+

Enrollment: 24CE002
Name: Riya Shah
Branch: IT
Semester: 1
Percentage: 82.60
Grade: A

End of File Reached Successfully
Creating BackupStudentRecords.txt
Backup Completed Successfully
Program Executed Successfully
```

## Invalid-field observations

| Test | Result |
|---|---|
| Student count `0` | Invalid number of students |
| Student count `-2` | Invalid number of students |
| Student count `abc` | Invalid number of students |
| Semester `9` | Invalid semester |
| Percentage `101` | Invalid percentage |

## File-error observations

- A directory at `StudentRecords.txt` prevents file creation.
- A directory at `BackupStudentRecords.txt` prevents backup creation.
- Both cases returned an error and did not print a false success confirmation.

## Backup integrity

The tested source and backup files had matching SHA-256 hashes.
