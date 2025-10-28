int sub_89A0()
{
  FILE *v0; // r4
  int result; // r0
  FILE *v2; // r0
  int v3; // r4
  int v4; // [sp+4h] [bp-4h] BYREF

  if ( sub_8988("/sys/class/gpio/gpio921") )
  {
    v2 = fopen("/sys/class/gpio/gpio921/value", "r");
    v3 = (int)v2;
    if ( v2 )
    {
      _isoc99_fscanf(v2, "%d", &v4);
      close(v3);
      result = v4;
      if ( v4 )
        return 1;
    }
    else
    {
      puts("Open read recovery button failure");
      return -1;
    }
  }
  else
  {
    v0 = fopen("/sys/class/gpio/export", "w");
    if ( v0 )
    {
      if ( fwrite("921", 3u, 1u, v0) != 1 )
        puts("File Write Error!");
      fclose(v0);
      return -1;
    }
    else
    {
      puts("Open read gpio/export");
      return -1;
    }
  }
  return result;
}
