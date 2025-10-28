int __fastcall sub_4401C(_DWORD *a1, int (__fastcall *a2)(const char *, int, int), int a3, __int16 a4)
{
  if ( (a4 & 0x200) != 0 || a1 && *a1 <= 1u )
    return sub_439F0(a1, a4, 0, a2, a3);
  else
    return -1;
}
