unsigned int __fastcall sub_2DE88(unsigned int result, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v7; // r10
  FILE *v10; // r8
  unsigned int v11; // r7
  const char *v12; // r9
  const char *v13; // r10
  const char *v14; // r11
  const char *v15; // r5
  const char *v16; // r0
  const char *v17; // [sp+18h] [bp-14h]
  const char *v18; // [sp+1Ch] [bp-10h]
  int v19[3]; // [sp+20h] [bp-Ch] BYREF

  v7 = result;
  if ( dword_CB588 )
  {
    sub_4CBA8(v19);
    sub_1DAE8((int)&dword_80034, v19[0]);
    v10 = (FILE *)dword_80034;
    result = v19[0] % 0x15180u;
    v11 = v19[0] / 0x15180u + 15020;
    v19[0] %= 0x15180u;
    if ( dword_80034 )
    {
      v12 = (const char *)sub_4F124(result, v19[1], 0, 3, 0);
      v13 = (const char *)sub_50CD0(v7);
      if ( a2 )
        v18 = (const char *)sub_50CD0(a2);
      else
        v18 = "-";
      v14 = (const char *)sub_4F124(*a3, a3[1], 0, 9, 0);
      v17 = (const char *)sub_4F124(*a4, a4[1], 0, 9, 0);
      v15 = (const char *)sub_4F124(*a5, a5[1], 0, 9, 0);
      v16 = (const char *)sub_4F124(*a6, a6[1], 0, 9, 0);
      fprintf(v10, "%lu %s %s %s %s %s %s %s\n", v11, v12, v13, v18, v14, v17, v15, v16);
      return fflush((FILE *)dword_80034);
    }
  }
  return result;
}
