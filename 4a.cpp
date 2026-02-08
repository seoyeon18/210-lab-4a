//COMSC210 | lab4A | Seoyeon An
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <iomanip>

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


    // Milestone 1
    // struct works and can receive initialization data
    cout << "Milestone 1- Test 1 initialized Color:\n";
    Color testColor;
    testColor.r = 192;
    testColor.g = 182;
    testColor.b = 96;
    outputColor(testColor);


    //create empty vector
    vector<Color> colors;

    // Milestoen 2
    // push one Color into vector and vonfirm
    cout << "Milestone -2 Push 1 Color into vector:\n";
    colors.push_back(testColor);
    cout << "Vector size: " << colors.size() ;
    outputColor(colors[0]);

    // Milestone 3:
    // Generate random between 25 and 50
    // random colors into vector
    cout << "Milestone 3 -25-50 and push random colors:\n";
    int n = RandomRange(25, 50);
    cout << "n = " << n;

    for (int i = 0; i < n; i++) {
        Color temp = RandomColor();
        colors.push_back(temp) ;
    }

    cout << colors.size();
    int preview = (colors.size() < 5) ? colors.size() : 5 ;
    for (int i = 0; i < preview; i++) {
        cout << (i + 1);
        outputColor(colors[i]) ;
    }

    cout << "Milestone 4 Final Output:";
    outputTable(colors);


}

int getRandomInRange(int minVal, int maxVal) {
    int quantity = (maxVal - minVal) + 1;   // how many numbers exist in the range
    int value = rand() % quantity;          // 0 ~ (quantity - 1)
    value = value + minVal;                 // shift into minVal ~ maxVal
    return value;
}


// makeRandomColor
Color makeRandomColor() {
    Color temp;
    temp.r = getRandomInRange(0, 255);
    temp.g = getRandomInRange(0, 255) ;
    temp.b = getRandomInRange(0, 255);
    return temp;
}




// outputTable()

void outputTable(const vector<Color>& colors) {
    cout << left
         << setw(8)  << "Color#"
         << setw(10) << "R value"
         << setw(10) << "G value"
         << setw(10) << "B value"
         ;

    cout << string(8 + 10 + 10 + 10, '-') ;

    for (size_t i = 0; i < colors.size(); i++) {
        cout << left
             << setw(8)  << (i + 1)
             << setw(10) << colors[i].r
             << setw(10) << colors[i].g
             << setw(10) << colors[i].b
             ;
    }
}


