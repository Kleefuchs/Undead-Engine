#ifndef UE_CODECAM2D_H
#define UE_CODECAM2D_H

#include "../FLAGS.h"
#include <raylib.h>

namespace UE {

class UndeadEngine;

    class CodeCam2D {
        private:
            Camera2D coreCam;
        public:
            void (*update) (UE::UndeadEngine* engine, UE::CodeCam2D) = nullptr;
            /**
             * Returns the address of the core Camera2D object
            **/
            Camera2D* getCoreCam();
    };
    typedef UE::CodeCam2D CodeCam;
}
#endif