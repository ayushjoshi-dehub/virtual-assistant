#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Define the Book class
class Book {
    string bookName;
    string bookID;
    int numOfCopies;
    string purchaseDate;

public:
    // Function to input book details
    void input() {
        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, bookName);
        cout << "Enter Book ID: ";
        getline(cin, bookID);
        cout << "Enter Number of Copies: ";
        cin >> numOfCopies;
        cin.ignore(); // Clear the buffer
        cout << "Enter Purchase Date (dd-mm-yyyy): ";
        getline(cin, purchaseDate);
    }

    // Function to display book details
    void display() const {
        cout << left << setw(20) << "Book Name: " << bookName << endl;
        cout << left << setw(20) << "Book ID: " << bookID << endl;
        cout << left << setw(20) << "Number of Copies: " << numOfCopies << endl;
        cout << left << setw(20) << "Purchase Date: " << purchaseDate << endl;
    }

    // Function to get the book ID
    string getBookID() const {
        return bookID;
    }

    // Function to write book details to file
    void writeToFile(ofstream &outFile) {
        outFile << bookName << endl;
        outFile << bookID << endl;
        outFile << numOfCopies << endl;
        outFile << purchaseDate << endl;
    }

    // Function to read book details from file
    void readFromFile(ifstream &inFile) {
        getline(inFile, bookName);
        getline(inFile, bookID);
        inFile >> numOfCopies;
        inFile.ignore(); // Clear the buffer
        getline(inFile, purchaseDate);
    }
};

// Function to add a new book to the library
void addBook() {
    Book book;
    book.input();

    ofstream outFile("library.txt", ios::app); // Append mode to add new records
    if (!outFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    book.writeToFile(outFile);
    outFile.close();
    cout << "Book added successfully!" << endl;
}

// Function to search and display book details based on book ID
void searchBook() {
    string searchID;
    cout << "Enter the Book ID to search: ";
    cin.ignore();
    getline(cin, searchID);

    ifstream inFile("library.txt");
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    Book book;
    bool found = false;
    while (!inFile.eof()) {
        book.readFromFile(inFile);
        if (book.getBookID() == searchID) {
            cout << "\nBook Found:\n";
            book.display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book with ID " << searchID << " not found!" << endl;
    }

    inFile.close();
}

// Main function to manage the Library Management System
int main() {
    int choice;
    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Search Book\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addBook();
            break;
        case 2:
            searchBook();
            break;
        case 3:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
