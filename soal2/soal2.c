#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <syslog.h>
#include <string.h>
#include <wait.h>
#include <dirent.h>

void delete_file(char name[], char path[]);

void make_folder(char pet_type[], char path[]) {
    pid_t child_id;
    int status;
    char path_temp[100]="";

    strcpy(path_temp, path);
    strcat(path_temp, pet_type);

    //strcat(path,pet_type);

    child_id = fork();

    if (child_id < 0) {
      exit(EXIT_FAILURE); // Jika gagal membuat proses baru, program akan berhenti
     }

     if (child_id == 0) {
       // this is child

       char *argv[] = {"mkdir", "-p", path_temp, NULL};
       execv("/bin/mkdir", argv);
      } else {
        while((wait(&status)) > 0);
        return;
      }
}

void move_file(char name[], char pet_type[], char pet_name[], char path[]) {
    pid_t child_id;
    int status;

    child_id = fork();

    //path file sebelum
    char path_file[100] = "";
    strcpy(path_file, path);
    strcat(path_file, name);

    
    //buat path  file pada folder type
    char path_folder[100] = "";
    strcpy(path_folder, path);
    strcat(path_folder, pet_type);

    //ganti nama file
    strcat(path_folder,"/");
    strcat(path_folder, pet_name);
    strcat(path_folder,".jpg");
 

    if (child_id < 0) {
      exit(EXIT_FAILURE); // Jika gagal membuat proses baru, program akan berhenti
     }

     if (child_id == 0) {
       // this is child

       char *argv[] = {"cp", path_file, path_folder, NULL};
       execv("/bin/cp", argv);
      } else {
        while((wait(&status)) > 0);
        return;       
      }
}

void make_caption(char pet_type[], char pet_name[], char pet_age[], char path[]) {
   
    char path_file[100] = "";

    strcat(path_file, path);
    strcat(path_file, pet_type);
    strcat(path_file, "/keterangan.txt");

    FILE *fp;
    fp = fopen (path_file, "a");
    fprintf(fp, "nama: %s\numur: %s tahun\n\n", pet_name, pet_age);

    fclose(fp);
    return;
}

void delete_file(char name[], char path[]){
    
    char new_path[100] = "";
    strcat(new_path, path);
    strcat(new_path, name);
//     printf("fungsi delete_file\n");
//     printf("%s\n\n",new_path);

    pid_t child_id;
    child_id = fork();

    int status;

    if (child_id < 0) {
        exit(EXIT_FAILURE); // Jika gagal membuat proses baru, program akan berhenti
    }

    if (child_id == 0) {
        char *argv[] = {"rm", "-r", new_path, NULL};
        execv("/bin/rm", argv);
    }
    else{
        while ((wait(&status)) > 0)
        {
            return;
        }
        
    }
}

void delete_jpg(char *str, char *substr){
    char *dot_jpg;
    dot_jpg = strstr(str,substr); // strstr untuk menemukan sebuah teks pada string //menemukan substr dalam str
    if (dot_jpg != NULL) {
        int pos = dot_jpg - str;

//         printf("fungsi delete_jpg\n");
//         printf("str     : %s\n", str);
//         printf("dot_jpg : %s\n", dot_jpg);
//         printf("pos     : %d\n\n", pos);
//         sprintf(str, "%.*s", pos, str);
        // return pos;
    }
}

void split_name(char name[]){
        char path[] = "/home/lathifa/modul2/petshop/";
        char file[100];
        
        strcpy(file,name);
        //delete_jpg(file, ".jpg");
        
        char pet_type[30];
        char pet_name[30];
        char pet_age[30];
        char *split ;
        split = strtok(file, "_;");
    
        int word = 0;
        while(split != NULL) {

        if(word == 0 | word == 3) { strcpy(pet_type, split); make_folder(pet_type, path); }

        if(word == 1 | word == 4) { strcpy(pet_name, split); move_file(name, pet_type,pet_name, path);}

        if(word == 2 | word == 5) { strcpy(pet_age, split); delete_jpg(pet_age,".jpg"); make_caption(pet_type, pet_name, pet_age, path);}

        split = strtok(NULL, "_;");
        word++;
    }
//     printf("fungsi split_name\n");
//     printf("type: %s\n",pet_type);
//     printf("name: %s\n",pet_name);
//     printf("age : %s\n",pet_age);
//     printf("path: %s\n\n",path);
//     delete_file(name,path);
}


void dir(){
    char path[] = "/home/lathifa/modul2/petshop/";

    DIR *dir= opendir(path);
    struct dirent *dp;

    char name[100];

    if (dir != NULL)
    {
      while ((dp = readdir (dir))) {
          
        if(strcmp(dp->d_name, ".") !=0 && strcmp(dp->d_name, "..") !=0) {
           
            strcpy(name,dp->d_name);
            split_name(name);     
        }
      }
     closedir(dir);
    }
  return ;
}


int main() {
  pid_t child_id;
  child_id = fork();

  int status;
  
  if (child_id < 0) {
    exit(EXIT_FAILURE); // Jika gagal membuat proses baru, program akan berhenti
  }

  if (child_id == 0) {
	//membuat folder modul2
	char *argv[] = {"mkdir","-p", "/home/lathifa/modul2", NULL};
        execv("/bin/mkdir", argv);
    
  } else {
  	while((wait(&status)) > 0);
  	  pid_t child1_id;
	  child1_id = fork();

	  if (child1_id < 0) {
	    exit(EXIT_FAILURE); 
	  }

	  if (child1_id == 0) {
	    // membuat folder petshop
	    char *argv[] = {"mkdir", "-p", "/home/lathifa/modul2/petshop", NULL};
	    execv("/bin/mkdir", argv);
	  } else {
	    
	    while ((wait(&status)) > 0);
	    
		  pid_t child2_id;
		  child2_id = fork();

		  if (child2_id < 0) {
		    exit(EXIT_FAILURE); 
		  }

		  if (child2_id == 0) {
		    //unzip pets.zip
		    char *argv2[] = {"unzip","-d", "/home/lathifa/modul2/petshop", "/home/lathifa/pets.zip", NULL};
		    execv("/usr/bin/unzip", argv2);
		  } else {
		    while ((wait(&status)) > 0);
		    
		      pid_t child3_id;
			  child3_id = fork();

			  if (child3_id < 0) {
			    exit(EXIT_FAILURE); 
			  }

			  if (child3_id == 0) {
			    //delete folder tidak penting
			    char *delete[] = {"find", "/home/lathifa/modul2/petshop", "-mindepth","1","-type", "d","-exec","rm","-r","{}","+", NULL};//kedalaman 1, d=folder, rm punya exec, r-rekusif
    		    	    execv("/usr/bin/find", delete);

			  } else {
			    while ((wait(&status)) > 0);
                    dir();
                }
            }
        }
    }
}
