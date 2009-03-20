/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*
 *  (C) 2008 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#ifndef PMI_SERV_H_INCLUDED
#define PMI_SERV_H_INCLUDED

/* Currently we only have one command */
enum HYD_PMCD_pmi_proxy_cmds {
    KILLALL_PROCS
};

extern int HYD_PMCD_pmi_serv_listenfd;

HYD_Status HYD_PMCD_pmi_serv_cb(int fd, HYD_Event_t events);
HYD_Status HYD_PMCD_pmi_serv_cleanup(void);
void HYD_PMCD_pmi_serv_signal_cb(int signal);

#endif /* PMI_SERV_H_INCLUDED */
