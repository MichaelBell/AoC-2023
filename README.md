# Advent of Code 2023 for nanoV

[nanoV](https://github.com/MichaelBell/nanoV) is my tiny RV32E SoC that's on Tiny Tapeout 4.

I thought I'd use Advent of Code 2023 as an excuse to create some small programs using the minimal [nanoV-sdk](https://github.com/MichaelBell/nanoV-sdk) that can be used to prove everything works when the TT04 chips are delivered.

Note that the target platform has no file IO so my puzzle input is embedded in the program as a C string.  Other than formatting the input so it is a valid C string, no other pre-processing is done outside the programs.
