#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
int 
float
double
bool 
char
wchar_t 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int cookies = 5;
    int fingers = 10;
    int feet = 2;

    float earthDiameter = 12742.54f;
    float wineBottleCapacity = 0.75f;
    float catWeight = 3.45f;

    double pi = 3.14159265359;
    double e = 2.71828182846;
    double goldenRatio = 1.61803398875;

    bool isNight = true;
    bool isDrunk = false;
    bool isTired = true;

    char firstInitial = 'J';
    char secondInitial = 'P';
    char thirdInitial = 'D';
    
    ignoreUnused(number, cookies, fingers, feet, 
        earthDiameter, wineBottleCapacity, catWeight,
        pi, e, goldenRatio,
        isNight, isDrunk, isTired,
        firstInitial, secondInitial, thirdInitial
        ); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float saveMoney(float amount = 0.0)
{
    ignoreUnused(amount);
    return {};
}

/*
 2)
 */
void cleanHouse(bool isThorough = false)
{
    ignoreUnused(isThorough);
}
/*
 3)
 */
char chooseRandomLetter(bool isUpperCase = true)
{
    ignoreUnused(isUpperCase);
    return {};
}
/*
 4)
 */
void playWithCat(int numberOfMinutes = 10)
{
    ignoreUnused(numberOfMinutes);
}
/*
 5)
 */
void bingeOnNetflix(int guiltLevel, int numberOfEpisodes = 4)
{
    ignoreUnused(guiltLevel, numberOfEpisodes);
}
/*
 6)
 */
int throwDart(int pointsExpected = 60)
{
    ignoreUnused(pointsExpected);
    return {};
}
/*
 7)
 */
bool jumpOffCliff(bool withParachute = true)
{
    ignoreUnused(withParachute);
    return {};
}
/*
 8)
 */
void talkToStranger(int strangerAge, char strangerGender)
{
    ignoreUnused(strangerAge, strangerGender);
}
/*
 9)
 */
bool giveYouUp(bool isLying = false)
{
    ignoreUnused(isLying);
    return {};
}
/*
 10)
 */
void takeBreak(int minutes, bool drinkTea = true)
{
    ignoreUnused(minutes, drinkTea);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto totalSavings = saveMoney(100.0f);
    //2)
    cleanHouse(false);
    //3)
    auto randomLetter = chooseRandomLetter(false);
    //4)
    playWithCat();
    //5)
    bingeOnNetflix(0);
    //6)
    auto pointsScored = throwDart();
    //7)
    auto hasLandedSafely = jumpOffCliff(true);
    //8)
    talkToStranger(45, 'F');
    //9)
    auto never = giveYouUp(false);
    //10)
    takeBreak(10);
    
    ignoreUnused(carRented, totalSavings,
        randomLetter, pointsScored, hasLandedSafely,
        never);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
