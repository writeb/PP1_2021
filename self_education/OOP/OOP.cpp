/*
    Object-Oriented Programming language - is a programming language, which allows developers to create their own 
    custom data types.
    
    Classes and Objects(Instance) - (Классы и Экземпляры):
        Components of a class are called class members.
        you can access class members using the dot operator (object.class_member).

        Attributes, also known as member data, consist of information about an instance of the class.
        Methods, also known as member functions, are functions that you can use with an instance of the class. 
        Ex.:
            class City {
                // attribute
                int population;
 
            // we'll explain 'public' later
            public:
                // method
                void add_resident() {
                    population++;
                }
            };
        
        By default, everything in a class is private
        If you try to access a private class member, you’ll get an error
        But sometimes you need access to class members, and for that, there is public
        
*/