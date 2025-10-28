void __fastcall sub_368FC(int a1, char *s, int a3, _BYTE *a4)
{
  char *v8; // r5

  if ( *a4 )
  {
    if ( a3 )
    {
      sub_36864(a1, "{");
      *a4 = 0;
      v8 = (char *)sub_365BC(s, a3);
LABEL_6:
      sub_36864(a1, "\"");
      sub_36864(a1, v8);
      sub_36864(a1, "\":[");
      goto LABEL_8;
    }
    *a4 = 0;
    v8 = (char *)sub_365BC(s, 0);
  }
  else
  {
    if ( a3 )
    {
      sub_36864(a1, ",");
      v8 = (char *)sub_365BC(s, 1);
      goto LABEL_6;
    }
    v8 = (char *)sub_365BC(s, 0);
  }
  sub_36864(a1, "CMD=");
  sub_36864(a1, v8);
  sub_36864(a1, (char *)&word_5E14C);
LABEL_8:
  if ( v8 != s )
    free(v8);
}
