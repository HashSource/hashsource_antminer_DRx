void __fastcall sub_43514(int a1)
{
  int v2; // r4
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = 22;
  do
  {
    if ( sub_42544(12) < 0 )
    {
      sub_42570(12, a1);
      return;
    }
    sub_2FF48();
    --v2;
  }
  while ( v2 );
  if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
  {
    snprintf(v3, 0x800u, "%s: i2c always busy, break\n", "i2c_write");
    sub_3F1C0(3, v3, 0);
  }
}
