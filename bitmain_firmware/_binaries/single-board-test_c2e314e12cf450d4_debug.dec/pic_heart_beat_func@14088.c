void __fastcall __noreturn pic_heart_beat_func(char *a1)
{
  char v1; // [sp+Ah] [bp+Ah]
  char v2; // [sp+Bh] [bp+Bh]

  v2 = *a1;
  v1 = a1[1];
  while ( 1 )
  {
    heart_beat_PIC16F1704(v2, v1);
    sleep(0xAu);
  }
}
