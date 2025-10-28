int __fastcall get_temp(int a1)
{
  int v1; // r6
  int *v2; // r0
  int *v3; // r7
  int *v4; // r7
  int v5; // r4
  int v6; // t1
  int *v7; // r3
  int v8; // r2
  int v9; // t1
  int *v10; // r3
  int v11; // r2
  int v12; // t1
  int result; // r0
  int v14; // r4
  int v15; // r6
  int *all_created_runtime; // r0
  int *v17; // r7
  int *v18; // r7
  signed int v19; // r4
  int v20; // t1
  signed int *v21; // r3
  signed int v22; // r2
  signed int v23; // t1
  signed int *v24; // r3
  signed int v25; // r2
  signed int v26; // t1
  int v27; // [sp+4h] [bp-E0h] BYREF
  signed int *v28; // [sp+8h] [bp-DCh] BYREF
  int *v29; // [sp+Ch] [bp-D8h]
  signed int *v30; // [sp+10h] [bp-D4h]
  int *v31; // [sp+14h] [bp-D0h]
  int v32; // [sp+20h] [bp-C4h]
  int v33; // [sp+24h] [bp-C0h]

  switch ( a1 )
  {
    case 0:
      v15 = 0;
      v27 = 0;
      all_created_runtime = (int *)get_all_created_runtime(&v27);
      v17 = all_created_runtime;
      if ( v27 <= 0 || (read_status_from_monitor(&v28, *all_created_runtime), v27 <= 0) )
      {
        v14 = 0x80000000;
        goto LABEL_18;
      }
      v18 = v17 - 1;
      v19 = 0x80000000;
      do
      {
        v20 = v18[1];
        ++v18;
        read_status_from_monitor(&v28, v20);
        if ( v32 > 0 )
        {
          v21 = v28;
          do
          {
            v23 = *v21++;
            v22 = v23;
            if ( v19 < v23 )
              v19 = v22;
          }
          while ( &v28[v32] != v21 );
        }
        if ( v33 > 0 )
        {
          v24 = v30;
          do
          {
            v26 = *v24++;
            v25 = v26;
            if ( v19 < v26 )
              v19 = v25;
          }
          while ( &v30[v33] != v24 );
        }
        ++v15;
      }
      while ( v15 < v27 );
      result = v19;
      break;
    case 1:
      result = sub_55D98();
      break;
    case 2:
      v14 = sub_55FEC();
      goto LABEL_18;
    case 3:
      v1 = 0;
      v27 = 0;
      v2 = (int *)get_all_created_runtime(&v27);
      v3 = v2;
      if ( v27 <= 0 || (read_status_from_monitor(&v28, *v2), v27 <= 0) )
      {
        v14 = 0x7FFFFFFF;
LABEL_18:
        result = v14;
      }
      else
      {
        v4 = v3 - 1;
        v5 = 0x7FFFFFFF;
        do
        {
          v6 = v4[1];
          ++v4;
          read_status_from_monitor(&v28, v6);
          if ( v32 > 0 )
          {
            v7 = v29;
            do
            {
              v9 = *v7++;
              v8 = v9;
              if ( v5 >= v9 )
                v5 = v8;
            }
            while ( &v29[v32] != v7 );
          }
          if ( v33 > 0 )
          {
            v10 = v31;
            do
            {
              v12 = *v10++;
              v11 = v12;
              if ( v5 >= v12 )
                v5 = v11;
            }
            while ( &v31[v33] != v10 );
          }
          ++v1;
        }
        while ( v1 < v27 );
        result = v5;
      }
      break;
    default:
      result = sub_56230(a1);
      break;
  }
  return result;
}
