/*
Two things to note about references:
    1. Anything we do to the reference also happens to the original.
    2. Aliases cannot be changed to alias something else.
    Ex.:
    It's called = pass-by-value
        int soda = 99;
        int &pop = soda;    pop - is a reference to soda 
        pop++;
        cout<<soda<<" "<<pop;
    Ex.: 
    Its' called = pass-by-reference
        void swap_num(int &i, int &j) {
            int temp = i;
            i = j;
            j = temp;
 
        }
 
        int main() {
            int a = 100;
            int b = 200;
 
            swap_num(a, b);
            cout << "A is " << a << "\n";
            cout << "B is " << b << "\n";
        }
When & is used in a declaration, it is a reference operator.
When & is not used in a declaration, it is an address operator (This is a memory address represented in hexadecimal).


*/