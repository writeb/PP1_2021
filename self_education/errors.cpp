/*
In C++, there are many different ways of classifying errors, 
but they can be boiled down to four categories:

    Compile-time errors: Errors found by the compiler.
    Link-time errors: Errors found by the linker when it is trying 
        to combine object files into an executable program.
    Run-time errors: Errors found by checks in a running program.
    Logic errors: Errors found by the programmer looking for the causes of erroneous results.

There are two types of compile-time errors:

    Syntax errors: Errors that occur when we violate the rules of C++ syntax.
        Ex.:
            Some common syntax errors are:
                Missing semicolon ;
                Missing closing parenthesis ), square bracket ], or curly brace }
    Type errors: Errors that occur when there are mismatch between the types we declared.
        Ex.:
            Some common type errors are:
                Forgetting to declare a variable
                Storing a value into the wrong type

Link-time errors:
    Some common link-time errors:
        Using a function that was never defined (more on this later)
        Writing Main() instead of main()

Run-time errors:
    Errors which happen during program execution (run-time) after successful 
    compilation are called run-time errors. Run-time errors occur when a program 
    with no compile-time errors and link-time errors asks the computer to do 
    something that the computer is unable to reliably do.
    It happens after we give the ./a.out execute command:
    Ex.:
        Some common run-time errors:
            Division by zero also known as division error. These types of error are hard to 
            find as the compiler doesn’t point to the line at which the error occurs.
            Trying to open a file that doesn’t exist

Logic errors:
    Once we have removed the compile-time errors, link-time errors,
    and run-time errors, the program runs successfully. But sometimes, 
    the program doesn’t do what we want it to do or no output is produced. 
    Some common logic errors:
        Program logic is flawed
        Some “silly” mistake in an if statement or a for/while loop
        
*/