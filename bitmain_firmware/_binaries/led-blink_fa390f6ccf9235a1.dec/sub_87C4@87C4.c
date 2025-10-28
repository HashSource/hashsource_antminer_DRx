int __fastcall sub_87C4(int a1)
{
  FILE *v2; // r0
  FILE *v3; // r5

  v2 = fopen("/var/run/led-blink.run", "w");
  v3 = v2;
  if ( !v2 )
    exit(-1);
  fprintf(v2, "%d\n", a1);
  return fclose(v3);
}
