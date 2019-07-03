<h1>Can you feel it?</h1>


<p>Your executable must take only one parameter, a file which contains a list of Tetriminos to assemble. 
This file has a very specific format : every Tetrimino must exactly fit in a 4 by 4 chars square and all 
Tetrimino are separated by an newline each.</p>

<p>If the number of parameters sent to your executable is not 1, your program must display its usage and exit properly. 
If you don’t know what a usage is, execute the command cp without arguments in your Shell. 
It will give you an idea. Your file should contain between 1 and 26 Tetriminos.</p>

<p>The description of a Tetriminos must respect the following rules:</p>
<ul>* Precisely 4 lines of 4 characters, each followed by a new line (well... a 4x4 square).</ul>
<ul>* A Tetrimino is a classic piece of Tetris composed of 4 blocks. </ul>
<ul>* Each character must be either a block character(’#’ ) or an empty character (’.’).</ul>
<ul>* Each block of a Tetrimino must touch at least one other block on any of his 4 sides (up, down, left and right).</ul>

<h2>Compiling</h2>

Run make, an executable called fillit should compile directly. Please submit an issue if you run into any.

<h2>Usage</h2>
./fillit [file]
