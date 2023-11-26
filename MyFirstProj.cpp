
#include <iostream>
#include <string>

//----------------------------------------------------------------------------- Namespaces - used for preventing name conflicts

//namespace first {
//    int x = 1;
//}

// ----------------------------FUNCTIONS---------------------------------------

//void happyBirthday(std::string name) {
//    std::cout << "Happy Birthday!" << name;
//}

//void swap(std::string &x, std::string &y) {
    
//    std::string temp;
//    temp = x;
//    x = y;
//    y = temp;

//}

//void printInfo(const std::string name, const int age) {
    
//   std::cout << name << '\n', age;
//}

//---------------------------------------------------------------------------------- Recursion

//int factorial(int num) {
//    if (num > 1) {
//        return num * factorial(num - 1);
//    }
//    else {
//        return 1;
//    }
//}

//---------------------------------------------------------------------------------- Function Template - accepts any type of variable, can generate as many overloaded functions as needed
//                                                                                   auto: compiler chooses what to return.

//template <typename T, typename U> 

//auto max(T x, U y) {
//    return(x > y) ? x : y;
//}

//---------------------------------------------------------------------------------- Struct as Arguments

//struct Car {
//    std::string name;
//    int year;
//    std::string color;
//};

//void printCar(Car &car) {
//    std::cout << car.name <<" " << car.year << " " << car.color;
//}

//------------------------------OBJECTS---------------------------------

//class Human {
//private:
//    std::string name;                               //instance variables
//    int age;
//    bool alive; 

//public:                                                    //Constructor
//    Human(std::string name, int age, bool alive) {
//        setName(name);
                            //Both possible
//        this->age = age;
//        this->alive = alive;
//    }
                                                    //Getters/Setters
//    std::string getName() {
//        return name;
//    }
//    void setName(std::string name) {
//        this->name = name;
//    }

                                                    //Methods
//    void eat() {                                
//        std::cout << "This person is eating";
//    }
//};

//---------------------------------------------------------------------------------- Inheritance

class Animal {
    public:
        bool alive = true;
    void eat() {
        std::cout << "This animal is eating";
    }
};

class Dog : public Animal{
    public:
        void bark() {
            std::cout << "This dog is barking";
        }
};

class Cat : public Animal {
public:
    void meow() {
        std::cout << "This cat is meowing";
    }
};


