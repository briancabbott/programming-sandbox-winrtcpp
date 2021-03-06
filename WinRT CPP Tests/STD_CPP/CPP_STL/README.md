


Concepts library
<concepts>				(since C++20)	Fundamental library concepts


Utilities library
<cstdlib>				General purpose utilities: program control, dynamic memory allocation, random numbers, sort and search
<csignal>				Functions and macro constants for signal management
<csetjmp>				Macro (and function) that saves (and jumps) to an execution context
<cstdarg>				Handling of variable length argument lists
<typeinfo>				Runtime type information utilities
<cstddef>				standard macros and typedefs
<bitset>				std::bitset class template
<functional>			Function objects, Function invocations, Bind operations and Reference wrappers
<utility>				Various utility components
<ctime>					C-style time/date utilites

<typeindex>				(since C++11)	std::type_index
<type_traits>			(since C++11)	Compile-time type information
<chrono>				(since C++11)	C++ time utilites
<initializer_list>		(since C++11)	std::initializer_list class template
<tuple>					(since C++11)	std::tuple class template

<any>					(since C++17)	std::any class
<optional>				(since C++17)	std::optional class template
<variant>				(since C++17)	std::variant class template

<compare>				(since C++20)	Three-way comparison operator support
<version>				(since C++20)	supplies implementation-dependent library information


Dynamic memory management
<new>					Low-level memory management utilities
<memory>				Higher level memory management utilities

<scoped_allocator>		(since C++11)	Nested allocator class

<memory_resource>		(since C++17)	Polymorphic allocators and memory resources


Numeric limits
<climits>				limits of integral types
<cfloat>				limits of float types
<cstdint>				(since C++11)	fixed-size types and limits of other types
<cinttypes>				(since C++11)	formatting macros , intmax_t and uintmax_t math and conversions
<limits>				standardized way to query properties of arithmetic types


Error handling
<exception>	Exception handling utilities
<stdexcept>	Standard exception objects
<cassert>	Conditionally compiled macro that compares its argument to zero
<system_error> (since C++11)	defines std::error_code, a platform-dependent error code
<cerrno>	Macro containing the last error number
<contract> (since C++20)	Contract violation information


Strings library
<cctype>	Functions to determine the type contained in character data
<cwctype>	Functions to determine the type contained in wide character data
<cstring>	various narrow character string handling functions
<cwchar>	various wide and multibyte string handling functions
<cuchar> (since C++11)	C-style Unicode character conversion functions
<string>	std::basic_string class template
<string_view> (since C++17)	std::basic_string_view class template
<charconv> (since C++17)	std::to_chars and std::from_chars


Containers library
<array> (since C++11)	std::array container
<vector>	std::vector container
<deque>	std::deque container
<list>	std::list container
<forward_list> (since C++11)	std::forward_list container
<set>	std::set and std::multiset associative containers
<map>	std::map and std::multimap associative containers
<unordered_set> (since C++11)	std::unordered_set and std::unordered_multiset unordered associative containers
<unordered_map> (since C++11)	std::unordered_map and std::unordered_multimap unordered associative containers
<stack>	std::stack container adaptor
<queue>	std::queue and std::priority_queue container adaptors
<span> (since C++20)	std::span view


Algorithms library
<algorithm>	Algorithms that operate on containers
<execution> (C++17)	Predefined execution policies for parallel versions of the algorithms


Iterators library
<iterator>	Container iterators


Numerics library
<cmath>	Common mathematics functions
<complex>	Complex number type
<valarray>	Class for representing and manipulating arrays of values
<random> (since C++11)	Random number generators and distributions
<numeric>	Numeric operations on values in containers
<ratio> (since C++11)	Compile-time rational arithmetic
<cfenv> (since C++11)	Floating-point environment access functions
<bit> (since C++20)	Bit manipulation functions


Input/output library
<iosfwd>	forward declarations of all classes in the input/output library
<ios>	std::ios_base class, std::basic_ios class template and several typedefs
<istream>	std::basic_istream class template and several typedefs
<ostream>	std::basic_ostream, std::basic_iostream class templates and several typedefs
<iostream>	several standard stream objects
<fstream>	std::basic_fstream, std::basic_ifstream, std::basic_ofstream class templates and several typedefs
<sstream>	std::basic_stringstream, std::basic_istringstream, std::basic_ostringstream class templates and several typedefs
<syncstream> (since C++20)	std::basic_osyncstream, std::basic_syncbuf, and typedefs
<strstream>(deprecated)	std::strstream, std::istrstream, std::ostrstream
<iomanip>	Helper functions to control the format of input and output
<streambuf>	std::basic_streambuf class template
<cstdio>	C-style input-output functions


Localization library
<locale>	Localization utilities
<clocale>	C localization utilities
<codecvt> (since C++11) (deprecated in C++17)	Unicode conversion facilities


Regular Expressions library
<regex> (since C++11)	Classes, algorithms and iterators to support regular expression processing


Atomic Operations library
<atomic> (since C++11)	Atomic operations library


Thread support library
<thread> (since C++11)	std::thread class and supporting functions
<mutex> (since C++11)	mutual exclusion primitives
<shared_mutex> (since C++14)	shared mutual exclusion primitives
<future> (since C++11)	primitives for asynchronous computations
<condition_variable> (since C++11)	thread waiting conditions


Filesystem library
<filesystem> (since C++17)	std::path class and supporting functions