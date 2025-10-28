int __fastcall hash_str(_BYTE *a1)
{
  int v2; // [sp+10h] [bp+10h]

  v2 = 5381;
  while ( *a1 )
    v2 = 33 * v2 + (unsigned __int8)*a1++;
  return v2;
}
