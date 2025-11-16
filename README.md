# 🏦 Bank Management System (Bank Project2)

A robust **command-line banking application** built in **C++**, designed to manage client accounts, user access, financial transactions, and currency exchange operations. The system uses **file-based storage** to persist all client, user, and currency-related data.

---

## ✨ Features

The system is organized into modular screens, each handling a specific banking process.

### 👤 Client Management

* **Show Client List** – Display all client information including account number, name, contact info, and balance.
* **Add New Client** – Register a new bank client.
* **Delete Client** – Remove an existing client.
* **Update Client Info** – Edit client personal details.
* **Find Client** – Search for a client by account number.

### 💰 Transactions

* **Deposit** – Add money to a client's account.
* **Withdraw** – Deduct money from a client's balance.
* **Total Balances** – Show the total sum of all balances.
* **Transfer** – Transfer funds between clients.
* **Transfer Log** – View all recorded transfer operations.

### 👨‍💼 User Management

* **Login / Logout System** for employees.
* **Login Register** – Tracks successful & failed logins.
* **Manage Users Menu** including:

  * List Users
  * Add New User
  * Delete User
  * Update User
  * Find User

### 💱 Currency Exchange

* **Currency Exchange Main Screen** with:

  * List of all currencies
  * Update currency exchange rates
  * Currency conversion calculator

---

## 💻 Project Structure

This project follows a clean **OOP architecture**, utilizing separate classes for models, utilities, and screen logic.

### **Components Overview**

| Component Type           | Files / Folders                                                                            | Description                               |
| ------------------------ | ------------------------------------------------------------------------------------------ | ----------------------------------------- |
| **Executable / Project** | `Bank Project2.cpp`, `.sln`, `.vcxproj`                                                    | Entry point + Visual Studio project files |
| **Core Entities**        | `clsBankClient.h`, `clsCurrency.h`, `clsDate.h`, `clsPerson.h`, `clsString.h`, `clsUser.h` | Data model classes                        |
| **Business Logic**       | `clsInputValidate.h`, `clsUtil.h`                                                          | Validation & utility classes              |
| **Screen Classes**       | `clsMainScreen.h`, `clsLoginScreen.h`, `clsDepositScreen.h`, etc.                          | UI screens and menu logic                 |
| **Data Persistence**     | `Clients.txt`, `Users.txt`, `Currencies.txt`, `TransfersLog.txt`, `LoginRegister.txt`      | File-based storage                        |

---

## 🛠️ Implementation Details

* **Language:** C++
* **Architecture:** Modular OOP
* **Persistence:** `.txt` files
* **Interface:** CLI (Command-Line Interface)
* **Design:** Each class placed in its own header for clean structure

---

## ▶️ Getting Started

### **Prerequisites**

* A C++ compiler (GCC, Clang, or MSVC)
* Visual Studio (recommended, since project files are included)

### **Compilation & Execution**

1. **Clone the repository** (if applicable)
2. **Open the solution**: `Bank Project2.sln` in Visual Studio
3. **Build the project**: `Ctrl + Shift + B`
4. **Run the project**: `F5` or `Ctrl + F5`

The program will start with the **Login Screen**, where valid employee credentials are required.

---

## 📌 Notes

* All data is saved automatically after any update.
* Text files act as a simple database.
* Designed for educational and training purposes.

---

## 🖼️ Screenshots

### Login Screen
![Login Screen](Images/login_screen.PNG)

### Main Menu
![Main Menu](Images/main_menu.PNG)

### Client List
![Client List](Images/clients_list.PNG)

### Transactions Menu
![Transactions Menu](Images/transactions_menu.PNG)

### Manage Users Menu
![Manage Users Menu](Images/manage_users_menu.PNG)

---

## 📄 License

This project is free to use, modify, and extend.
