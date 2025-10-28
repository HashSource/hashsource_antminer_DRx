void __fastcall __noreturn sub_A3EC(int a1)
{
  int v1; // r0
  const char *v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int compression_methods; // r0

  puts("oops! stop by ctrl+c or kill!!!----------------------------------------");
  v1 = fileno((FILE *)dword_1C3C8);
  if ( flock(v1, 8) )
    v2 = "unlock fd_pid_conf failed!";
  else
    v2 = "unlock fd_pid_conf succeed!";
  puts(v2);
  fclose((FILE *)dword_1C3C8);
  sub_10F48((void *)dword_1D420);
  byte_1B2EC = 0;
  pthread_join(newthread, 0);
  pthread_join(dword_1F464, 0);
  pthread_join(dword_1C3CC, 0);
  sub_E49C(&unk_1B3A8);
  sub_E49C(&unk_1D410);
  SSL_shutdown(dword_26F98);
  SSL_free(dword_26F98);
  close(dword_258BC);
  v3 = SSL_CTX_free(dword_26F8C);
  CONF_modules_free(v3);
  v4 = ERR_remove_state(0);
  ENGINE_cleanup(v4);
  v5 = CONF_modules_unload(1);
  v6 = ERR_free_strings(v5);
  v7 = EVP_cleanup(v6);
  v8 = CRYPTO_cleanup_all_ex_data(v7);
  compression_methods = SSL_COMP_get_compression_methods(v8);
  sk_free(compression_methods);
  exit(0);
}
