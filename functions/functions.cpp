/*
There are some great reasons to use functions in your code:

    A single line can make all that code fire off instead of a whole bunch of lines.
    You can build DRY (Don’t Repeat Yourself) code, reusing the code you already wrote.
    Functions help make your code flexible and modular, meaning you can group your code more easily by task.

Declaration: 
        this includes the function’s name, what the return type is,
        and any parameters (if the function will accept input values, known as arguments).
    Ex.:
        return_type function_name( any, parameters, you, have ){
            // Code block here
 
            return output_if_there_is_any;          The return statement is the last line of  
        }                                           code that a function will execute.

        void make_sandwich() {                  Void — The Point of No Return
                                                making it ideally suited for situations 
            std::cout << "bread\n";             where you just want to print stuff to the terminal.
            std::cout << "egg\n";
            std::cout << "cheese\n";
            std::cout << "avocado\n";
            std::cout << "bread\n";
        }

Parameters (sometimes called formal parameters) are variables used in a function’s definition. 
They act as placeholders for the input values you’ll use during your function call.
Then, when you’re ready to use your function, the value you pass to the function 
is called an argument (also known as an actual parameter). 

inline:
    Using inline advises the compiler to insert the function’s body where the function call is, 
    which sometimes helps with execution speed (and sometimes hinders execution speed). 
    If you do use it, we recommend testing how it affects the execution speed of your program. 
    The bottom line is inline is something you’ll probably encounter, but may never use.
    Ex.:
        inline 
        void eat() {
            std::cout << "nom nom\n";
        }

Functions overloading:
    In a process known as function overloading, you can give multiple C++ functions the same name. 
    Just make sure at least one of these conditions is true:
        Each has different type parameters.
        Each has a different number of parameters.
    
*/
