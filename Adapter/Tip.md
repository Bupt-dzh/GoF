### using initializer list to pass parameter to parent class
example：
`
Child::Child(type parameter):Parent(parameter){}
`
### using inline function may cause error LINK2019 
Similarly, a project that uses function inlining yet defines the functions in a .cpp file 
rather than in the header file will also get LNK2019.

The header file is included everywhere deemed appropriate, 
but the functions are only inlined when the .cpp file passes through the compiler; 
therefore, the linker sees the functions as unresolved externals when used in other modules.
