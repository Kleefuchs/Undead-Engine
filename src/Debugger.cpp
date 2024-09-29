#include "include/Debugger.hpp"
#include <cassert>

#ifndef NDEBUG
void Debugger::makeFalseAssertion() {
    assert(0 == 1);
}
#endif

#ifndef NDEBUG
void Debugger::makeTrueAssertion() {
    assert(0 == 0);
}
#endif

bool Debugger::usesDebugBuild() {
    #ifdef NDEBUG
        return false;
    #endif
    #ifndef NDEBUG
        return true;
    #endif
}

bool Debugger::usesReleaseBuild() {
    #ifndef NDEBUG
        return false;
    #endif
    #ifdef NDEBUG
        return true;
    #endif
}

