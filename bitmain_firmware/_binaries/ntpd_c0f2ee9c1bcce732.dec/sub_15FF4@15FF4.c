int *__fastcall sub_15FF4(int *result)
{
  int *v1; // r3

  if ( (int *)dword_7CF44 == result )
  {
    dword_7CF44 = *result;
    return (int *)sub_10F54(result[5]);
  }
  if ( !dword_7CF44 )
    return result;
  v1 = *(int **)dword_7CF44;
  if ( *(int **)dword_7CF44 == result )
  {
    v1 = (int *)dword_7CF44;
LABEL_8:
    *v1 = *result;
    return (int *)sub_10F54(result[5]);
  }
  while ( v1 )
  {
    if ( (int *)*v1 == result )
      goto LABEL_8;
    v1 = (int *)*v1;
  }
  return result;
}
