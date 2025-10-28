unsigned int __fastcall sub_497AC(unsigned int result, _DWORD *a2, int a3, int a4)
{
  unsigned int v4; // r10
  const char *v8; // r9
  int v9; // r4
  const char *v10; // r8
  int v11; // r12

  v4 = result;
  if ( result != 1 )
  {
    if ( result <= 0xF )
      return result;
    fprintf((FILE *)dword_C9A98, off_7B9EC[0], *(_DWORD *)(result + 28), a2[13], a2[6]);
    v8 = (const char *)&unk_665CC;
    if ( (a2[4] & 0x1000000) == 0 )
      goto LABEL_5;
    goto LABEL_23;
  }
  v8 = "\t\t\t\t- ";
  if ( (a2[4] & 0x1000000) != 0 )
LABEL_23:
    fprintf((FILE *)dword_C9A98, off_7B9F4[0], v8);
LABEL_5:
  v9 = a3 + 8;
  if ( a4 <= 1 )
    fprintf((FILE *)dword_C9A98, off_7B9E4[0], v8);
  else
    fprintf((FILE *)dword_C9A98, off_7B9E0[0], v8);
  v10 = "\t";
  if ( v4 == 1 )
    v10 = "\t\t\t\t  ";
  while ( 1 )
  {
    v11 = *(_DWORD *)(v9 - 4);
    if ( v11 == 0x80000000 )
    {
      fprintf((FILE *)dword_C9A98, off_7B9F0[0], v10, *(_DWORD *)(v9 - 8));
      goto LABEL_12;
    }
    if ( *(_DWORD *)(v9 - 8) != 0x80000000 )
      break;
    fprintf((FILE *)dword_C9A98, off_7B9F8[0], v10, *(_DWORD *)(v9 - 4));
LABEL_12:
    --a4;
    v9 += 8;
    if ( a4 <= 0 )
      goto LABEL_18;
LABEL_13:
    fputs(off_7B9E8[0], (FILE *)dword_C9A98);
  }
  if ( v11 != 0x7FFFFFFF )
  {
    fprintf((FILE *)dword_C9A98, off_7B9D8[0]);
    goto LABEL_12;
  }
  --a4;
  fprintf((FILE *)dword_C9A98, off_7B9DC[0], v10, *(_DWORD *)(v9 - 8));
  v9 += 8;
  if ( a4 > 0 )
    goto LABEL_13;
LABEL_18:
  result = fputc(10, (FILE *)dword_C9A98);
  if ( v4 > 0xF )
    return (*(int (__fastcall **)(unsigned int, int))(v4 + 84))(v4, 1);
  return result;
}
