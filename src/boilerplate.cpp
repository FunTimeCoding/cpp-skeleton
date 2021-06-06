#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void firstPart() {
    // Output
    cout << "Hello friend." << endl;

    // Types
    const double PI = 3.1415926535;
    char myGrade = 'A';
    bool isHappy = true;
    int myAge = 39;
    // 6 decimal places
    float favNum = 3.141592;
    // 15 decimal places
    double otherFavNum = 1.6180339887;
    cout << "Favourite Number " << favNum << endl;
    // More types: short int, long int, long long int, unsigned int, long double
    cout << "Size of int " << sizeof(myAge) << endl;
    int largestInt = 2147483647;
    cout << "Largest int " << largestInt << endl;

    // Arithmetic
    // Operators: + - * / % ++, --
    cout << "1 + 1 = " << 1 + 1 << endl;
    // Increments
    int five = 5;
    cout << "5++ = " << five++ << endl;
    cout << "++5 = " << ++five << endl;
    cout << "5-- = " << five-- << endl;
    cout << "--5 = " << --five << endl;
    five += 6;
    five = five + 6;
    // Order of operations: * / + -
    cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
    cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl;
    cout << "4 / 5 = " << 4 / 5 << endl;
    cout << "4 / 5 = " << (float) 4 / 5 << endl;

    // If statement
    // Comparison operators: == != > < >= <=
    // Logical operators: && || !
    int age = 70;
    int ageAtLastExam = 16;
    bool isNotInToxicated = true;
    if ((age >= 1) && (age < 16)) {
        cout << "You can't drive." << endl;
    } else if (!isNotInToxicated) {
        cout << "You can't drive." << endl;
    } else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))) {
        cout << "You can't drive." << endl;
    } else {
        cout << "You can drive." << endl;
    }

    // Switch statement
    int greetingOption = 2;
    switch (greetingOption) {
        case 1:
            cout << "Bonjour" << endl;
            break;
        case 2:
            cout << "Hola" << endl;
            break;
        case 3:
            cout << "Hallo" << endl;
            break;
        default:
            cout << "Hello" << endl;
    }

    // Ternary operator
    // variable = (condition) ? true : false
    int largestNum = (5 > 2) ? 5 : 2;

    // Arrays
    int myFavNums[5];
    int badNums[5] = {4, 13, 14, 24, 34};
    cout << "Bad number 1: " << badNums[0] << endl;
    // Multidimensional array
    char myName[5][5] = {
            {'S', 'u', 'e'},
            {'S', 'a', 'm'}
    };
    cout << "2nd letter in 2nd array: " << myName[1][1] << endl;
    myName[0][2] = 'e';
    cout << "New value: " << myName[0][2] << endl;

    // For loop
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    for (int j = 0; j < 5; j++) {
        for (int k = 0; k < 5; k++) {
            cout << myName[j][k];
        }
        cout << endl;
    }

    // While loop
    int randNum = (rand() % 100) + 1;
    while (randNum != 100) {
        cout << randNum << ", ";
        randNum = (rand() % 100) + 1;
    }
    cout << endl;
    int index = 1;
    while (index <= 10) {
        cout << index << endl;
        index++;
    }

    // Do while loop
    string numberGuessed;
    int intNumberGuessed = 0;
    do {
        cout << "Guess between 1 and 10: " << endl;
        getline(cin, numberGuessed);
        intNumberGuessed = stoi(numberGuessed);
    } while (intNumberGuessed != 4);
    cout << "You win" << endl;

    // String
    // Array and string
    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
    string birthdayString = " Birthday";
    cout << happyArray + birthdayString << endl;
    // Read a string
    string yourName;
    cout << "What is your name? ";
    getline(cin, yourName);
    cout << "hello " << yourName << endl;
    double eulersConstant = .57721;
    string eulerGuess;
    double eulerGuessDouble;
    cout << "What is euler's Constant?";
    getline(cin, eulerGuess);
    eulerGuessDouble = stod(eulerGuess);
    if (eulerGuessDouble == eulersConstant) {
        cout << "You are right." << endl;
    } else {
        cout << "You are wrong." << endl;
    }
    cout << "Size of string: " << eulerGuess.size() << endl;
    cout << "Is string empty: " << eulerGuess.empty() << endl;
    cout << eulerGuess.append(" was your guess") << endl;
    string dogString = "dog";
    string catString = "cat";
    cout << dogString.compare(catString) << endl;
    cout << catString.compare(dogString) << endl;
    cout << dogString.compare(dogString) << endl;
    string wholeName = yourName.assign(yourName);
    cout << wholeName << endl;
    string firstName = wholeName.assign(wholeName, 0, 5);
    cout << firstName << endl;
    int lastNameIndex = yourName.find("foo");
    cout << "Index for last name: " << lastNameIndex << endl;
    yourName.insert(5, " Justin");
    cout << yourName << endl;
    yourName.erase(6, 7);
    cout << yourName << endl;
    yourName.replace(6, 5, "Maximus");
    cout << yourName << endl;

    // Vectors
    // Like arrays, but size can change.
    vector<int> lotteryNumVect(10);
    int lotteryNumArray[5] = {4, 13, 14, 24, 34};
    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray,
                          lotteryNumArray + 3);
    cout << lotteryNumVect.at(2) << endl;
    lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44);
    cout << lotteryNumVect.at(5) << endl;
    lotteryNumVect.push_back(64);
    cout << "Final value: " << lotteryNumVect.back() << endl;
    // Pop the last value.
    lotteryNumVect.pop_back();
    cout << "First value: " << lotteryNumVect.front() << endl;
    cout << "Is the vector empty? " << lotteryNumVect.empty() << endl;
    cout << "Vector size: " << lotteryNumVect.size() << endl;
}

