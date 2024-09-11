#ifndef KF_DEBUGGER_HPP
#define KF_DEBUGGER_HPP

#include "FLAGS.HPP"
#include <cassert>

/*
Little Class to help with Debugging
*/
class Debugger {
    private:
    public:
        /*
        Makes a false Assertion
        */
        void makeFalseAssertion();
        /*
        Makes a true Assertion
        */
        void makeTrueAssertion();
        /*
        Returns true when using Debug build
        */
        bool usesDebugBuild();
        /*
        Returns true when using a Release build
        */
        bool usesReleaseBuild();
};

#endif