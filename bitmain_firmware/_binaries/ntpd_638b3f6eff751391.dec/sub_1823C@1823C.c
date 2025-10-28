int sub_1823C()
{
  int v0; // r4
  const unsigned __int16 **v1; // r0
  char *v2; // r2
  int v3; // t1

  v0 = (unsigned __int8)nptr;
  if ( nptr )
  {
    v1 = _ctype_b_loc();
    v2 = &nptr;
    while ( ((*v1)[v0] & 0x2000) != 0 )
    {
      v3 = (unsigned __int8)*++v2;
      v0 = v3;
      if ( !v3 )
        goto LABEL_6;
    }
    LODWORD(dbl_CA670) = sub_4F4E8(&nptr);
    return 387;
  }
  else
  {
LABEL_6:
    LODWORD(dbl_CA670) = 410;
    return 410;
  }
}
