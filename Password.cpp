#include <iostream>
#include <string>
using namespace std;

int main() {

    string password;
    int score = 0;

    cout << "Enter your password: ";
    cin >> password;

if(password.length() >= 8){
    score++;
}
else{
    cout << "Warning: Password is too short" << endl;
}

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSymbol = false;

    for(char c : password){

        if(isupper(c))
            hasUpper = true;

        else if(islower(c))
            hasLower = true;

        else if(isdigit(c))
            hasDigit = true;

        else
            hasSymbol = true;
    }

    if(hasUpper) score++;
    if(hasLower) score++;
    if(hasDigit) score++;
    if(hasSymbol) score++;
    cout << "Password Score: " << score << "/5" << endl;

if(score <= 2)
    cout << "Strength: Weak";

else if(score <= 4)
    cout << "Strength: Medium";

else
    cout << "Strength: Strong";

    return 0;
}
