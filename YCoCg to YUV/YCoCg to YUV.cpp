//
#include <iostream>
#include "converter.h"
int Y;
int Co;
int Cg;
double Luma;
double U;
double V;
bool running = true;

int main()
{
    std::cout << "YCoCg to YUV converter\n";
    
    while (running) {
        std::cout << "Enter integers for Y, Co, Cg, or enter anything else to close:\n";
        if(std::cin >> Y >> Co >> Cg) { //Store user input
            convertToYUV(Y, Co, Cg, Luma, U, V);
            std::cout << "YUV: " << Luma << " " << U << " " << V << "\n\n";
        }
        else {
            std::cout << "Closing program...\n";
            running = false;
        }
    }
    return(0);
}
