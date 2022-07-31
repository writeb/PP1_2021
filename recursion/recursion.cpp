/*
A function that calls itself is known as a recursive function.
Shows how recursion works by calling itself over and over again:
    void recurse()
    {
        ... .. ...
        recurse();              --> recursive call
        ... .. ...
    }

    int main()
    {
        ... .. ...
        recurse();              --> fucntion call
        ... .. ...
    }

The recursion continues until some condition is met.

To prevent infinite recursion, if...else statement (or similar approach) 
can be used where one branch makes the recursive call and the other doesn't.
*/