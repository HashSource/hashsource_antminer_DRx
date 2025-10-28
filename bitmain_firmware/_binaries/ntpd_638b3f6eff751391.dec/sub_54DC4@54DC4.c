FILE *__fastcall sub_54DC4(FILE *result)
{
  FILE *v1; // r5
  char *IO_buf_base; // r3
  _DWORD *i; // r4
  int v4; // r3

  v1 = result;
  if ( !result || result->_flags != 1281586296 )
    result = (FILE *)off_7C9FC(
                       "./../lib/isc/log.c",
                       1035,
                       0,
                       "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16"
                       " | ('t') << 8 | ('x')))))");
  IO_buf_base = v1->_IO_buf_base;
  v1->_IO_buf_base = IO_buf_base + 1;
  if ( IO_buf_base )
    sub_516D8("./../lib/isc/log.c", 1037, "((*((&lctx->lock)))++ == 0 ? 0 : 34) == 0");
  for ( i = (_DWORD *)*((_DWORD *)v1->_IO_buf_end + 2); i; i = (_DWORD *)i[10] )
  {
    while ( 1 )
    {
      if ( i[1] == 3 )
      {
        result = (FILE *)i[4];
        if ( result )
          break;
      }
      i = (_DWORD *)i[10];
      if ( !i )
        goto LABEL_12;
    }
    result = (FILE *)fclose(result);
    i[4] = 0;
  }
LABEL_12:
  v4 = (int)(v1->_IO_buf_base - 1);
  v1->_IO_buf_base = (char *)v4;
  if ( v4 )
    sub_516D8("./../lib/isc/log.c", 1047, "(--(*((&lctx->lock))) == 0 ? 0 : 34) == 0");
  return result;
}
