## Overview

My goal, be it feasible or fantasy, is to write a chess engine from scratch. This bitboard is the 
first step. So, here we go! 

Using the command line interface (CLI) we can interact with the bitboard to move pieces 
and to display the state of the board. Currently, there are no rules. Any piece can be moved to any square at any time. 
Capital letters stand for white pieces, lower case stand for black pieces.

```angular2html
$ ./bitboard 
mv e2 e4
Moving e2 to e4

d

    +---+---+---+---+---+---+---+---+
    | r | n | b | q | k | b | n | r |
    +---+---+---+---+---+---+---+---+
    | p | p | p | p | p | p | p | p |
    +---+---+---+---+---+---+---+---+
    |   |   |   |   |   |   |   |   |
    +---+---+---+---+---+---+---+---+
    |   |   |   |   |   |   |   |   |
    +---+---+---+---+---+---+---+---+
    |   |   |   |   | P |   |   |   |
    +---+---+---+---+---+---+---+---+
    |   |   |   |   |   |   |   |   |
    +---+---+---+---+---+---+---+---+
    | P | P | P | P |   | P | P | P |
    +---+---+---+---+---+---+---+---+
    | R | N | B | Q | K | B | N | R |
    +---+---+---+---+---+---+---+---+
    
```

---

## Installation

Clone the repository 
```angular2html
git clone https://github.com/de-Manzanares/bitboard.git
```

Move into the directory, then compile
```angular2html
cd bitboard
g++ -I . bitBoards.h main.cpp functions/*.cpp -o bitboard
```

Launch the program 
```angular2html
./bitboard
```

---

## Commands

``d`` **d**isplay the board

``mv <FROM> <TO>`` **m**o**v**e a piece using [algebraic notation](https://en.wikipedia.org/wiki/Algebraic_notation_(chess))

``quit`` **quit** the program

---

## Learn Chess

### Read the board

``K`` ``k`` ........ King

``Q`` ``q`` ........ Queen

``R`` ``r`` ........ Rook

``B`` ``b`` ........ Bishop

``N`` ``n`` ........ Knight

``P`` ``p`` ........ Pawn

### Cool resources

Gotham Chess: [How To Play Chess: The Ultimate Beginner Guide](https://www.youtube.com/watch?v=OCSbzArwB10)

Lichess: [Learn chess - by playing!](https://lichess.org/learn#/) 

---

## Contributions

If you have something to contribute, please do so! 

### Reporting Bugs
If you've found a bug, please open an issue on GitHub describing the problem. 

### Suggesting Features
If you have an idea for a new feature, please open an issue on GitHub describing your idea.

---

## To-do

### Short-term
* Add pawn promotion.
* Add an option to flip the board.
* Add an option to undo moves.
* Add an option to automatically display the board after each move.

### Longer-than-short-term
* Record moves using portable game notation (PGN). 
* Implement full set of chess rules. 
* Add Forsyth–Edwards notation (FEN) string decoder and encoder.

### Hopefully sooner than never 
* Implement basic evaluation and decision-making.
* Implement UCI compatability.

---

## License

Without a license, this work would be under exclusive copyright by default. Express permission would be required 
in order to use, modify, or share this work. That's ridiculous! So, here ya go. 


You may use, modify, or distribute this work freely as it is licenced under the [GNU General Public License Version 3](./COPYING.txt) 
(GPLv3). If you choose to distribute or modify this work, the distributions and modifications must be made available under GPLv3.