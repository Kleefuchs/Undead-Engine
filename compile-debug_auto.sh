if [[ "$OSTYPE" == "linux-gnu"* ]]; then
        #Linux/GNU
        echo Detected GNU/Linux
        bash compile-debug_linux.sh
elif [[ "$OSTYPE" == "darwin"* ]]; then
        # Mac OSX
        echo Detected Mac OS X
        echo Mac OSX is not currently supported
elif [[ "$OSTYPE" == "cygwin" ]]; then
        # POSIX compatibility layer and Linux environment emulation for Windows
        echo Detected Cygwin
        echo cygwin currently not supported
elif [[ "$OSTYPE" == "msys" ]]; then
        echo Detected Windows
        bash compile-debug_windows.sh
elif [[ "$OSTYPE" == "win32" ]]; then
        # I'm not sure this can happen.
        echo Detected Windows
        bash compile-debug_windows.sh
elif [[ "$OSTYPE" == "freebsd"* ]]; then
        # ...
        echo freebsd is currently not supported
else
        echo Detected unknown OS
        # Unknown.
fi
