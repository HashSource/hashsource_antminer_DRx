_DWORD *__fastcall sub_1155C(const void *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  int v5; // r2
  int v6; // r1

  v2 = (_DWORD *)sub_4F524(188);
  v3 = v2;
  if ( a1 )
  {
    memcpy(v2, a1, 0xBCu);
  }
  else
  {
    memset(v2, 0, 0xBCu);
    v3[2] = -1;
    v3[3] = -1;
    *((_WORD *)v3 + 69) = word_7CE30;
  }
  v5 = dword_7CE34;
  v6 = dword_CB548;
  v3[4] = dword_7CE34;
  dword_7CE34 = v5 + 1;
  v3[39] = v6;
  return v3;
}
