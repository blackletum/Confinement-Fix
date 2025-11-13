# Confinement-Fix

This repo is here to give you a fix for the missing executable error in "Portal 2: Confinement"

You have two options:

1) Download the EXE, drop it into your game folder
   - Downloading random EXE's off the internet is SCARY and DANGEROUS. I don't recommend you do this!
   - However, I can guarantee this EXE is safe, as I'm the one who made it (trust me bro)
   - Install this in `Confinement/confinement` and launch on Steam, simple as.
   - Window Defender may get mad at you for it...

2) Compile the stub.h file yourself to create the EXE!
    - You could compile this in VS. Figure that out yourself!
    - If you use MinGW/GCC you can just run this from within the folder you downloaded the .h file in:
      - `gcc -O2 stub.c -o portal2.exe -lshlwapi -mwindows`

3) Do none of these things and run a python script instead!
    - You could do that if you want... watch the youtube video here:
    - https://www.youtube.com/watch?v=P-9s6HjFBns
  

Game available here:

https://store.steampowered.com/app/2716490/Portal_2_Confinement/
