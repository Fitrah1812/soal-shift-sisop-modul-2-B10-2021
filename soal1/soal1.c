#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>
#include <syslog.h>
#include <string.h>
#include <wait.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>
#include <stdio.h>
#include <glob.h>
#include <time.h>

void download();
void remover();
void zipur();

int main() {
    //buat waktu
    char arr[80];
    time_t t_now = time(NULL);
    struct tm waktu = *localtime(&t_now);
    strftime(arr, sizeof(arr)-1, "%d-%m_%H:%M", &waktu);
    printf("%s\n", arr);
    //cek hasilnya
    while(strcmp(arr,"09-04_16:22")!=0)
    {
        sleep(2);
        t_now = time(NULL);
        waktu = *localtime(&t_now);
        strftime(arr, sizeof(arr)-1, "%d-%m_%H:%M", &waktu);
        printf("%s_%d\n", arr, strcmp(arr,"09-04_16:22"));
    }
    pid_t child_id;
    int status;
    child_id = fork();

    if (child_id < 0) {
        exit(EXIT_FAILURE); 
    }

    if (child_id == 0) {
        download();
    } 
    else 
    {
        while ((wait(&status)) > 0);
        pid_t tuch;
        int ret;
        tuch = fork();
        if(tuch < 0)
        {
            exit(EXIT_FAILURE);
        }
        if(tuch == 0)
        {
            char *argv[] = {"unzip", "Musik_for_Stevany.zip", NULL};
            execv("/bin/unzip", argv);
        }
        else
        {
            while ((wait(&ret)) > 0);
            pid_t tucha;
            int reta;
            tucha = fork();
            if(tucha < 0 )
            {
                exit(EXIT_FAILURE);
            }
            if(tucha == 0 )
            {
                char *argv[] = {"unzip", "Photo_for_Stevany.zip", NULL};
                execv("/bin/unzip", argv);
            }
            else
            {
                while ((wait(&reta)) > 0);
                pid_t mantep;
                int mantoel;
                mantep = fork();
                if(mantep < 0)
                {
                    exit(EXIT_FAILURE);
                }
                if(mantep == 0)
                {
                    char *argv[] = {"unzip", "Film_for_Stevany.zip", NULL};
                    execv("/bin/unzip", argv);
                }
                else
                {
                    while ((wait(&mantoel)) > 0);
                    pid_t wuhui;
                    int wuhut;
                    wuhui = fork();
                    if(wuhui < 0 )
                    {
                        exit(EXIT_FAILURE);
                    }
                    if(wuhui == 0 )
                    {
                        //isi
                        
                    }
                    else
                    {
                        while((wait(&wuhut)) > 0 );
                        pid_t wuhuit;
                        int wuhuite;
                        wuhuit = fork();
                        if(wuhuit < 0 )
                        {
                            exit(EXIT_FAILURE);
                        }
                        if(wuhuit == 0 )
                        {
                            //isi
                            char *argv[] = {"cp", "-a", "./FILM/.","./Fylm/", NULL};
                            execv("/bin/cp", argv);
                        }
                        else
                        {
                            while((wait(&wuhuite)) > 0);
                            pid_t wat;
                            int de;
                            wat = fork();
                            if(wat < 0)
                            {
                                exit(EXIT_FAILURE);
                            }
                            if(wat == 0)
                            {
                                glob_t globbuf;
                                globbuf.gl_offs = 2;
                                glob("/home/fitraharie/Documents/Praktikum2/FOTO/*.jpg", GLOB_DOOFFS, NULL, &globbuf);
                                glob("/home/fitraharie/Documents/Praktikum2/Pyoto/", GLOB_DOOFFS | GLOB_APPEND, NULL, &globbuf);
                                globbuf.gl_pathv[0] = "cp";
                                globbuf.gl_pathv[1] = "-r";
                                execvp("cp", &globbuf.gl_pathv[0]);
                            }
                            else
                            {
                                while((wait(&de)) > 0);
                                // isi baka
                                pid_t gudi;
                                int gol;
                                gudi = fork();
                                if(gudi < 0 )
                                {
                                    exit(EXIT_FAILURE);
                                }
                                if(gudi == 0)
                                {
                                    char *argv[] = {"cp", "-a", "./MUSIK/.","./Musyik/", NULL};
                                    execv("/bin/cp", argv);
                                }
                                else
                                {
                                    while((wait(&gol)) > 0);
                                    pid_t tor;
                                    int tori;
                                    tor = fork();
                                    if(tor < 0)
                                    {
                                        exit(EXIT_FAILURE);
                                    }
                                    if(tor == 0)
                                    {
                                        zipur();
                                    }
                                    else
                                    {
                                        while((wait(&tori)) > 0);
                                        remover();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }   
    } 
}

void download(){
    id_t awal;
    int status;
    awal = fork();
    if (awal < 0) {
        exit(EXIT_FAILURE); // Jika gagal membuat proses baru, program akan berhenti
    }
    if (awal == 0)
    {
        char *argv1[] = {"mkdir", "-p", "Musyik", "Fylm", "Pyoto", NULL};
        execv("/bin/mkdir", argv1);
    }
    else
    {
        while((wait(&status)) > 0);
        pid_t mantap1;
        int mantapa;
        mantap1 = fork();
        if(mantap1 < 0)
        {
            exit(EXIT_FAILURE);
        }
        if(mantap1 == 0)
        {
            execl("/bin/wget", "wget", "--no-check-certificate", "https://drive.google.com/uc?id=1ZG8nRBRPquhYXq_sISdsVcXx5VdEgi-J&export=download", "-qO", "Film_for_Stevany.zip", (char *)NULL);
        }
        else
        {
            while((wait(&mantapa)) > 0);
            pid_t mantap2; 
            int mantapb;
            mantap2 = fork();
            if(mantap2 < 0)
            {
                exit(EXIT_FAILURE);
            }
            if(mantap2 == 0)
            {
                execl("/bin/wget", "wget", "--no-check-certificate", "https://drive.google.com/uc?id=1ktjGgDkL0nNpY-vT7rT7O6ZI47Ke9xcp&export=download", "-qO", "Musik_for_Stevany.zip", (char *)NULL);
            }
            else
            {
                while((wait(&mantapb)) > 0);
                execl("/bin/wget", "wget", "--no-check-certificate", "https://drive.google.com/uc?id=1FsrAzb9B5ixooGUs0dGiBr-rC7TS9wTD&export=download", "-qO", "Photo_for_Stevany.zip", (char *)NULL);
            }
        } 
    }
}

void zipur()
{
    char arr[80];
    time_t t_now = time(NULL);
    struct tm waktu = *localtime(&t_now);
    strftime(arr, sizeof(arr)-1, "%d-%m_%H:%M", &waktu);
    printf("%s\n", arr);
    
    while(strcmp(arr,"09-04_22:22")!=0)
    {
        sleep(2);
        t_now = time(NULL);
        waktu = *localtime(&t_now);
        strftime(arr, sizeof(arr)-1, "%d-%m_%H:%M", &waktu);
        printf("%s_%d\n", arr, strcmp(arr,"09-04_22:22"));
    }
    pid_t awaliarit;
    int statusir;
    awaliarit = fork();
    if (awaliarit < 0) {
        exit(EXIT_FAILURE); // Jika gagal membuat proses baru, program akan berhenti
    }
    if (awaliarit== 0)
    {
        char *argv[] = {"zip", "-r", "Lopyu_Stevany.zip", "Fylm", "Pyoto", "Musyik", NULL};
        execv("/bin/zip", argv);
    }
    else
    {
        while((wait(&statusir)) > 0);
    }
}

void remover(){
    pid_t awaliari;
    int statusi;
    awaliari = fork();
    if (awaliari < 0) {
        exit(EXIT_FAILURE); // Jika gagal membuat proses baru, program akan berhenti
    }
    if (awaliari== 0)
    {
        char *argv[] = {"rm", "-r", "FILM", "FOTO", "MUSIK" , "Fylm", "Pyoto", "Musyik", NULL};
        execv("/bin/rm", argv);
    }
    else
    {
        while((wait(&statusi)) > 0);
    }
}
