_DWORD *__fastcall sub_3632C(_DWORD *result)
{
  _DWORD *v1; // r2
  _DWORD *v2; // r3
  int v3; // t1

  v1 = &unk_72F00;
  v2 = result;
  do
  {
    v3 = v1[1];
    ++v1;
    v2[34] = v3;
    ++v2;
  }
  while ( v1 != (_DWORD *)&unk_72F20 );
  result[1] = 0;
  *result = 0;
  return result;
}
