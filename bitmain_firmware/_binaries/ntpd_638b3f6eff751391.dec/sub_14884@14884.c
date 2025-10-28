int __fastcall sub_14884(int result, int a2)
{
  int (__fastcall *v2)(int, _DWORD **); // r4
  _DWORD *v4; // [sp+0h] [bp-Ch] BYREF
  char v5; // [sp+4h] [bp-8h]

  v2 = (int (__fastcall *)(int, _DWORD **))result;
  v5 = 1;
  v4 = (_DWORD *)dword_CA654;
  if ( dword_CA654 )
  {
    do
    {
      result = v2(a2, &v4);
      v4 = (_DWORD *)*v4;
    }
    while ( v4 );
  }
  return result;
}