int addNumbers(int firstNum, int secondNum = 0) {
    int combinedValue = firstNum + secondNum;
    return combinedValue;
}

// Overloaded function
int addNumbers(int firstNum, int secondNum, int thirdNum) {
    return firstNum + secondNum + thirdNum;
}

int getFactorial(int number) {
    int sum;
    if (number == 1) {
        sum = 1;
    } else {
        sum = getFactorial(number - 1) * number;
    }
    return sum;
}

void makeMeYoung(int *age) {
    cout << "I used to be " << *age << endl;
    *age = 21;
}

void actYourAge(int &age) {
    age = 39;
}

class Animal {
    // Attributes: height, weight => variables
    // Capabilities: run, eat => functions, methods
private:
    int height;
    int weight;
    string name;
    static int numOfAnimals;
public:
    int getHeight() {
        return height;
    }

    int getWeight() {
        return weight;
    }

    string getName() {
        return name;
    }

    void setHeight(int cm) {
        height = cm;
    }

    void setWeight(int kg) {
        weight = kg;
    }

    void setName(string animalName) {
        name = animalName;
    }

    // Prototype
    void setAll(int, int, string);

    // Constructor prototype
    Animal(int, int, string);

    // Destructor prototype
    ~Animal();

    // Overloaded constructor with no parameters.
    Animal();

    // Static method
    static int getNumOfAnimals() {
        return numOfAnimals;
    }

    void toString();
};

// declaration(? not implementation?) of prototypes
int Animal::numOfAnimals = 0;

// Implement method
void Animal::setAll(int height, int weight, string name) {
    this->height = height;
    this->weight = weight;
    this->name = name;
    Animal::numOfAnimals++;
}

// implement constructor very similar to method
Animal::Animal(int height, int weight, string name) {
    this->height = height;
    this->weight = weight;
    this->name = name;
    Animal::numOfAnimals++;
}

// Destructor
Animal::~Animal() {
    cout << "Animal " << this->name << " destroyed" << endl;
}

// Another constructor
Animal::Animal() {
    Animal::numOfAnimals++;
}

void Animal::toString() {
    cout << this->name << " is " << this->height << " cms tall and "
         << this->weight << " kgs in weight " << endl;
}

// Inheritance
class Dog : public Animal {
private:
    string sound = "Woof";
public:
    void getSound() {
        cout << sound << endl;
    }

    Dog(int, int, string, string);

    // Default superclss constructor.
    Dog() : Animal() {};

    void toString();
};

// Let Animal constructor handle part of this.
Dog::Dog(
        int height,
        int weight,
        string name,
        string bark
) : Animal(height, weight, name) {
    this->sound = bark;
}

void Dog::toString() {
    cout << this->getName() << " is " << this->getHeight() << " cms tall and "
         << this->getWeight() << " kgs in weight and says " << this->sound
         << "." << endl;
}

class Animal2 {
public:
    void getFamily() {
        cout << "We are animals." << endl;
    }

    // Virtual method, if you know it may be overwritten.
    virtual void getClass() {
        cout << "I'm an Animal." << endl;
    }
};

class Dog2 : public Animal2 {
public:
    void getClass() {
        cout << "I'm a Dog." << endl;
    }
};

void whatClassAreYou(Animal2 *animal) {
    // This would both return the animal getClass if it wasn't marked virtual.
    animal->getClass();
}

class GermanShepard : public Dog2 {
public:
    void getClass() {
        cout << "I'm a German Shepard." << endl;
    }

    void getDerived() {
        cout << "I'm an Animal and Dog." << endl;
    }
};

// Another polymorphism example, supposed to have a capability class. Maybe abstract Animal3?
class Animal3 {
public:
    virtual void makeSound() {
        cout << "The Animal says grr." << endl;
    }
};

class Dog3 : public Animal3 {
public:
    void makeSound() {
        cout << "The Animal says woof." << endl;
    }
};

