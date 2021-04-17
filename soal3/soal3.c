#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

void caesar(char message[],int key){
    int i;
    char ch;
    for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
}

void crdir(char folder[]){
    char *argv[]={"mkdir", folder, NULL};
    execv("/bin/mkdir", argv);
}

void donlot(time_t stamp, char folder[]){
    char pictures[40], link[40], path[80];
    int i;
    for(i=0;i<10;i++){
        time(&stamp);
        strftime(pictures, 80, "%Y-%m-%d_%H:%M:%S", localtime(&stamp));
        strcat(pictures,".jpg");
        sprintf(path, "%s/%s", folder, pictures);
        sprintf(link, "https://picsum.photos/%d", ((int)time(NULL))%1000+50);
        pid_t pid;
        pid=fork();
        if(pid<0) exit(EXIT_FAILURE);
        if(pid==0){
            char *argv[]={"wget", "-q", link, "-O", path, NULL};
            execv("/bin/wget", argv);
        }
        sleep(5);
    }

}

void crlog(char folder[]){
    char statuslog[]={"Download Success"};
    char path[40];
    sprintf(path, "%s/status.txt", folder);
    caesar(statuslog,5);
    FILE *statusfile = fopen(path, "w+");
    fprintf(statusfile,"%s",statuslog);
    fclose(statusfile);
}

void zipping(char folder[]){
    char zipname[40];
    sprintf(zipname, "%s.zip", folder);
    char *argv[]={"zip", "-qq", "-m", "-r", zipname, folder, NULL};
    execv("/bin/zip", argv);
}

void crkillz(){
    char kill[]={"#!/bin/bash\npkill -f -9 soal3\nrm Killer.sh"};
    FILE *killerfile = fopen("Killer.sh", "w+");
    fprintf(killerfile, "%s", kill);
    fclose(killerfile);
}

void crkillx(){
    char kill[]={"#!/bin/bash\nid=(`pgrep soal3 | awk '{print $1}'`)\nkill ${id[0]}\nrm Killer.sh"};
    FILE *killerfile = fopen("Killer.sh", "w+");
    fprintf(killerfile, "%s", kill);
    fclose(killerfile);
}

int argcheck(int argc, char *argv[]){
    if(argc==1){
        printf("Harus ada argumen -z atau -x\n");
        return 1;
    } else if(argc>2){
        printf("Argumen terlalu banyak\n");
        return 1;
    }
    if(!strcmp(argv[1],"-z")) crkillz();
    else if(!strcmp(argv[1],"-x")) crkillx();
    else{
        printf("Argumen yang diterima hanya -z dan -x\n");
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[]){
    if(argcheck(argc, argv)) return 0;
    pid_t pid;
    while(1){
        time_t stamp;
        time(&stamp);
        char folder[40];
        strftime(folder, 80, "%Y-%m-%d_%H:%M:%S", localtime(&stamp));
        pid=fork();
        if(pid<0) exit(EXIT_FAILURE);
        if(pid==0) crdir(folder);
        pid=fork();
        if(pid<0) exit(EXIT_FAILURE);
        if(pid==0){
            donlot(stamp, folder);
            crlog(folder);
            zipping(folder);
        }
        sleep(40);
    }
}
