/***************************************************************************
* COMSC-210 | Lab 14 | Grant Luo
* Editor: CLion
* Compiler: Apple clang version 16.0.0
*/
#include <iostream>
using namespace std;

void print_id(string const& lab_desc);

class Color
{
    private:
        int red, green, blue;
    public:
        // Default Constructor
        Color(): red(0), green(0), blue(0) {}
        // Parametrized Constructor
        Color(int r, int g, int b) : red(r), green(g), blue(b) {}
        // Partial Constructor - initializes red and green, sets blue to 0
        Color(int r, int g) : red(r), green(g), blue(0) {}

        // Setters
        void setRed(int r) { red = r; }
        void setGreen(int g) { green = g; }
        void setBlue(int b) { blue = b; }

        // Getters
        int getRed() const { return red; }
        int getGreen() const { return green; }
        int getBlue() const { return blue; }

        void print() const
        {
            cout << "Color RGB (" << red << ", " << green << ", " << blue << ")\n";
        }
};

int main()
{
    print_id("Lab 16: Color Class w/ Constructors");

    // Using default constructor
    Color color1;

    // Using parametrized constructor
    Color color2(255, 0, 111);

}

void print_id(string const& lab_desc)
{
    cout << "\nCOMSC210 | Grant Luo | " << lab_desc << "\n";
    cout << "Editor: CLion\n";
    cout << "Compiler: Apple clang version 16.0.0\n";
    cout << "File: " << __FILE__ << "\n";
    cout << "Compiled: " << __DATE__ << " at " << __TIME__ << "\n\n";
}