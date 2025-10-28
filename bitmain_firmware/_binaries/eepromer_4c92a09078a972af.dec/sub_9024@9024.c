void sub_9024()
{
  int v0; // r3
  int v1; // r3
  const char *v2; // r0

  v0 = dword_11CB4;
  if ( dword_11CB4 <= 70 )
  {
    switch ( dword_11CB4 )
    {
      case 10:
      case 50:
        v2 = "\\";
        goto LABEL_5;
      case 20:
      case 60:
        v2 = "|";
        goto LABEL_5;
      case 30:
      case 70:
        v2 = "/";
        goto LABEL_5;
      case 40:
        v2 = "-";
LABEL_5:
        fwrite(v2, 1u, 1u, (FILE *)stderr);
        fflush((FILE *)stderr);
        rewind((FILE *)stderr);
        v0 = dword_11CB4;
        break;
      default:
        break;
    }
    v1 = v0 + 1;
  }
  else
  {
    v1 = 1;
  }
  dword_11CB4 = v1;
}
