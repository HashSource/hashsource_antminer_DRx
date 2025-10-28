int sub_8974()
{
  FILE *v0; // r4
  int result; // r0
  FILE *v2; // r0
  FILE *v3; // r4
  int v4; // [sp+4h] [bp-4h] BYREF

  if ( sub_895C("/sys/class/gpio/gpio921") )
  {
    v2 = fopen("/sys/class/gpio/gpio921/value", "r");
    v3 = v2;
    if ( v2 )
    {
      _isoc99_fscanf(v2, "%d", &v4);
      fclose(v3);
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
