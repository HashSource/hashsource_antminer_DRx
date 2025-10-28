int __fastcall convert_port_to_ui_type(int a1)
{
  int v2; // [sp+Ch] [bp+Ch]

  v2 = 258;
  if ( a1 == 921 )
    return 256;
  if ( a1 == 943 )
    return 257;
  return v2;
}
