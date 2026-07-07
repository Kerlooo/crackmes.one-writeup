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