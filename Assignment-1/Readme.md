## How to Run

### Prerequisites
- Make sure you have a C compiler installed (e.g., GCC).
- Terminal or command prompt.

### Steps

1. **Clone the Repository:**
   - Clone this repository to your local machine using the following command:

     ```bash
     git clone https://github.com/your-username/your-repository.git
     ```

   - Alternatively, download the ZIP file and extract it to a local directory.

2. **Navigate to the Code Directory:**
   - Open a terminal or command prompt and navigate to the directory containing the C code:

     ```bash
     cd path/to/your/code/directory
     ```

3. **Compile the Code:**
   - Compile the C code using a C compiler (e.g., GCC):

     ```bash
     gcc queue_operations.c -o queue_operations
     ```

4. **Run the Executable:**
   - Execute the compiled program:

     ```bash
     ./queue_operations
     ```

5. **View Output:**
   - Follow the instructions printed by the program to observe the queue operations.
   - The program will add elements to the queue, print the queue, remove an element at a specific position, find an element, and print the updated queue.

## Example Output

```plaintext
55 added to the queue
20 added to the queue
85 added to the queue
369 added to the queue
963 added to the queue
All Queue elements: 55 20 85 369 963
Element at position 2 removed
All Queue elements: 55 20 369 963
99 not found in the queue
All Queue elements: 55 20 369 963
