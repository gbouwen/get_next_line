# get_next_line
The aim of this project is to code a function that returns a line ending with a newline, reading from a file descriptor.  
Calling your function get_next_line in a loop will allow you to read the text available on a file descriptor one line at a time,  
until end of file (EOF).

### Requirements
- Allowed external functions: *read, malloc, free*.
- The program must compile with `-D BUFFER_SIZE=XX`, which will be used as the buffer size for the read calls in the function.
