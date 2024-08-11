# Corner Grocer
Corner Grocer Inventory Management

# Scenario

You are doing a fantastic job at Chada Tech in your new role as a junior developer, and you exceeded expectations in your last assignment for Airgead Banking. Since your team is impressed with your work, they have given you another, more complex assignment. Your task is to build an item-tracking program for the Corner Grocer, which should incorporate all of their requested functionality.

The Corner Grocer needs a program that analyzes the text records they generate throughout the day. These records list items purchased in chronological order from the time the store opens to the time it closes. They are interested in rearranging their produce section and need to know how often items are purchased so they can create the most effective layout for their customers.

# Documentation

<h2>Overview: </h2>

This program reads a list of items from a file, counts the frequency of each item, and provides a menu-driven interface for users to interact with the data. Users can search for an item’s frequency, print the frequency of all items, print a histogram of item frequencies, and save the data to a file. 

<h2>Libraries Used: </h2>

<fstrean>: File input and output operations. 

<iostream>: Standard input and output operations. 

<map>: Storing items and their frequencies. 

<string>: Handling string operations. 

<limits>: Handling input validation. 

<h2>Functions: </h2> 

void print_menu():  

Displays menu options 

 

void search_item(map<string, int> &counter) 

Prompts user to enter an item, then displays item’s frequency 

 

void print_frequency(map<string, int> &counter) 

Prints frequency of all items in the counter map 

 

void print_histogram(map<string, int> &counter) 

Prints a histogram representing the frequency of each item in the counter map 

 

void save_data(map<string, int> &counter) 

Saves data frequency to file frequency.dat 

 

<h2>Main Function </h2>

<h3>Initialization: </h3>

Declares a map<string, int> to store item frequencies 

Reads items from CS210_Project_Three_Input_File.txt 

 

<h3>Menu Loop </h3>

Continuously displays the menu and prompts the user for a choice 

Validates user input to ensure it is a number. 

Executes the corresponding function based on the user’s choice: 

Calls search_item(counter) 

Calls print_frequency(counter) 

Calls print_histogram(counter) 

Calls save_data(counter) and exits the program. 

Handles invalid choices by displaying an error message 


<h2>Input Validation </h2>

Ensures the user enters a valid number for menu choices. 

Clears the error state and ignores invalid input to prevent infinite loops. 

 

<h2>File Handling </h2>

Reads items from CS210_Project_Three_Input_File.txt 

Saves frequency data to frequency.dat 

<h2>Example Usage </h2>

Run the program. 

Choose Menu Option: 

Search for an item’s frequency. 

Print the frequency of all items. 

Print a histogram of item frequencies. 

Save the data and exit. 
