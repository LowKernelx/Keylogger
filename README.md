# Windows Keylogger (Educational Only)

⚠️ This project is for educational purposes only. Do NOT use it without permission, as it may violate laws.

## Brief Description

A simple C++ program that logs keyboard input on Windows into a file called `keylog.txt`. It runs until the ESC key is pressed.

## How It Works

- Checks all keys for presses.
- Logs letters and numbers directly.
- Logs special keys like `[ENTER]`, `[F1]`, etc.

## Build Instructions

Build With g++ on Windows:

```bash
g++ keylogger.cpp -o keylogger.exe
