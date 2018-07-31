#define quiz2

#ifdef quiz1
#include <iostream>


// calculates "x op y"
int calculate(int x, int y, char op)
{
    switch(op) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': return x / y;     // meaning integer division
        case '%': return x % y;
        default:
            std::cout << "Invalid operator " << op << "!\n";
            return -1;
    }
}


// prompts user to enter an integer
int getInt()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    std::cin.ignore(32767, '\n');   // discard chars until (including) next \n
    return x;
}


// prompts user to enter the operator
char getOperator()
{
    std::cout << "Enter an operator (+, -, *, / %): ";
    char op;
    std::cin >> op;
    std::cin.ignore(32747, '\n');   // discard chars until (including) next \n
    return op;
}

int main()
{
    int
        x = getInt(),
        y = getInt();

    char op = getOperator();

    // output result
    std::cout << x << ' ' << op << ' ' << y << " = " << calculate(x, y, op) << '\n';

    return 0;
}
#endif // quiz1
#ifdef quiz2
#include <iostream>
#include <string>       // for std::string


// enum class of all animals
enum class Animal {
    CAT,
    CHICKEN,
    DOG,
    GOAT,
    OSTRICH,
    PIG
};


// returns animal name as a string
std::string getAnimalName(Animal animal)
{
    switch(animal) {
        case Animal::CAT:       return "cat";
        case Animal::CHICKEN:   return "chicken";
        case Animal::DOG:       return "dog";
        case Animal::GOAT:      return "goat";
        case Animal::OSTRICH:   return "ostrich";
        case Animal::PIG:       return "pig";
        default:                return "???";
    }
}


// prints formatted string to console
void printNumberOfLegs(Animal animal)
{
    int legs;
    switch(animal) {
        case Animal::CHICKEN:               // all animals with two legs
        case Animal::OSTRICH:   legs = 2; break;

        case Animal::CAT:                   // all animals with four legs
        case Animal::DOG:
        case Animal::GOAT:
        case Animal::PIG:       legs = 4; break;

        default:                std::cout << "???"; return;
    }

    std::cout << "A " << getAnimalName(animal) << " has " << legs << " legs.\n";
}


int main()
{
    printNumberOfLegs(Animal::CAT);
    printNumberOfLegs(Animal::CHICKEN);

    return 0;
}
#endif // quiz2

