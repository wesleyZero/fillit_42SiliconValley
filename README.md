# 'Fillit' a Tetris-like game in C. 

## 42 Silicon Valley
This project was done at a free coding school called '42 Silicon Valley', which was unfortunately shut down permanently after the 2020 pandemic. It originally started in france, this is the [french '42' school's website](https://42.fr/en/homepage/). The US 42 schools website was shutdown but their [old instagram](https://www.instagram.com/42siliconvalley/?hl=en) is still up if you are curious what the school was about.

#### How did this coding school work?
At 42 you were not allowed to use almost any libraries whatsoever. You had to build everything from scratch. 42 had no in-person instructors, it was a self taught school.

## Description 

To see the school's project instructions read the [PDF Instructions](https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/fillit.pdf). To see my logic, see the [Logic Flow Chart](https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/42SV_fillit/Fillit_FLOWCHART.pdf). For a list of (nearly) all functions check out the [Header File](https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/42SV_fillit/fillit.h). The main function is located in the [fillit.c](https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/42SV_fillit/fillit.c) file. 

### Overview 
The program is based off the idea of 'Tetris' where you are given a set of 'tetriminos'. 

<table><tr><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/tetris.png?raw=true" align="left" style="width: 100%" />  


</td><td valign="top" width="50%">

The program was designed with inspiration to the classic game 'Tetris'. Where your goal is to make the smallest square possible with a given set of tetriminos pieces.   


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">



### Input example  
The input to the program would look like this. '#' characters to describe the existence of a block. '.' characters to describe the existence of an empty space.  


</td><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/example_input.png?raw=true" align="left" style="width: 100%" />  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/input_rules.png?raw=true" align="left" style="width: 100%" />  


</td><td valign="top" width="50%">



### Input rules  
This was the description of the tetriminos, so I  knew that I had to validate all of these properties.   


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">



### I/O  
The tetriminos will be given in sequence. Their labels will be alphabetical in the order they were input i.e. 'A' then 'B' then 'C' ...  
  

The **goal of the program** will then need to output the smallest possible square for the provided tetriminos, designating each block with it's respective label.  
  

For invalid input, the program simply outputs 'error' without any newline character.  


</td><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/example_IO.png?raw=true" align="left" style="width: 100%" />  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/logic_flow_0.png?raw=true" align="left" style="width: 100%" />  


</td><td valign="top" width="50%">



### Check the input  
First step is to check if the input is valid so that I can work with it.  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">



### Parse input and classify the pieces  
For a valid input, find out what type of tetriminos piece it is, and find out how it's oriented.   


</td><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/logic_flow_1.png?raw=true" align="left" style="width: 100%" />  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/block_types_3.png?raw=true" align="left" style="width: 100%" />  


</td><td valign="top" width="50%">

The pieces can come in 5 different **shapes**...  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">

... and each shape can come in a number of different **rotations**. Depending on symmetry, some of these rotations are equivalent.   


</td><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/rotations_2.png?raw=true" align="left" style="width: 100%" />  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/logic_flow_2.png?raw=true" align="left" style="width: 100%" />  


</td><td valign="top" width="50%">



### Find the smallest square the pieces can fit into  
Move the given pieces around on a virtual board. Use a backtracking algorithm to traverse the possible solutions in a decision tree. Where each decision is the location of a placed piece.  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">



### Main function  
If the input is valid, then search for a solution  
  

[See code](https://github.com/wesleyZero/fillit_42SiliconValley/blob/690b5efd5b223078b6ad65c437d0e042edfcf01b/42SV_fillit/fillit.c#L27)  


</td><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/code_main.png?raw=true" align="left" style="width: 100%" />  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/code_valid_tetris2.png?raw=true" align="left" style="width: 100%" />  


</td><td valign="top" width="50%">



### Is the input valid?  
Parse the input, check to make sure that each piece is a valid tetriminos block.  
  

[See code](https://github.com/wesleyZero/fillit_42SiliconValley/blob/be466d8cfce0fcaeb8e8fa5ef742f9af23bd2cba/42SV_fillit/valid_tetris.c#L51)  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">



### Primary logic  
While the backtracking algorithm doesn't give you a solution, increase the virtual board size (the 'map') until the backtracking algorithm can find a solution.  
  

[See code](https://github.com/wesleyZero/fillit_42SiliconValley/blob/be466d8cfce0fcaeb8e8fa5ef742f9af23bd2cba/42SV_fillit/solver.c#L113)  


</td><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/code_0.png?raw=true" align="left" style="width: 100%" />  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/fillit_42SiliconValley/blob/main/README_RESOURCES/code_2.png?raw=true" align="left" style="width: 100%" />  


</td><td valign="top" width="50%">



### Backtracking algorithm   
Check each valid placement of the pieces, in the order that they are preferred for a solution. Once a solution is found, return to the parent caller and it can get output onto the terminal. The variable *tetris_map* stores the current placement of pieces on the virtual board. If a solution is found, it's stored in the variable called *map* and returned.  
  

*The base case is on line 92*  
  

*The recursive case is on line 103.*  
  

*No solution case on line 110*  
  

[See code](https://github.com/wesleyZero/fillit_42SiliconValley/blob/be466d8cfce0fcaeb8e8fa5ef742f9af23bd2cba/42SV_fillit/solver.c#L84)  


</td></tr></table>
<br />

