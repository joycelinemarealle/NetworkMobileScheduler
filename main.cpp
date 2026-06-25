// #include <iostream>
// #include <vector>
// #include <array>
// void computeProductAndSum(std::vector<int> values)
// {
//     int sum_ = 0;
//     int product_ =1 ;
//
//     for ( int v:values)
//     {
//         sum_+=v;
//         product_*=v;
//     }
//     std::cout << "The sum is:" << sum_ << '\n';
//     std::cout << "The product is:" << product_ << '\n';
//
// }
//
// int main ()
//
// {
//     //static
//     int array[100];
//
//     //dynamic
//     new int;
//
//     //NEW operator
//     //pointer
//     int* ptr { new int}; //pointer to address of this new int
//
//     //reference
//     *ptr = 7; //assign value 7 to allocated memor
//
//     int* ptr1{ new int(5)}; //direct initialization
//     int* ptr2 {new int{6}}; //uniform initialization
//
//     //Delete operator
//     delete ptr; //free up memory of used by object for re-use. so ptr no dangles since shows deallocated memory address
//
//     //std::cout << *ptr << '\n'; //dereferencing a dangling ptr undefined behavior
//
//    // delete ptr; //trying to deallocate memory again cause undefined behavior
//
//     ptr = nullptr; //ptr is now a null ptr set deleted ptr to null for safety
//
//     //nullptr if memory not located
//     int* value {new (std::nothrow) int}; //value set to null ptr if integer fails
//     if ( !value )
//         {
//         std::cerr << "Could not allocate memory" << '\n';
//     }
//
//     //if ptr is not allocated, allocate it
//     if (!ptr)
//         {
//         ptr = new int;
//     }
//
//     //memory leaks
//     //1) outscope pointer,
//
//     //2 ptr assigned to another value
//     int value1_ = 5;
//     int* ptr1_{new int{}}; // allocate memory
//
//     //solve delete first before assigned new addres
//     delete ptr1_; //retunr back memory to Operating systme then reassign
//     ptr1_ = &value1_; //old address lost memory leak results
//
//     //double allocation
//     int* ptr_3 {new int{}};
//     ptr_3 = new int{};
//
//     //vector
//     std::vector<int> empty {}; //default has 0 in its elements
//     std::vector<int> primes {2,3,5,7};
//
//     std::vector vowels {'a', 'e', 'i', 'o', 'u'}; //deduces time from intializers
//     std::array;
//     std::size_t length = primes.size();
//     std::cout<< "The first prime no" << primes[0] << '\n';
//     std::cout<<"Prime container of size"  << length << '/n';
//
//     //initialize zero size
//     std::vector<int> data{0,0,0,0,0,0,0,0,0,0,0};
//     std::vector<int> data_(10); //contains 10 int values
//
//     //const vectors
//     const std::vector<int> primes_ {2,3,5,7}; //prime ant its elements cannot be modified
//     int x;
//     int y;
//     int exp {x+ y};
//
//     int sum {exp};
//
//
//     //quiz
//     std::vector positiveSquares {4,9,16}; //uses CTAD c+17 template aut deduction of type
//     for ( int n:positiveSquares)
//     {
//         std::cout<<"The number is " << n << '\n';
//     }
//
//     //List initialization vs direct initialization
//     std::vector<int> v1 {5}; //list initialization, envokes list constructor to create a 1 element vector containing  value 5 -> [5]
//     std::vector<int> v2 (5); //direct Initialization envokes non list constructor so, defines 5 element vector whose elemets are value intialized [0,0,0,0,0]
//     std::vector<int> v3 { 2,5}; //[5,5]
//
//
//     //Qn 3
//     std::vector<double> temps  (365);
//     std::cout << temps[0] << '\n';
//
//     //Qn 4
//     std::vector<int> values (3,1); //non list constructor so 3 element vector with zero values initialized.product so initializat to 1
//
//     //get values 3 times from user
//     for ( int i = 0; i < 3;  i++)
//
//         {
//         std::cout << "enter 3 integral values";
//         int val {};
//         std::cin >> val;
//         values.push_back(val); //adds elemet at the end of the vector
//         }
//     //sum and product
//   computeProductAndSum(values);
//
//   //solun 2
//     //create vector size 3
//     std::vector<int> arr(3); //vector length 3 initialized with [0,0,0]
//
//     std::cout << "enter 3 integers" <<'\n';
//
//     std::cin >> arr[0] >> arr[1] >> arr[2];
//     std::cout << "the sum is: " <<arr[0] + arr[1] + arr[2] << '\n';
//     std::cout << "The product is " << arr[0] * arr[1] * arr[2] << '\n';
//
//
//
//     //stack vs heap
//     int v {3}; //stack
//     int* b = new int (10); //heap
//     delete b; //free up memory
//
//     //refe vs pointer
//     const std::string&; //ready only object
//     //bool isValidPacket(const Packet& packet);
//
//     //raw pointervs vs smart pointers
//     std::unique_ptr<int>;
//
//     return 0;
// }
//
// //memory leak - lose address of dynamically memory after ptr out of scope
// //1) outscope pointer,
// void doSomething()
// {
//     int* ptr{new int{} };
// }
//
// struct Boo
// {
//     //std::vector<int> v{18}; //compile error direct initialization not allowed for member default initialization
//     std::vector<int> v{std::vector<int>(8)}; //copy initalization or list initialization
//
// };
//
// void printByRef(const std::string& s)
// {
//     std::cout << s << '\n'; //references to avoid copying
//
// }
//
// void printByPointer(const std::string* s)
// {
//     //check if not null ptr first for every caler
//     if (s != nullptr) {
//         std::cout << *s << '\n'; //dereferec=bce
//     }
// }
