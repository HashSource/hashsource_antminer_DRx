FILE *__fastcall sub_124E4(FILE *result, char *a2)
{
  FILE *v2; // r5
  char *IO_buf_base; // r3
  _DWORD *i; // r4
  int v6; // r3

  v2 = result;
  if ( !result || result->_flags != 1281586296 )
    result = (FILE *)off_21DCC(
                       "./../lib/isc/log.c",
                       956,
                       0,
                       "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16"
                       " | ('t') << 8 | ('x')))))");
  IO_buf_base = v2->_IO_buf_base;
  v2->_IO_buf_base = IO_buf_base + 1;
  if ( IO_buf_base )
    sub_FFB4("./../lib/isc/log.c", 958, "((*((&lctx->lock)))++ == 0 ? 0 : 34) == 0");
  v2->_IO_write_end = a2;
  if ( !a2 )
  {
    for ( i = (_DWORD *)*((_DWORD *)v2->_IO_buf_end + 2); i; i = (_DWORD *)i[10] )
    {
      if ( i[1] == 3 && (i[3] & 0x1000) != 0 )
      {
        result = (FILE *)i[4];
        if ( result )
        {
          result = (FILE *)fclose(result);
          i[4] = 0;
        }
      }
    }
  }
  v6 = (int)(v2->_IO_buf_base - 1);
  v2->_IO_buf_base = (char *)v6;
  if ( v6 )
    sub_FFB4("./../lib/isc/log.c", 974, "(--(*((&lctx->lock))) == 0 ? 0 : 34) == 0");
  return result;
}
