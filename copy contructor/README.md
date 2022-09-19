A copy constructor is a member function that initializes an object using another object of the same class. A copy constructor has the following general function prototype: 


ClassName (const ClassName &old_obj); 

 Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.

Copy constructor takes a reference to an object of the same class as an argument.

          Sample(Sample &t)

          {
                     id=t.id;

          }
 The process of initializing members of an object through a copy constructor is known as copy initialization.

It is also called member-wise initialization because the copy constructor initializes one object with the existing object, both belonging to the same class on a member
 by member copy basis.
The copy constructor can be defined explicitly by the programmer. If the programmer does not define the copy constructor, the compiler does it for us.
