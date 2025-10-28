int __fastcall sub_3F1E4(int a1)
{
  int v1; // r4
  unsigned __int8 *v2; // r5
  unsigned __int8 *v4; // r6
  int v5; // t1
  int result; // r0
  int v7; // t1

  v1 = 0;
  v2 = (unsigned __int8 *)&unk_73EF0;
  v4 = (unsigned __int8 *)&unk_73EF0;
  sub_3B2F8();
  do
  {
    v5 = *v4++;
    if ( v5 == 1 )
    {
      byte_6FC24[v1] = 0;
      byte_72AF4[v1] = 0;
      sub_2A3B0(a1 + 4602 + (v1 << 6));
    }
    ++v1;
  }
  while ( v1 != 4 );
  sub_2A3B0(a1 + 4538);
  *(_DWORD *)(dword_6FAEC + 52) = 0xFFFF;
  sub_2A7F4();
  sub_3B234();
  sleep(1u);
  *(_DWORD *)(dword_6FAEC + 52) = 0;
  result = sub_2A7F4();
  *(_DWORD *)(dword_6FAEC + 60) = 26;
  do
  {
    v7 = *v2++;
    if ( v7 == 1 )
      result = sub_3E590(a1, 3000000);
  }
  while ( v2 != (unsigned __int8 *)&unk_73EF4 );
  return result;
}
