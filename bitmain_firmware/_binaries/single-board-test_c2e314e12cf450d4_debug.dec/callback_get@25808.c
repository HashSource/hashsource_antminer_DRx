int __cdecl callback_get(void *data)
{
  if ( *((_DWORD *)data + 257) >= *((_DWORD *)data + 256) )
  {
    *((_DWORD *)data + 257) = 0;
    *((_DWORD *)data + 256) = (*((int (__fastcall **)(void *, int, _DWORD))data + 258))(
                                data,
                                1024,
                                *((_DWORD *)data + 259));
    if ( !*((_DWORD *)data + 256) || *((_DWORD *)data + 256) == -1 )
      return -1;
  }
  return (unsigned __int8)*((_BYTE *)data + (*((_DWORD *)data + 257))++);
}
