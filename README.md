# 🤖 Bultan – C++ Virtual Assistant

Bultan is a simple C++ console-based virtual assistant for Windows.  
It responds to user commands, provides greetings based on time, speaks using `espeak`, and can open applications or websites.

---

## 🚀 Features

- 🔐 Password Protected Access
- 🕒 Time-based Greeting (Morning / Afternoon / Evening)
- 🗣 Voice Output using eSpeak
- 📅 Display Current Date & Time
- 🌐 Open Websites (Google, YouTube, Instagram)
- 📝 Open Notepad
- 💬 Basic Chat Commands
- 🖥 Windows Console Interface

---

## 🛠 Technologies Used

- C++
- Windows API (windows.h)
- eSpeak (Text-to-Speech)
- System Commands
- Time Library (ctime)

---

## 📂 Project Structure

- main.cpp
- README.md

---

## ⚙ Requirements

- Windows OS
- C++ Compiler (MinGW / CodeBlocks / Visual Studio)
- eSpeak installed and added to system PATH

Download eSpeak:
http://espeak.sourceforge.net/

---

## ▶️ How to Compile

Using MinGW:

g++ main.cpp -o assistant.exe

---

## ▶️ How to Run

assistant.exe

---

## 🔐 Default Password

bultan

---

## 💬 Supported Commands

### Greetings
- hi
- hello
- hey

### General
- who are you
- how are you
- about

### Date & Time
- time
- date

### Applications
- open notepad
- open google
- open youtube
- open instagram

### Exit
- bye
- stop
- exit

---

## ⚠ Important Notes

- Program uses `gets()` which is unsafe and deprecated.
- Recommended to replace with `fgets()` or `std::getline()` for security.
- Works only on Windows because it uses `windows.h`.

---

## 🔒 Security Warning

The password is hardcoded inside the source file.  
For better security, consider:

- Hashing password
- Storing password in encrypted file
- Using safer input methods

---

## 📈 Future Improvements

- Replace gets() with secure input
- Add more commands
- Add speech recognition
- Add AI integration
- Improve UI
- Convert to cross-platform version

---

## 👨‍💻 Author

Bultan Virtual Assistant  
C++ Console Project
