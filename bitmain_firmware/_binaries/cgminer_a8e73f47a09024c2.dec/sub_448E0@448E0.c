void __fastcall sub_448E0(int a1)
{
  int v2; // r4
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = 22;
  do
  {
    if ( sub_437FC(12) < 0 )
    {
      sub_43828(12, a1);
      return;
    }
    sub_30168();
    --v2;
  }
  while ( v2 );
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
  {
    snprintf(v3, 0x800u, "%s: i2c always busy, break\n", "i2c_write");
    sub_3F178(3, v3, 0);
  }
}
