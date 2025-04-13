# Problem 1: Array Operations

## Problem Statement
Design, develop, and implement a menu-driven program in C to perform the following array operations:

1. **Create an Array**: Create an array of `N` integer elements.
2. **Display Array**: Display the elements of the array with a suitable heading.
3. **Insert an Element**: Insert an element (`ELEM`) at a given valid position (`POS`).
4. **Delete an Element**: Delete an element at a given valid position (`POS`).
5. **Exit**: Exit the program.

## Instructions
- The program should be menu-driven, allowing the user to select the desired operation.
- Ensure proper input validation for array size, positions, and other inputs.
- Display appropriate messages for successful operations or errors.

## Example Menu
```
1. Create Array
2. Display Array
3. Insert Element
4. Delete Element
5. Exit
Enter your choice: 
```

## Expected Output
The program should display the array elements after each operation and handle invalid inputs gracefully.

## Implementation Notes
- Use dynamic memory allocation if required.
- Ensure the program handles edge cases, such as inserting or deleting at invalid positions.
- Provide clear and concise prompts and messages for the user.

## How to Run
1. Compile the program using a C compiler (e.g., `gcc`).
2. Run the executable and follow the menu prompts.

## Sample Code Structure
```c
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void createArray();
void displayArray();
void insertElement();
void deleteElement();

int main() {
    // Menu-driven program logic
    return 0;
}
```

## Author
- **Azim**
- **Date**: Day 5
- **Course**: DSINC
- **Problem Set**: Array Operations