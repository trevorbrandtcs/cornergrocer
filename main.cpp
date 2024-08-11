#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <limits>

using namespace std;

//This method will display the menu options to the user.

void print_menu() {
  cout << "-----------------------------\n";
  cout << "| 1. Search for an item     |\n";
  cout << "| 2. Print frequency of all |\n";
  cout << "| 3. Print histogram        |\n";
  cout << "| 4. Exit                   |\n";
  cout << "-----------------------------\n";
}

//This method will prompt the user to enter an item and display its frequency.

void search_item(map<string, int> &counter) {
  string item;
  cout << "Enter the item you wish to search for: ";
  cin >> item;
  cout << "The frequency of " << item << " is " << counter[item] << endl;
}

//This method will print the frequency of all items in the counter map.

void print_frequency(map<string, int> &counter) {
  for (auto &item : counter) {
    cout << item.first << ": " << item.second << endl;
  }
}

//This method will print a histogram representing the frequency of each item in the counter map.

void print_histogram(map<string, int> &counter) {
  for (auto &item : counter) {
    cout << item.first << ": ";
    for (int i = 0; i < item.second; ++i) {
      cout << "*";
    }
    cout << endl;
  }
}

//This method will save the frequency data to a file named frequency.dat.

void save_data(map<string, int> &counter) {
  ofstream file("frequency.dat");
  for (auto &item : counter) {
    file << item.first << " " << item.second << endl;
  }
  file.close();
}

//This is the main function that initializes the program, reads items from a file, and provides a menu-driven interface for user interaction.

int main() {
    map<string, int> counter;
    string item;
    ifstream file("CS210_Project_Three_Input_File.txt");

    if (!file) {
        cerr << "Unable to open file";
        exit(1);
    }

    while (file >> item) {
        ++counter[item];
    }

    while (true) {
        print_menu();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        // Input validation
        if (cin.fail()) {
            cin.clear(); // clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the rest of the line
            cout << "Invalid input. Please enter a number." << endl;
            continue; // skip the rest of the loop
        }

        switch (choice) {
            case 1:
                search_item(counter);
                break;
            case 2:
                print_frequency(counter);
                break;
            case 3:
                print_histogram(counter);
                break;
            case 4:
                save_data(counter);
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    }

    return 0;
}
