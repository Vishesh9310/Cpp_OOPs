/*
The move constructor is a recent addition to the family of constructors in C++.
It is like a copy constructor that constructs the object from the already existing objects, but instead of copying the object in the new memory,
it makes use of move semantics to transfer the ownership of the already created object to the new object without creating extra copies.
It can be seen as stealing the resources from other objects.

className (className&& obj) {
     // body of the constructor
}

*/