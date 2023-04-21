#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sysmon_remove_manu(char *comm)
{
    char *manu[] = {"rg-", "rg_"};
    int manu_len;
    int match_id;
    int comm_len;
    int i, j;
    char *p_tmp = NULL;

    match_id = -1;

    for (i = 0; i < (sizeof(manu) / sizeof(manu[0])); i++) {
        manu_len = strlen(manu[i]);
        if (strncmp(comm, manu[i], manu_len) == 0) {
            match_id = i;
            break;
        }
        p_tmp = strstr(comm, manu[i]);
        if (p_tmp != NULL) {
            printf("%s\n", p_tmp);
            for (j = strlen(manu[i]); j <= (strlen(p_tmp)); j++) {
                p_tmp[j - strlen(manu[i])] = p_tmp[j];
            }
#if 0
            for (j = 0; j < (strlen(manu[i])); j++) {
                p_tmp[j] = ' ';
            }
#endif
            printf("%s\n", p_tmp);
            match_id = -1;
            break;
        }
    }

    if (match_id == -1) {
        return;
    }

    comm_len = strlen(comm);

    for (i = manu_len; i <= comm_len; i++) {
        comm[i - manu_len] = comm[i];
    }
}

int main()
{
    char buf[] = "Starting rg_sysmon    [OK]";

    sysmon_remove_manu(buf);

    printf("cut_str = %s\n", buf);

    return 0;
}