int main()
{

    //------------------------------------------------------------------------------ Basics

    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";

    //const int PI = 3.14159; //const - not changable
    //int x = 20;
    //double price = 6.1;
    //char grade = 'A';
    //bool alive = true;
    //std::string name = "Rafael";

    //std::cout << x << '\n';
    //std::cout << price << '\n';
    //std::cout << grade << '\n';
    //std::cout << alive << '\n';
    //std::cout <<"Hello " << name << " How are you" << '\n';
    //std::cout << "You are " << x << " years old" << '\n';

    //----------------------------------------------------------------------------- Namespaces - used for preventing name conflicts

    //int x = 0;
    //std::cout << first::x;

    //----------------------------------------------------------------------------- TypeDef/Using
    //typedef std::string text_t;
    //using number = int;

    //text_t firstName = "Rafael";
    //std::cout << firstName;

    //number age = 20;
    //std::cout << age;

    //------------------------------------------------------------------------------ Type conversion

    //int x = 3.14;           //Implicit - automatic
    //double y = (int)3.14;   //Explicit
    //char z = 100;           //Implicit - automatic: converts to letter using ascii

    //------------------------------------------------------------------------------ User input

    //std::string name;

    //std::cout << "Whats your name?";
    //std::cin >> name;

    //std::cout << name;

    //std::getline(std::cin >> std::ws, name); //used if input has spaces
    //std::cout << name;
     
    
    //------------------------------------------------------------------------------ If Statements

    //int age;
    //std::cout << "How old are you\n";
    //std::cin >> age;

    //if (age > 18) {
    //    std::cout << "You can drink";
    //}
    //else if (age < 0) {
    //    std::cout << "You are not born";
    //}
    //else {
    //    std::cout << "You can't drink";
    //}

    //----------------------------------------------------------------------------- Switches

    //int age;
    //std::cin >> age;

    //switch (age) {
    //    case 0:
    //        std::cout << "False";
    //        break;
    //    case 1:
    //        std::cout << "True";
    //        break;
    //    default:
    //        std::cout << "null";
    //        
    //}

    //------------------------------------------------------------------------------ Ternary Operator, ?: = replaces if/else

    //int grade = 41;
    //(grade >= 50) ? std::cout << "Pass\n" : std::cout << "Fail\n";

    //bool alive = false;
    //std::cout << (alive ?  "alive" : "dead");

    //------------------------------------------------------------------------------ Logical Operators: ! (not), && (and), || (or)

    //int temp = 30;

    //if (temp > 0 && temp < 30) {
    //    std::cout << "good temperature";
    //}

    //------------------------------------------------------------------------------ Useful String Functions

    //std::string name = "Rafael";

    //std::cout << name.length();                           //returns length of string
    //if (name.empty()) { std::cout << "Name is empty"; }   //checks if empty
    //name.clear();                                         //clears string
    //name.append(" Capela-Rocha");                         //adds to string
    //std::cout << name.at(1);                              //returns char at index
    //name.insert(0, "GRRR ");                              //inserts char at index
    //std::cout << name.find('a');                          //returns index of first accurance
    //name.erase(0, 3);                                     //erases part of the string
    
    //------------------------------------------------------------------------------- While Loop
    
    //std::string name;
   
    //while (name.empty()) {
    //    std::cout << "Enter your name ";
    //    std::getline(std::cin, name);
    //}

    //------------------------------------------------------------------------------- Do While Loop -   do a block of code first,
    //                                                                                                  then repeat if condition true
        
    //int number;

    //do {
    //    std::cout << "enter a positive number";
    //    std::cin >> number;
    //} while (number < 0);

    //std::cout << number;

    //-------------------------------------------------------------------------------- For Loop

    //for (int i = 0;i <= 100; i++) {
    //   std::cout << i;
    //    }

    //-------------------------------------------------------------------------------- Break/Continue

    //break; - breaks out of loop
    //continue; - skip current iteration

    //-------------------------------------------------------------------------------- Random 

    //srand(time(NULL));

    //int num = (rand() % 20)+1;  //random number between 1 and 20
    //std::cout << num;

    //-------------------------------------------------------------------------------- Arrays

    //std::string cars[] = { "corvette", "mustang"};
    //std::string food[3];

    //--------------------------------------------------------------------------------- sizeof() - returns size of bytes

    //double gpa = 2.5;
    //std::cout << sizeof(gpa) << " bytes\n";

    //char grades[] = { 'A', 'B', 'C' };
    //std::cout << sizeof(grades)/sizeof(char) << " elements\n"; //DETERMINES SIZE OF ARRAY

    //---------------------------------------------------------------------------------- Foreach Loop

    //std::string students[] = { "Rafael", "Capela", "Rocha" };

    //for (std::string student : students) {
    //    std::cout << student << "\n";
    //}

    //----------------------------------------------------------------------------------- fill() -  fills a range of values with a specified value
    //                                                                                              fill(begin, end, value)
    //std::string foods[100];

    //fill(foods, foods + 50, "pizza");
    //fill(foods+50, foods + 100, "taco");

    //------------------------------------------------------------------------------------ Multidimentional arrays

    //std::string cars[][3] = {   {"supra", "celica", "tureno"},
    //                            {"silvia", "GTR", "180sx"},
    //                            {"RX7", "Miata", "RX8"}};
    //std::cout << cars[1][2];

    //------------------------------------------------------------------------------------ Memory address = a location in memory where data is stored
    //                                                                                     can be accessed with &

    //std::string name = "Rafael";
    //int age = 20;
    //bool student = true;

    //std::cout << &name << '\n';
    //std::cout << &age << '\n';
    //std::cout << &student << '\n';

    //------------------------------------------------------------------------------------ Pass by Value vs Pass by Reference

    //std::string x = "Kool-Aid";
    //std::string y = "water";

    //swap(x, y);

    //std::cout << "X: " << x << '\n';
    //std::cout << "Y: " << y << '\n';

    //------------------------------------------------------------------------------------ const - makes the variable read only
                                                                                                    

    //std::string name = "Rafael";
    //int age = 20;

    //printInfo(name, age);

    //------------------------------------------------------------------------------------ Pointers - variable that stores a memory address
    //                                                                                     of another variable EX- used when you want to change 
    //                                                                                     variables using a function 

    //std::string name = "Rafael";
    //std::string *pName = &name;

    //std::string array[5] = { "1","2", "3", "4", "5" };
    //std::string* pArray = array;

    //std::cout << *pName << '\n'; 
    //std::cout << *pArray << '\n';

    //------------------------------------------------------------------------------------- NULL Pointer (nullptr)

    //int* pointer = nullptr;
    //int x = 123;

    //pointer = &x;

    //------------------------------------------------------------------------------------- Dynamic Memory - Use 'new' with 'delete' 
    //                                                                                      Useful when we dont know how much memory we still need. 
    //                                                                                      Memory can be allocated after the program is compiled and running.

    //int *pNum = NULL;

    //pNum = new int;
    //*pNum = 21;

    //std::cout << "address: " << pNum << '\n';
    //std::cout << "Value: " << *pNum << '\n';

    //delete pNum;

    //------------------------------------------------------------------------------------- Structs: a group of related variables under one name
    //                                                                                      variables in a struct are members

//struct student{
//   std::string name;
//    double gpa;
//    bool enrolled = true;   //default value set
//};
    
//    student student1;
//    student1.name = "Rafael";
//    student1.gpa = 4.3;

//    std::cout << student1.name << '\n';
//    std::cout << student1.gpa << '\n';
//    std::cout << student1.enrolled << '\n';
  

//------------------------------------------------------------------------------------- Passing Structs as Arguments


//    Car car1;

//    car1.name = "miata";
//    car1.year = 1999;
//    car1.color = "red";

//    printCar(car1);

//------------------------------------------------------------------------------------- enums - user-defined data type that consists
//                                                                                      of paired named-integer constants.

//    enum Day {monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5};
    
//    Day today = tuesday;

//    switch (today) {
//        case monday: std::cout << "monday";
//        break;
//        case tuesday: std::cout << "tuesday";
//            break;
//        case wednesday: std::cout << "wednesday";
//            break;
//        case thursday: std::cout << "thursday";
//            break;
//        case friday: std::cout << "friday";
//            break;
//    }

//------------------------------ OBJECT ORIENTED PROGRAMMING----------------------------------

//    Human human1("Rick", 70, true);

//        std::cout << human1.getName() << '\n';
//        human1.setName("Morty");
//        std::cout << human1.getName() << '\n';

//        human1.eat();




}




