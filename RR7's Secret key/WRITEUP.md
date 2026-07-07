# [RR7's Secret key - Writeup](https://crackmes.one/crackme/6a46f20c8a86e4c2c5525631)
## What tools I used:
- Ghidra 
- Windows terminal to run the crackme

## How the program works:
When you open the program it asks for a number, obviously if you don't get the right number you can't go to the next question. So I used [Ghidra](http://ghidra.net/) to analyze the main function and I saw that the program compare the user input with `0x21` (33 in decimal) and by that I found the first number. For the second number is the same thing, the program compare the user input with `0x66` (102 in decimal). 

## C decompiled source:
```c
int __cdecl main(int _Argc,char **_Argv,char **_Env)

{
  int local_10;
  int local_c;
  
  __main();
  printf("Enter Your Number : ");
  scanf("%i",&local_c);
  if (local_c == 0x21) {
    printf("Enter The Secret Key : ");
    scanf("%i",&local_10);
    if (local_10 == 0x66) {
      printf("Congratulations, you have completed the challenge!");
    }
  }
  return 0;
}
```

## Credits
I am just a passionate developer having fun learning reverse engineering. You can find more of my code and projects on my [GitHub](https://github.com/Kerlooo/).
