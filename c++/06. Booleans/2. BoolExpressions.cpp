#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x = 10, y = 9;
    cout << (x > y) << "\n"; // 1
    // cout << (10 > 9) << "\n"; // 1

    /*
    In the examples below, 
    we use the equal to (==) operator to evaluate an expression:
    */
    cout << (10 == x) << "\n"; // 1
    cout << (10 == y) << "\n"; // 0

    /* Real Life Example
    
    Let's think of a "real life example" 
    where we need to find out if a person is old enough to vote.

    In the example below, we use the >= comparison operator 
    to find out if the age (25) is greater than or equal to the voting age limit, 
    which is set to 18:
    */

    int myAge = 25;
    int votingAge = 18;

    cout << (myAge >= votingAge) << "\n"; // returns 1 (true), meaning 25 year olds are allowed to vote!

    /*
    Cool, right? An even better approach (since we are on a roll now), 
    would be to wrap the code above in an if...else statement, 
    so we can perform different actions depending on the result:
    */

    if (myAge >= votingAge) {
        cout << "You are old enough!!" << "\n";
    } else {
        cout << "You are not old enough!!" << "\n";
    }

    return 0;
}
