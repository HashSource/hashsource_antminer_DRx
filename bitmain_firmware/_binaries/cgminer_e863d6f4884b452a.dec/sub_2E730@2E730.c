void __fastcall sub_2E730(unsigned int *a1, char *s, int a3, _BYTE *a4)
{
  char *v6; // r5

  if ( *a4 )
  {
    if ( !a3 )
    {
      *a4 = 0;
LABEL_4:
      v6 = (char *)sub_2E618(s, a3);
      sub_2E530(a1, "CMD=");
      sub_2E530(a1, v6);
      sub_2E530(a1, "|");
      goto LABEL_5;
    }
    sub_2E530(a1, "{");
    *a4 = 0;
    v6 = (char *)sub_2E618(s, 1);
  }
  else
  {
    if ( !a3 )
      goto LABEL_4;
    sub_2E530(a1, ",");
    v6 = (char *)sub_2E618(s, 1);
  }
  sub_2E530(a1, "\"");
  sub_2E530(a1, v6);
  sub_2E530(a1, "\":[");
LABEL_5:
  if ( s != v6 )
    j_free(v6);
}
