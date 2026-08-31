# 🐍 Console Snake Game in C

A lightweight, real-time **Snake Game written in C** for the Windows console. It features smooth rendering, non-blocking keyboard input, collision detection, score tracking, and dynamic difficulty.

## 🎮 Features

* ⚡ Real-time non-blocking keyboard input
* 🖥️ Smooth, flicker-reduced console rendering
* 👻 Hidden console cursor
* 📈 Dynamic speed increases with score
* 💥 Wall and self-collision detection
* 🏆 Score tracking
* 🔄 Replay option after Game Over

## 🎮 Controls

| Key | Action               |
| :-: | -------------------- |
| `W` | Move Up              |
| `S` | Move Down            |
| `A` | Move Left            |
| `D` | Move Right           |
| `Q` | Quit after Game Over |

## 🧩 Game Elements

| Symbol | Element       |
| :----: | ------------- |
|   `#`  | Boundary Wall |
|   `O`  | Snake Head    |
|   `o`  | Snake Body    |
|   `@`  | Food          |

## 💻 Technologies Used

* **C**
* **Windows Console API**
* **GCC / MinGW**
* `windows.h`
* `conio.h`

## ⚙️ Requirements

This game is designed for **Windows** because it uses the Windows Console API and `<conio.h>`.

You need:

* Windows OS
* GCC / MinGW
* A configured C compiler

## 🔧 Compilation

Open **Command Prompt** or the **VS Code Terminal** in the project directory.

### Compile

```bash
gcc snake.c -o snake.exe
```

### Run

```bash
snake.exe
```

Or in VS Code:

```bash
.\snake.exe
```

## 📸 Gameplay

Add your gameplay screenshot here:

```markdown
![Snake Game](screenshot.png)
```

## 📁 Project Structure

```text
snake-game/
│
├── snake.c
├── screenshot.png
└── README.md
```

## 🎯 Project Objective

This project was created to practice fundamental **C programming and game development concepts**, including:

* Arrays
* Functions
* Loops
* Random number generation
* Keyboard input handling
* Collision detection
* Game loops
* Windows Console API

## 🚀 How to Play

1. Compile the program using GCC.
2. Run `snake.exe`.
3. Control the snake using **W, A, S, D**.
4. Collect `@` to increase your score.
5. Avoid the walls and your own body.
6. After Game Over, choose whether to replay or quit.

## 📌 Limitations

* Windows only
* Console-based game
* Requires GCC/MinGW or a compatible C compiler

## 👨‍💻 Author

**Nehal**

Built with **C** and the **Windows Console API**.

---

⭐ If you found this project useful, consider giving the repository a star!
