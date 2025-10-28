int sub_A8A0()
{
  int peer_certificate; // r4
  int subject_name; // r0
  char *v2; // r5
  int issuer_name; // r0
  char *v4; // r5

  peer_certificate = SSL_get_peer_certificate();
  if ( !peer_certificate )
    return puts(aNoCertificateI);
  puts("A digital certificate information:");
  subject_name = X509_get_subject_name(peer_certificate);
  v2 = (char *)X509_NAME_oneline(subject_name, 0, 0);
  printf("certificate: %s\n", v2);
  free(v2);
  issuer_name = X509_get_issuer_name(peer_certificate);
  v4 = (char *)X509_NAME_oneline(issuer_name, 0, 0);
  printf("Issued by the: %s\n", v4);
  free(v4);
  return X509_free(peer_certificate);
}
