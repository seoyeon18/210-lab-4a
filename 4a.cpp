//COMSC210 | lab4A | Seoyeon An
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

    cout << "Milestone 1- Test 1 initialized Color:\n";
    Color testColor;
    testColor.r = 192;
    testColor.g = 182;
    testColor.b = 96;
    outputColor(testColor);


    //create empty vector
    vector<Color> colors;
    cout << "Milestone -2 Push 1 Color into vector:\n";
    colors.push_back(testColor);
    cout << "Vector size is now: " << colors.size() << "\n";
    outputColor(colors[0]);

}