#ifndef KF_UNDEADENGINE_HPP
#define KF_UNDEADENGINE_HPP

#include "FLAGS.HPP"
#include "Debugger.hpp"

class UndeadEngine {
    private:
        Debugger debugger;
    public:
        //Getters and Setters:
        /*
        Returns pointer to Debugger
        */
        Debugger* getDebuggerPtr();
};

#endif