#ifndef _SWKKPROS_H_
#define _SWKKPROS_H_

#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define READ_BUF_SIZE 1024
#define BUF_FLUSH -1
#define WRITE_BUF_SIZE 1024
#define MYF_ORX 1
#define MYF_ANDQ 2

#define HISTOQ_FIL	".my_sh_shell_history"
#define MAX_HIST	4096

#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>

#define CONVERT_UNSIGNED	2
#define CXW_NORMAW	0
#define CWQ_CWPRO	3
#define CONV_LOWCASE	1

#define ACTIV_GETLINE 0
#define ACTIV_STROK 0

extern char **environ;

/**
 * struct liststr - as some uj my linked lists.
 * @num: tujihdwqh uihwdui sanduqw duiqwdhqwd.
 * @str: etgew fwdiwq duiqdhu iqdgqfw.
 * @next: the jsjd iowdj oijdwqioqwd.
 */

typedef struct liststr
{
	int num;
	char *str;
	struct liststr *next;
} list_t;

/**
 * struct passinfo - copiq djqwiodj wqdjqw djwqiodjwqiodjwqdjqowi.
 * @arg: qkioljdi iowdqj sadkmqwio dhjuiwqhd wqdi wqdiujsadoiwqd.
 * @argv: iodiuowqdj qwdoiqw oiqwdjoiqwifj wfuhuiqwfhwq.
 * @path: opiweqfjio wqdqio jdqiowdjw qdjuiq ghfquyiwqwfwqf.
 * @argc: lkiowjdio wqd iosajdi udhuiqwdq wiojwhg.
 * @line_count: lkiojsad asd iojdiuq hwduiwhdu wqdiuwquigfq.
 * @err_num: iosajd asd uhdwquihqwd uhudhsa udhaudiwqdqw.
 * @linecount_flag: theh said sadjsd idjwiudwq hgew.
 * @fname: koiwjdji idiji jdqiwodhjiuo gheeff.
 * @env: kowqdio qwijd iojisdfuihsd dfuwqdhqwqigg.
 * @environ: ioshjadsadsad ijdsw wqiud uiqhdqwudqw.
 * @history: trhjtyjh dfs fsdgerhefqw.
 * @alias:  htrhsdf sefewrhgy rethrefeewfw.
 * @env_changed: rthtrg desf sdegrthrtegh edfw ferhy.
 * @status: wqd wfeswg dfhg thrt hgefd wegreh rth wdfwegew.
 * @cmd_buf: rehgre sad fdsg rthrt htrdsf dsgdrfhtr hh ewf.
 * @cmd_buf_type: oiqwdj wqdiu uthgeh wqasuhjdsaudasd.
 * @readfd: kjqndu hwuiiqw dsfuhsduiahfwqud huiwqfdhwuifhuiqwf.
 * @histcount: ioqwdhjiu schuysacwijfqiogfh uiwhfduiwqd.
 */

typedef struct passinfo
{
	char *arg;
	char **argv;
	char *path;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *history;
	list_t *alias;
	char **environ;
	int env_changed;
	int status;

	char **cmd_buf;
	int cmd_buf_type;
	int readfd;
	int histcount;

} info_t;

/**
 * struct builtin - ciojuashduiad duiqwu duih duiwq.
 * @type: tkjsahdui sa uhsaduisad iudwiuhui uihsadui cuincuiwqncuiwqd.
 * @func: tiouasd uisahd uwduihwq fhfuiwhfuiwqfqw.
 */

typedef struct builtin
{
	char *type;
	int (*func)(info_t *);
} builtin_table;

#define INFO_INIT \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
		0, 0, 0}

int hseko(info_t *, char **);
int find_builtin(info_t *);
int is_cmd(info_t *, char *);
char *dup_chars(char *, int, int);
char *find_path(info_t *, char *, char *);
void find_cmd(info_t *);
void fork_cmd(info_t *);

void theproxman(int xval);
void thexmenteam(int xval);

int loophsh(char **);
int _epochwq(char);
int _putfd(char c, int fd);
int _dmwoq(char *str, int fd);
void _eputs(char *);

int _strlen(char *);
int _strcmp(char *, char *);
char *_strncpy(char *, char *, int);
char *_strncat(char *, char *, int);


char *_strchr(char *, char);
char *starts_with(const char *, const char *);
char *_strcat(char *, char *);

char *_strdup(const char *);
void _puts(char *);
int _putchar(char);

char *_strcpy(char *, char *);


char *_memset(char *, char, unsigned int);
char **strtow(char *, char *);
char **strtow2(char *, char);

void ffree(char **);
void *_realloc(void *, unsigned int, unsigned int);
int bfree(void **);

int intosketiv(info_t *);
int is_delim(char, char *);
int _isalpha(int);

int _acsoi(char *);
int _erratoi(char *);
void print_error(info_t *, char *);
int print_d(int, int);

char *conv_num(long int, int, int);
void del_comms(char *);
int _mycutr(info_t *);
int _myxcdq(info_t *);
int _mycmhelp(info_t *);

int _myhistory(info_t *);
int _myalias(info_t *);
void free_info(info_t *, int);
char *_getenv(info_t *, const char *);


int _myenv(info_t *);
int _lerpktenv(info_t *);
ssize_t get_danm(info_t *);

int _getline(info_t *, char **, size_t *);
void theHandler(int);
void cls_minfo(info_t *);
void scm_minfo(info_t *, char **);

int _myunsetenv(info_t *);
int poke_my_env(info_t *);
char **get_environ(info_t *);
int _unsetenv(info_t *, char *);
int _setenv(info_t *, char *, char *);

char *get_hi_cap(info_t *info);
int leak_hist(info_t *info);
int watch_hist(info_t *info);
int reco_vrog(info_t *);
int reco_strok(char **, char *);

int myfqa_list(info_t *info, char *buf, int linecount);
int resort_holgo(info_t *info);
int look_chain(info_t *, char *, size_t *);
void chan_mychain(info_t *, char *, size_t *, size_t, size_t);
int replic_alocio(info_t *);
list_t *add_node(list_t **, const char *, int);
list_t *add_node_end(list_t **, const char *, int);

size_t preak_lict_str(const list_t *);
int del_my_node(list_t **, unsigned int);
void free_list(list_t **);
size_t list_len(const list_t *);

void thesycoblob(int xval);
void actkisero(int xval);

char **list_to_strings(list_t *);
size_t preak_lict(const list_t *);
list_t *node_starts_with(list_t *, char *, char);

ssize_t get_node_index(list_t *, list_t *);


#endif
