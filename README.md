From this module we will start to use Orthodox Canonical Form in c++

What is the Orthodox Canonical Form?
	In c++ the Orthodox Canonical Form refers to a best practice for ensuring that a class properly manages resources, especially when dealing with dynamic memory, pointers, or other resources that require manual management.

Minimal component of the Orthodox Canonical Form:
	• Default constructor
		ClassName();
		The default countructor is responsible for initialize an object. It can have a initial paramenter to initialize the object with specific values.
	• Copy constructor
		ClassName(const ClassName& other);
		Defines how to create a new object as copy of an existent object. It requires to make a deep copy of resources (what we will explore later)
	• Copy assignment operator
		ClassName& operator=(const ClassName& other);
		Defines how to assign an existing object to another existing object. This should handle self-assignment, perform a deep copy and return a reference to the current object (ex. return (*this)).
	• Destructor
		~ClassName();
		Cleans up resources when an object is deleted or goes out of the scope. It is essential for freeing dynamic memory, closing files, or releasing any othe acquired resources.
