int __fastcall sub_56698(int *a1, char *a2, size_t a3)
{
  int result; // r0
  const char *v7; // r0
  int v8; // [sp+0h] [bp-28h]
  _BYTE v9[8]; // [sp+4h] [bp-24h] BYREF
  int v10; // [sp+Ch] [bp-1Ch]
  int v11; // [sp+10h] [bp-18h]

  sub_57FF4(v9);
  if ( !sub_5652C(a1, (int)v9) && v10 != v11 )
    return sub_58A00(v9, 0);
  v7 = sub_55CA4((_DWORD *)dword_C9C48, 12, 1001, "<unknown address, family %u>", v8);
  result = snprintf(a2, a3, v7, *a1);
  a2[a3 - 1] = 0;
  return result;
}
