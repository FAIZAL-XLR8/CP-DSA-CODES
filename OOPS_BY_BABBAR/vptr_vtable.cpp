// in copy saathi copy somewhere in btm solid principles of lld
//comes into picture in runtime polymorphism
//in short every class having virtual func or deriving a class having virtual function will have a vptr as a data member in their class added by the compiler after compilation and a vtable containing adress of their functions/methods now when an object of  a child is stored in a parent class pointer then parent's vptr -->child's vtable (poitns at child vtable) then at runtime resolves to use child's vtable if a overriden function present 


//inline function
//implemented by the keyword inline used for short functions length, increases executble file size --> removes function switch overhead by replacing evry place where function name is written with its defination to redue function sitch overhead which is created at call stack



