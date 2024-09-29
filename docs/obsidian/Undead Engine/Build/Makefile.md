This is the file which specifies how the [[UndeadEngine]] needs to be built.
How to build and install on Linux

`make build-linux`
`make install-linux`

Inner workings:

It builds the [[Object Files]] from the [[Source Files]] then it copies the [[Include Files]] into the target folder.

It can also remove the previously built/copied [[Object Files]], [[libundeadengine.a]] and [[Include Files]]