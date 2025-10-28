int eeprom_load()
{
  int v0; // r1
  int v1; // r6
  int v2; // r3
  int v3; // r4

  v0 = dword_18C508[0];
  if ( dword_18C508[0] )
  {
    if ( *(_BYTE *)(dword_18C508[0] + 80) )
      return 0;
    if ( dword_18C50C <= 0 )
    {
LABEL_10:
      v1 = 0;
      *(_BYTE *)(v0 + 80) = 1;
      return v1;
    }
  }
  else
  {
    if ( sub_AF27C() )
      return -1;
    v0 = dword_18C508[0];
    if ( dword_18C50C <= 0 )
      goto LABEL_10;
  }
  v2 = 0;
  v1 = 0;
  LOBYTE(v3) = 0;
  while ( 1 )
  {
    v3 = (unsigned __int8)(v3 + 1);
    v1 |= eeprom_load_one_chain(dword_18C508[v2 + 2], v0);
    v2 = v3;
    if ( v3 >= dword_18C50C )
      break;
    v0 = dword_18C508[0];
  }
  if ( !v1 )
  {
    v0 = dword_18C508[0];
    goto LABEL_10;
  }
  return v1;
}
