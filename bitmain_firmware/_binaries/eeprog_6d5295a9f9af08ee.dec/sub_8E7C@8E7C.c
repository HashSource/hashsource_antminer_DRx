int __fastcall sub_8E7C(int a1, int a2, int a3, int a4)
{
  int v4; // r7
  unsigned int v8; // r5
  char v9; // r6
  int v10; // r0
  unsigned int v11; // r5

  v4 = a2;
  v8 = sub_92F0(a1, (unsigned __int16)a2);
  sub_8DBC(v8 >> 31, "read error", 127);
  if ( a4 )
    printf("\n %.4x|  %.2x ", v4, v8);
  else
    IO_putc(v8, (_IO_FILE *)stdout);
  v9 = 1;
  while ( 1 )
  {
    --a3;
    v10 = a1;
    if ( !a3 )
      break;
    while ( 1 )
    {
      v11 = sub_9298(v10);
      sub_8DBC(v11 >> 31, "read error", 135);
      if ( !a4 )
        break;
      ++v4;
      if ( (v9 & 0xF) != 0 )
      {
        if ( (v9 & 7) == 0 )
          printf("  ");
      }
      else
      {
        printf("\n %.4x|  ", v4);
      }
      printf("%.2x ", v11);
      --a3;
      ++v9;
      v10 = a1;
      if ( !a3 )
        goto LABEL_10;
    }
    IO_putc(v11, (_IO_FILE *)stdout);
  }
LABEL_10:
  if ( a4 )
    puts("\n");
  fflush((FILE *)stdout);
  return 0;
}
