//Question 1
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age < 5)
        cout << "Free";
    else if (age >= 65)
        cout << "Discount";
    else
        cout << "Standard";

    return 0;
}



//Question 2
#include <iostream>
using namespace std;

int main() {
    int powerOn;
    char lightColor;
    cout << "Enter power status (1=On, 0=Off): ";
    cin >> powerOn;

    if (powerOn == 1) {
        cout << "Enter light color (R/Y/G): ";
        cin >> lightColor;
        switch (lightColor) {
            case 'R': cout << "Stop"; break;
            case 'Y': cout << "Caution"; break;
            case 'G': cout << "Go"; break;
            default: cout << "Invalid color";
        }
    } else {
        cout << "Signal Off";
    }
    return 0;
}



//Question 3
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    double discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        double r1 = (-b + sqrt(discriminant)) / (2*a);
        double r2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Two real roots: " << r1 << " and " << r2;
    }
    else if (discriminant == 0) {
        double r = -b / (2*a);
        cout << "One real root: " << r;
    }
    else {
        double real = -b / (2*a);
        double imag = sqrt(-discriminant) / (2*a);
        cout << "Imaginary roots: " << real << "+" << imag << "i and "
             << real << "-" << imag << "i";
    }
    return 0;
}





//Question 4
#include <iostream>
#include <string>
using namespace std;

int main() {
    string correct_username = "admin";
    string correct_password = "1234";

    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == correct_username) {
        if (password == correct_password)
            cout << "Login successful";
        else
            cout << "Incorrect password";
    } else {
        cout << "Username not found";
    }
    return 0;
}



//Question 5
#include <iostream>
using namespace std;

int main() {
    int hasPrerequisite, isCourseFull;
    cout << "Has prerequisite? (1=Yes, 0=No): ";
    cin >> hasPrerequisite;
    cout << "Is course full? (1=Yes, 0=No): ";
    cin >> isCourseFull;

    if (hasPrerequisite == 1) {
        if (isCourseFull == 0)
            cout << "Enrolled successfully";
        else
            cout << "Cannot enroll: course is full";
    } else {
        if (isCourseFull == 1)
            cout << "Cannot enroll: prerequisite missing and course is full";
        else
            cout << "Cannot enroll: prerequisite missing";
    }
    return 0;
}






//Question 6
#include <iostream>
using namespace std;

int main() {
    char room, action;
    cout << "Enter room (L=Living Room, K=Kitchen): ";
    cin >> room;
    cout << "Enter action (L=Lights, T=Thermostat): ";
    cin >> action;

    switch (room) {
        case 'L':
            switch (action) {
                case 'L': cout << "Adjusting ambient lighting."; break;
                case 'T': cout << "Setting living room temperature."; break;
                default: cout << "Invalid action";
            }
            break;
        case 'K':
            switch (action) {
                case 'L': cout << "Turning on bright task lighting."; break;
                case 'T': cout << "Setting kitchen temperature."; break;
                default: cout << "Invalid action";
            }
            break;
        default:
            cout << "Invalid room";
    }
    return 0;
}





//Question 7
#include <iostream>
using namespace std;

int main() {
    int permissions;
    cout << "Enter permission value (1=READ, 2=WRITE, 4=EXECUTE, combinations allowed): ";
    cin >> permissions;

    if (permissions & 4) {
        cout << "Access granted: full control";
    }
    else if ((permissions & 1) && (permissions & 2)) {
        cout << "Access granted: read and write";
    }
    else if (permissions & 1) {
        cout << "Access granted: read-only";
    }
    else {
        cout << "Access denied";
    }
    return 0;
}
