/*
 * Copyright OpenSSL 2007-2018
 * Copyright Nokia 2007-2018
 * Copyright Siemens AG 2015-2018
 *
 * Contents licensed under the terms of the OpenSSL license
 * See https://www.openssl.org/source/license.html for details
 *
 * SPDX-License-Identifier: OpenSSL
 *
 * CMP tests by Martin Peylo, Tobias Pankert, and David von Oheimb.
 */

#ifndef HEADER_CMP_TEST_LIB_H
# define HEADER_CMP_TEST_LIB_H

# include <openssl/cmp.h>
# include <openssl/pem.h>
# include <openssl/rand.h>
# include "testutil.h"

# define TEST_CMP_REFVALUE_LENGTH 15 /* arbitary value */
EVP_PKEY *load_pem_key(const char *file);
X509 *load_pem_cert(const char *file);
X509_REQ *load_csr(const char *file);
CMP_PKIMESSAGE *load_pkimsg(const char *file);
int valid_asn1_encoding(const CMP_PKIMESSAGE *msg);
EVP_PKEY *gen_rsa(void);
int STACK_OF_X509_cmp(const STACK_OF(X509) *sk1, const STACK_OF(X509) *sk2);
int STACK_OF_X509_push1(STACK_OF(X509) *sk, X509 *cert);

#endif /* HEADER_CMP_TEST_LIB_H */
