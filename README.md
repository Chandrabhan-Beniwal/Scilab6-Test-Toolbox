
Documentation by : Chandrabhan, for a Screening task of Transpose of a matrix.

This repository is a test toolbox for Scilab. It requires "thirdparty" directory which can be downloaded as "external-library.zip" file from the page: https://scilab.in/fossee-scilab-toolbox. The "thirdparty" directory contains compiled library for a simple "transpose" function written in C. After copying the "thirdparty" directory to the toolbox directory, on the scilab console run "exec builder.sce" to build the toolbox and then run "exec loader.sce" to load the toolbox.  Type "help" in the scilab console and browse through the help content of "test_toolbox". The external-library.zip file also contains separate instructions to work with MinGW on Windows OS.

This toolbox overall demonstrates:

1. A C function that computes transpose of a nxm matrix with file named as “trans.c”.

2. This C function can be called from scilab

3. Folder named “test” inside the repository containing “trans.c” file.

