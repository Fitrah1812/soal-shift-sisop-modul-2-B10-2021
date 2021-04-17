#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <wait.h>
#include <string.h>
#include <dirent.h>

void make_folder(char arr[]);

// void make_caption(char name[], char age[], char path[]){

// }

// void rename_file(char name[], char path[],char name_file[]){
//     pid_t child_id;
//     child_id = fork();
//     int status;

//     strcat(name,".jpg");

//     if (child_id < 0) {
//       exit(EXIT_FAILURE); 
//     }

//     if (child_id == 0) {
//       //rename namefile
//       char *argv[] = {"mv",name_file,name,NULL};
//       execv("/bin/mv", argv);
//     } else {
//       while ((wait(&status)) > 0);
//       return;
//     }
// }

// void split_name_file(char name_file[],char path[]){
//   char type[30];
//   char name[30];
//   char age[30];
//   char *split = strtok(name_file, "_;"); 
//   int word;
//   while (split != NULL )
//   {
//     if(word == 1 | word == 4){ strcat(type,split);}
//     if(word == 2 | word == 5){ strcat(name,split); rename_file(name,path,name_file);}
//     if(word == 3 | word == 6){ strcat(age,split);} // make_caption(name,age);
//   }
//   return;
// }

// char *dir_content(char path){
//   DIR *d = opendir(path); //open the path
//   struct dirent * dir; //for the directory enteries
//   char name_file[1000];
//   char direction[] = "/home/lathifa/modul2/petshop/";
  
  
//   while ((dir = readdir(d)) != NULL){
//     //condition to check regular file
//     name_file[0]='\0';
//     strcat(name_file,path);
//     strcat(name_file, dir->d_name);
//     split_name_file(name_file,direction);
//   }
//   return name_file;
//   closedir(d);
// }

void move_file(char arr[], char path[]){
    pid_t child_id;
    child_id = fork();
    int status;

    char name_file[100]= "";
    //memcpy(&name_file,&arr,sizeof name_file);
    strcat(name_file,arr);
    char simbol[] = "";
 
    strcat(name_file,"*");

    if (child_id < 0) {
    exit(EXIT_FAILURE); 
    }

    if (child_id == 0) {
      //memindahkan file
      char *argv[] = {"find","/home/lathifa/modul2/petshop/", "-type","f","-name",name_file,"-exec","mv","-t",path,"{}","+",NULL};//-t <targetdir>
      execv("/usr/bin/find", argv);
    } else {
      while ((wait(&status)) > 0);
          // pid_t child2_id;
          // child2_id = fork();

          // if(child2_id <0){
          //   exit(EXIT_FAILURE); 
          // }
          // if (child_id == 0) {
          //   dir_content(path);
          // }else{
          //   while((wait(&status)) > 0);
          //     return;
          // }
          return;
    }
}

    

void make_folder(char arr[]){
    pid_t child_id;
    child_id = fork();
    int status;

    char path[] = "/home/lathifa/modul2/petshop/";
    char directory[100] = "";
    strcat(directory,path);
    strcat(directory,arr);
    
    if (child_id < 0) {
    exit(EXIT_FAILURE); 
    }

    if (child_id == 0) {
        //membuat folder 
        char *argv[] = {"mkdir","-p", directory, NULL};
        execv("/bin/mkdir", argv);

    } else {
        while ((wait(&status)) > 0);
        move_file(arr,directory);
    }
}

int main() {
  pid_t child_id;
  child_id = fork();
  
  int status;
  char *arr[] = {"cat","dog","parrot","rabbit","guinea","betta","chicken","frog","hamster","iguana","ilama","otter","racoon","sheep","tiger"};
  
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
                    for(int i=0; i<15;i++)
                        make_folder(arr[i]);
                }
            }
        }
    }
}




