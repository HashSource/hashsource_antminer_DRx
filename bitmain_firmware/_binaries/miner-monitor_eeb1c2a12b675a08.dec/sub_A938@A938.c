int sub_A938()
{
  int v0; // r0
  int v1; // r0
  int error_strings; // r0
  int v3; // r0
  int v4; // r0
  const char *v5; // r0
  int current_cipher; // r0
  const char *name; // r0

  v0 = SSL_library_init();
  v1 = OPENSSL_add_all_algorithms_noconf(v0);
  error_strings = SSL_load_error_strings(v1);
  v3 = TLSv1_client_method(error_strings);
  dword_26F8C = SSL_CTX_new(v3);
  if ( !dword_26F8C )
  {
    ERR_print_errors_fp(stdout);
    exit(1);
  }
  dword_26F98 = SSL_new();
  SSL_set_fd();
  if ( SSL_connect(dword_26F98) == -1
    || (v4 = SSL_get_current_cipher(dword_26F98), v5 = (const char *)SSL_CIPHER_get_name(v4), !strcmp("(NONE)", v5)) )
  {
    ERR_print_errors_fp(stderr);
    return -1;
  }
  else
  {
    current_cipher = SSL_get_current_cipher(dword_26F98);
    name = (const char *)SSL_CIPHER_get_name(current_cipher);
    printf("Connected with %s encryption\n", name);
    sub_A8A0();
    return 1;
  }
}
