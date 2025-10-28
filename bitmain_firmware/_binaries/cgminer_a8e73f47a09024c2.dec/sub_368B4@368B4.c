void __fastcall sub_368B4(int a1, char *s, int a3, _BYTE *a4)
{
  char *v8; // r5

  if ( *a4 )
  {
    if ( a3 )
    {
      sub_3681C(a1, "{");
      *a4 = 0;
      v8 = (char *)sub_36574(s, a3);
LABEL_6:
      sub_3681C(a1, "\"");
      sub_3681C(a1, v8);
      sub_3681C(a1, "\":[");
      goto LABEL_8;
    }
    *a4 = 0;
    v8 = (char *)sub_36574(s, 0);
  }
  else
  {
    if ( a3 )
    {
      sub_3681C(a1, ",");
      v8 = (char *)sub_36574(s, 1);
      goto LABEL_6;
    }
    v8 = (char *)sub_36574(s, 0);
  }
  sub_3681C(a1, "CMD=");
  sub_3681C(a1, v8);
  sub_3681C(a1, (char *)&word_62AA0);
LABEL_8:
  if ( v8 != s )
    free(v8);
}
