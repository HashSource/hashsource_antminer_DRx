_DWORD *__fastcall sub_FAF4(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = (_DWORD *)sub_10D64(24);
  *v4 = a1;
  if ( !a2 )
    a2 = sub_4F4E8(&unk_665CC);
  v4[2] = a2;
  v4[4] = 387;
  return v4;
}
