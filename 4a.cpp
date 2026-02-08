#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Color {
    int r;
    int g;
    int b;
};

// Function prototypes
int RandomRange(int minVal, int maxVal);
Color RandomColor();
void outputColor(const Color& c);
void outputTable(const vector<Color>& colors);

int main() {
    cout << "Vector of Structs: Color \n";
    srand(time(0));
    cout << "Milestone 1- Test ONE initialized Color:\n";
    Color testColor;
    testColor.r = 192;
    testColor.g = 182;
    testColor.b = 96;
    outputColor(testColor);

}