int __fastcall sub_3FD38(int a1, const char *a2, const char *a3, int a4)
{
  int result; // r0
  int v6; // r3
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  if ( !*(_BYTE *)(a1 + 44) )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *(const char **)a1,
      "_k_unlink_tail",
      a2,
      a3,
      a4,
      "klist.c",
      "_k_unlink_tail",
      181);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  result = *(_DWORD *)(a1 + 16);
  if ( result )
  {
    v6 = *(_DWORD *)(result + 4);
    *(_DWORD *)(a1 + 16) = v6;
    if ( v6 )
      *(_DWORD *)(v6 + 8) = 0;
    else
      *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 4) = 0;
    --*(_DWORD *)(a1 + 28);
  }
  return result;
}