class Cat : public Animal3 {
public:
    void makeSound() {
        cout << "The Animal says meow." << endl;
    }
};

// Abstract
class Car {
public:
    virtual void getNumWheels() = 0;

    virtual void getNumDoors() = 0;
};

class StationWagon : public Car {
public:
    void getNumWheels() {
        cout << "Station wagon has 6 wheels" << endl;
    }

    void getNumDoors() {
        cout << "Station wagon has 6 doors" << endl;
    }

    StationWagon() {}

    ~StationWagon();
};

int main() {
    //firstPart();

    // Functions
    cout << addNumbers(1, 2) << endl;
    cout << addNumbers(1, 2, 3) << endl;
    cout << "Factorial of 5 = " << getFactorial(5) << endl;

    // File IO
    string steveQuote = "A day without sunshine is like, you know, night.";
    // Create a new file.
    ofstream writer("stevequote.txt");
    if (!writer) {
        cout << "Error opening file." << endl;
        return -1;
    } else {
        writer << steveQuote << endl;
        writer.close();
    }
    // Append to file.
    ofstream writer2("stevequote.txt", ios::app);
    // Mode mores:
    // ios::binary - treat as binary
    // ios::in - open in read More
    // ios::trunc - default
    // ios::out - open to write
    if (!writer2) {
        cout << "Error opening file." << endl;
        return -1;
    } else {
        writer2 << "\n - Steve Martin" << endl;
        writer2.close();
    }
    char letter;
    ifstream reader("stevequote.txt");
    if (!reader) {
        cout << "Error opening file." << endl;
        return -1;
    } else {
        for (int i = 0; !reader.eof(); i++) {
            reader.get(letter);
            cout << letter;
        }
        cout << endl;
        reader.close();
    }

    // Exceptions
    int number = 0;
    try {
        if (number != 0) {
            cout << 2 / number << endl;
        } else {
            throw (number);
        }
    } catch (int number) {
        cout << number << " is not valid" << endl;
    }

    // Pointers
    int myAge = 39;
    char myGrade = 'A';
    cout << "Size of int " << sizeof(myAge) << endl;
    cout << "Size of char " << sizeof(myGrade) << endl;
    cout << "myAge is located at " << &myAge << endl;
    // Values can be passedby reference, as opposed to pass by value.
    int *agePtr = &myAge;
    cout << "Address of pointer " << agePtr << endl;
    cout << "Data at memory address " << *agePtr << endl;
    // Increment a pointer.
    int badNums[5] = {4, 13, 14, 24, 34};
    int *numArrayPtr = badNums;
    cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
    numArrayPtr++;
    cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
    cout << "Address " << badNums << " Value " << *badNums << endl;
    makeMeYoung(&myAge);
    cout << "I'm " << myAge << " years old now." << endl;
    // Using a reference, as opposed to using pointers.
    int &ageRef = myAge;
    cout << "myAge: " << myAge << endl;
    ageRef++;
    cout << "myAge: " << myAge << endl;
    actYourAge(ageRef);
    cout << "myAge: " << myAge << endl;
    // When to use pointers: If you don't want to have to intialize at declaration.
    // Pointers can be assigned to many values.
    // When to use references: If you don't need to change what you're referencing.
    // References stick to only one value.

    // Classes
    Animal fred;
    fred.setHeight(33);
    fred.setWeight(10);
    fred.setName("Fred");
    cout << fred.getName() << " is " << fred.getHeight() << " cms tall and "
         << fred.getWeight() << " kgs in weight." << endl;
    Animal tom(36, 15, "Tom");
    cout << tom.getName() << " is " << tom.getHeight() << " cms tall and "
         << tom.getWeight() << " kgs in weight." << endl;
    Dog spot(38, 16, "Spot", "Wooof");
    cout << "Number of animals " << Animal::getNumOfAnimals() << endl;
    spot.getSound();
    tom.toString();
    spot.toString();
    // Call a method from the superclass.
    spot.Animal::toString();

    // Virtual methods and polymorphism.
    Animal2 *animal = new Animal2();
    Dog2 *dog = new Dog2();
    animal->getClass();
    dog->getClass();
    whatClassAreYou(animal);
    whatClassAreYou(dog);
    Dog2 spot2;
    GermanShepard max;
    // To get to base class methods, use a base class pointer.
    Animal2 *ptrDog = &spot2;
    Animal2 *ptrGShepard = &max;
    ptrDog->getFamily();
    ptrDog->getClass();
    // Call superclass methods.
    ptrGShepard->getFamily();
    ptrGShepard->getClass();
    // Not sure what this means.
    Animal3 *pCat = new Cat;
    Animal3 *pDog = new Dog3;
    pCat->makeSound();
    pDog->makeSound();
    // Use something abstract, or so.
    Car *stationWagon = new StationWagon();
    stationWagon->getNumWheels();

    return 0;
}
