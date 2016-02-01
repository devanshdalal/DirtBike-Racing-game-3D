![Torque Logo](http://static.garagegames.com/static/pg/logokits/Torque-Logo_H.png)
## Torque 2D 3.2


Dedicated to 2D game development, Torque 2D is an extremely powerful, flexible, and fast C++ engine which has been used in hundreds of professional games. It is a true cross platform solution providing you access to Windows, OSX, Linux, iOS, Android, and the web - all from one codebase. It includes an OpenGL batched rendering system, Box2D physics, OpenAL audio, skeletal and spritesheet animation, automated asset management, a modular project structure, TAML object persistence, and a C-like scripting language.


It has a game-build-desktop folder.The game-build-desktop....  folder contains the assets used by the game . All the data of the game used by game engine is stored here.  A folder named game inside game-build-desktop ..... contains the source code of the game. build the makefile without any target and run the exceutable game in game-build-desktop......... folder.

The makefile makes a run executable which can be run through command line.

An elaborate description of code is given in Documentation.


### Precompiled Version

If you do not wish to compile the source code yourself, precompiled binary files for Ubuntu are available from the folder "game-build-desktop-Qt_4_8_1_in_PATH__System__Release".
Just double click on **run** file 


### Requirements
Just need freeglut3, freeglut3-dev along with build-essentials on Ubuntu. 

```
sudo apt-get install freeglut3 freeglut3-dev
```

For complete GUI of game, Install Qt-Creater to run. 


### Building the Game

After downloading a copy of the source code.

```
cd game-build-desktop-Qt_4_8_1_in_PATH__System__Release/Game
make
```
It will build the game and generate ./run file.
Copy this file and paste it in game-build-desktop-Qt_4_8_1_in_PATH__System__Release and run. i.e.
```
cp run ../run
cd ..
run ./run
```

### Documentation

All documentation for the Code is present here[pdf](). It contains many tutorials, detailed technical information on engine systems, a script reference guide automatically generated from the source code, and articles on how to contribute to our open source development.

### Community

Don't go it alone! Join the active community around Torque 2D at GarageGames.com. Ask questions, talk about T2D and general game development topics, learn the latest news, or post a blog promoting your game or showing off additional engine features in your T2D fork.

* [Torque 2D Beginner Forum](http://www.garagegames.com/community/forums/84)
* [Torque 2D Professional Forum](http://www.garagegames.com/community/forums/85)
* [GarageGames Community Blogs](http://www.garagegames.com/community/blogs)

# License
Copyright (c) 2012 GarageGames, LLC

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to
deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
IN THE SOFTWARE.
