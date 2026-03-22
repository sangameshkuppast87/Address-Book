📘 Address Book Management System (Enhanced)

A robust, menu-driven C application designed to efficiently manage and organize contact information.
This project showcases modular programming, structured design, and persistent data handling using file I/O, making it suitable for academic projects and resume portfolios.

🧠 Tech Stack
Category	Details
Language	C Programming
Platform	GCC / Linux Terminal
Storage	CSV File Handling
Status	✅ Fully Functional & Tested

🚀 Key Features
🆕 Core Functionalities
✅ Create Contact
Add new contacts with strict validation for unique phone numbers and email IDs.
🔍 Advanced Search
Search contacts by:
Name
Phone number
Email
Supports case-insensitive and partial matching.
✏ Edit Contact
Update existing contact details with validation checks.
❌ Delete Contact
Safely remove contact entries from the system.
📋 List All Contacts
Display all saved contacts in a structured tabular format.
💾 Data Management
💾 Persistent Storage
Contacts are automatically:
Loaded from contacts.csv at startup
Saved back to file after modifications
🧩 Input Validation
Valid email format checking
Mobile number validation (length & digits only)
🛠 How to Compile and Run
1️⃣ Open Terminal

Navigate to your project directory:

cd address-book
2️⃣ Compile the Program
gcc *.c -o addressbook
3️⃣ Run the Executable
./addressbook

📂 Project Structure
address-book/
main.c               # Main menu & control flow
contact.c/h         # Contact operations (CRUD)
file.c/h            # File handling (CSV read/write)
populate.c/h        # Sample data for testing
contacts.csv        # Persistent storage
README.md           # Documentation

🧱 Sample Menu Interface
=============================
 Address Book Management
=============================
1. Create Contact
2. Search Contact
3. Edit Contact
4. Delete Contact
5. List All Contacts
6. Save Contacts
7. Exit
-----------------------------
Enter your choice: _

🧩 Concepts Demonstrated
✔ Modular Programming in C
✔ File Handling (fopen, fprintf, fscanf)
✔ Structures for Data Management
✔ String Manipulation & Validation
✔ Menu-driven UI Design
✔ Persistent Storage using CSV
🔮 Future Enhancements
📁 Contact Categories (Friends, Family, Work)
♻ Soft Delete with Restore (Recycle Bin)
📊 Sorting & Filtering Options
💾 Backup & Restore System
🌐 JSON / Binary File Support
🖥 Graphical User Interface (GTK / Qt)
🔐 User Authentication (Login System)

📌 Use Cases
Academic Mini / Major Projects
Learning File Handling in C
Demonstrating Modular Design
Resume / Portfolio Project

👨‍💻 Author
Sangamesh Kuppast
📍 Bagalkote, Karnataka, India
If you found this project helpful:
