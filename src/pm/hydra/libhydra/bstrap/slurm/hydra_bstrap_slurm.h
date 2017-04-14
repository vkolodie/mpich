#ifndef HYDRA_BSTRAP_SLURM_H_INCLUDED
#define HYDRA_BSTRAP_SKURM_H_INCLUDED

#include "hydra_base.h"

HYD_status HYDI_bstrap_slurm_launch(const char *hostname, const char *launch_exec, char **args,
                                  int *fd_stdin, int *fd_stdout, int *fd_stderr, int *pid,
                                  int debug);
HYD_status HYDI_bstrap_slurm_finalize(void);

#endif /* HYDRA_BSTRAP_SSH_H_INCLUDED */
