# Wordle Game (C++)

This is a colorful, console-based Wordle-style game written in C++. I created it during my freshman year at Morehouse College to practice input validation, control flow, and user interaction.

## 🎮 Game Features
- **Fixed Answer**: The target word is preset to "SANTA"
- **Input Validation**: Requires 5-letter words only
- **Color Feedback**:
  - 🟩 **Green**: Correct letter, correct position
  - 🟨 **Yellow**: Correct letter, wrong position
  - 🟥 **Red**: Incorrect letter
- **Fun Messaging**: Adds personality with playful encouragement and end-game celebrations
- **Terminal Color Codes**: Uses ANSI escape codes for colored output on supported terminals

## 🛠️ Tech Used
- C++
- Standard I/O (iostream)
- String functions (`length()`, `find()`)
- Loops and conditionals

## 🚀 How to Run It
1. Make sure you have a C++ compiler (like g++) installed.
2. Clone or download this repo.
3. In terminal/command line, compile the file:
   ```bash
   g++ -o wordle wordle.cpp
