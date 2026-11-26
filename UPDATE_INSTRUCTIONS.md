# How to Update This Repository

These are the basic steps I use when I make changes to the practical files.

## 1. Open the project

Open the `cpp-practicals` folder in VS Code. Open the terminal in the same folder.

## 2. Get the latest files

Before making changes, run:

```powershell
git pull origin main
```

## 3. Make and test the changes

Edit the required `.cpp` file or documentation file. Keep the file name connected to its practical number, for example `p6_2.cpp` for Practical 6.2.

Compile one C++ file at a time:

```powershell
g++ -std=c++17 -Wall -Wextra p6_2.cpp -o p6_2.exe
```

Run the program:

```powershell
.\p6_2.exe
```

Check the output with a few inputs, especially normal values and simple boundary values when they apply.

## 4. Check what changed

Before saving the changes to GitHub, run:

```powershell
git status
git diff
```

Make sure the changes are the ones you intended. Executable files ending in `.exe` are ignored by the repository.

## 5. Commit and push

Add only the files you changed. For example:

```powershell
git add p6_2.cpp README.md
git commit -m "Update Practical 6.2"
git push origin main
```

Change the file names and commit message for your work.

## 6. Check GitHub

Open the repository on GitHub and check that the updated files are visible.

## If a push is rejected

First get the latest changes and try again:

```powershell
git pull --rebase origin main
```

If Git reports a conflict:

1. Open the files Git lists and fix the conflicting lines.
2. Save the files.
3. Mark the fixed files and continue:

```powershell
git add <file-name>
git rebase --continue
```

If you need to cancel the rebase, run:

```powershell
git rebase --abort
```

After the rebase is complete, run:

```powershell
git push origin main
```

Do not use `git push --force` to fix a normal push rejection.
