#include <iostream>
#include <emscripten.h>
using namespace std;

extern "C" {
    extern int multiply(float x, float y) {
        return multiply_in_js(x,y);
    }

}

int main() {
    cout<<"Initialized.";
    EM_ASM( multiply(x,y) ); //apparently this should work just like onRuntimeInitialized.
    return 0;
}
