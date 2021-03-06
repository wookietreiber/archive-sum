#ifndef ARCHIVE_SUM_H
#define ARCHIVE_SUM_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <openssl/evp.h>
#include <string.h>

typedef enum { NORMAL, QUIET, STATUS } verbosity_t;

int archive_check(const EVP_MD *md, const char *check_dir, char *archive,
                  const verbosity_t verbosity);

int archive_sum(const EVP_MD *md, char *filename);

#endif
