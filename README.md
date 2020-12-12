# PUSH_SWAP
I screwed up a lil with the first repository... 

Try number 2... because why have two folders with the exact same functions?
(i was told to add references)

So... Our goal: set up an algorithm that can take two stacks (a whole two... well, one will start empty) and a set of intigers, and sorts it out into ascending order in the one list.
We have two different programs for this: a checker program to detect whether our list is sorted or not.
                                         a push_swap program to perform the algorithm.
                                         
Checker: This will take in the arguments, but from there, you must give it instructions to sort out the lists, you can use these:
        
    SWAP:  swaps the first two intigers (shown as SA, SB or SS for both lists)
    PUSH:  pushes the top of the intigers to the other list (shown as PA to push to the first list or PB for the second)
    ROTATE:  rotates the whole list downwards so that the last intiger becomes the first (shown as RA, RB or RR)
    REVERSE ROTATE: rotates the whole list upwards, so that the first iniger becomes the last (shown as RRA, RRB or RRR)

if the instructions you give sorts that list nicely, you will recieve an OK, if not... Sorry you get a KO (not literally at least)

Push_Swap: This one will take the arguments, sort out the list one its own (you gotta make it learn to do that) and shows the instructions that it pulled off to sort out that list.

Sounds about right, right? Except WAIT!!!! THERE'S MORE!

These programs have to account for some certain things: 
                                                        
  - [x] We want to sort intigers, so no letters or other ascii values allowed!
                                                        
  - [x] We can't have duplicates, triplicates etc. of the same intigers.
                                                        
  - [x] All intigers have to end somewhere, so we can't have any intigers greater than the MAXINT or lower than the MININT.
                                                        
  - [x] No arguments WILL result in a complete ignore from the program
                                                        
  - [x] The checker is only able to use the instructions mentioned. bring up any imaginary instruction, and it won't work!
                                                         
  - [x] Only one space allowed between the arguments... clingy guys, much?
                                                        
  - [ ] As for only the Push_Swap: There has to ba as few instructions the program should dole out (we want an efficient one)

Sounds a little better...
