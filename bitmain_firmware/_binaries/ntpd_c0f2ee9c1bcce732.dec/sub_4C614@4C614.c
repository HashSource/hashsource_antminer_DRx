char *__fastcall sub_4C614(int a1, int a2)
{
  char *result; // r0
  int v5; // r3
  char *v6; // [sp+4h] [bp-4h] BYREF

  v6 = 0;
  result = sub_423AC((char *)a1, 0);
  v5 = *(_DWORD *)(a1 + 12);
  if ( !a2 || (v5 & 0x4000) == 0 )
  {
    if ( (v5 & 0x1000) != 0 )
      sub_41D44(a1, &v6);
    else
      sub_41E3C(a1, &v6);
    sub_454C8(a1, a2, (int)v6);
    fflush((FILE *)dword_C9A98);
    result = (char *)ferror((FILE *)dword_C9A98);
    if ( result )
    {
      fputs(off_7B9B8[0], (FILE *)stderr);
      exit(1);
    }
  }
  return result;
}
