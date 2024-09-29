#ifndef KF_DEBUGGER_HPP
#define KF_DEBUGGER_HPP

/*Little Class to help with Debugging*/
class Debugger {
    private:
    public:
        #ifndef NDEBUG
        /*Makes a false assertion*/
        void makeFalseAssertion();
        #endif
        #ifndef NDEBUG
        /*Makes a true assertion*/
        void makeTrueAssertion();
        #endif
        /*Returns true when using Debug build*/
        bool usesDebugBuild();
        /*Returns true when using a Release build*/
        bool usesReleaseBuild();
};

#endif