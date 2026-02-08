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
    cout << "=== Vector of Structs: Color ===\n\n";
}