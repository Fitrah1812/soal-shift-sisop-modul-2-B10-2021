# soal-shift-sisop-modul-2-B10-2021
Kelompok B10 
Nama Kelompok :
1. Fitrah Arie Ramadhan 05111940000025
2. Yusrill Zubaydi 05111940000160
3. Lathifa Itqonina M 05111940000176


## Penjelasan Soal
**No. 1**

Pada suatu masa, hiduplah seorang Steven yang hidupnya pas-pasan. Steven punya pacar, namun sudah putus sebelum pacaran. Ketika dia galau memikirkan mantan, ia selalu menonton https://www.youtube.com/watch?v=568DH_9CMKI untuk menghilangkan kesedihannya. 

Di lain hal Steven anak yang tidak amat sangat super membenci matkul sisop, beberapa jam setelah diputus oleh pacarnya dia menemukan wanita lain bernama Stevany, namun Stevany berkebalikan dengan Steven karena menyukai sisop. Steven ingin terlihat jago matkul sisop demi menarik perhatian Stevany.

Pada hari ulang tahun Stevany, Steven ingin memberikan Stevany zip berisikan hal-hal yang disukai Stevany. Steven ingin isi zipnya menjadi rapi dengan membuat folder masing-masing sesuai extensi. 
(a) Dikarenakan Stevany sangat menyukai huruf Y, Steven ingin nama folder-foldernya adalah Musyik untuk mp3, Fylm untuk mp4, dan Pyoto untuk jpg 
Jawaban :


![Image1](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1A.jpeg)


``` c 
 if (awal == 0)
    {
        char *argv1[] = {"mkdir", "-p", "Musyik", "Fylm", "Pyoto", NULL};
        execv("/bin/mkdir", argv1);
    }
```

Untuk menjawab soal A kita harus melakukan pembuatan directory "Musyik", "Fylm", dan "Pyoto". Adapun caranya mendeklarasikan char pointer argv1 sebagai tempat meletekkan commandnya sebelum dieksekusi dengan execv. Setelah itu kita lakukan eksekusi dengan dengan format execv yaitu execv("/bin/mkdir", argv1). Setelah menjalankan eksekusi ini maka 3 direktori yang diminta soal akan dibuat.


``` c
void cekpoto()
{
    DIR *dp;
    struct dirent *ep;
    char path[150] = "/home/fitraharie/Documents/Praktikum2/FOTO/";
    dp = opendir(path);
    if (dp != NULL)
    {
      while ((ep = readdir (dp))) {
        if(strstr(ep->d_name,"jpg")){
            char dst[150]= "/home/fitraharie/Documents/Praktikum2/Pyoto/";
            char hoho[200]= "/home/fitraharie/Documents/Praktikum2/FOTO/";
            pid_t mantapu;
            int statese;
            mantapu = fork();
            strcpy(path, hoho);
            strcat(path, ep->d_name);
            if(mantapu < 0)
            {
                exit(EXIT_FAILURE);
            }
            if(mantapu == 0)
            {
                char *args[]={"cp", path, dst, NULL};
                execv("/bin/cp", args);
            }
            else{
                while((wait(&statese)) > 0);
                int LENGTH = strlen(path);
                memset(path,0,LENGTH);
            }
        }
      }
      (void) closedir (dp);
    } else perror ("Couldn't open the directory");
    return 0;
}
```

Fungsi cekpoto() berguna untuk mengcopy file yang hanya berekstensi .jpg untuk dimasukkan kedalam Directori Pyoto nantinya.

```c
void cekpidio()
{
    DIR *dp;
    struct dirent *ep;
    char path[150] = "/home/fitraharie/Documents/Praktikum2/FILM/";
    dp = opendir(path);
    if (dp != NULL)
    {
      while ((ep = readdir (dp))) {
        if(strstr(ep->d_name,"mp4")){
            char dst[150]= "/home/fitraharie/Documents/Praktikum2/Fylm/";
            char hoho[200]= "/home/fitraharie/Documents/Praktikum2/FILM/";
            pid_t mantapu;
            int statese;
            mantapu = fork();
            strcpy(path, hoho);
            strcat(path, ep->d_name);
            if(mantapu < 0)
            {
                exit(EXIT_FAILURE);
            }
            if(mantapu == 0)
            {
                char *args[]={"cp", path, dst, NULL};
                execv("/bin/cp", args);
            }
            else{
                while((wait(&statese)) > 0);
                int LENGTH = strlen(path);
                memset(path,0,LENGTH);
            }
        }
      }
      (void) closedir (dp);
    } else perror ("Couldn't open the directory");
    return 0;
}

```


Fungsi cekpidio() diatas berguna untuk mengecek ektensi dari video yang diinginkan yaitu dengan ekstensi .mp4. Dan Setelah itu dimasukkan ke dalam Folder Fylm.


```c
void cekmusik()
{
    DIR *dp;
    struct dirent *ep;
    char path[150] = "/home/fitraharie/Documents/Praktikum2/MUSIK/";
    dp = opendir(path);
    if (dp != NULL)
    {
      while ((ep = readdir (dp))) {
        if(strstr(ep->d_name,"mp3")){
            char dst[150]= "/home/fitraharie/Documents/Praktikum2/Musyik/";
            char hoho[200]= "/home/fitraharie/Documents/Praktikum2/MUSIK/";
            pid_t mantapu;
            int statese;
            mantapu = fork();
            strcpy(path, hoho);
            strcat(path, ep->d_name);
            if(mantapu < 0)
            {
                exit(EXIT_FAILURE);
            }
            if(mantapu == 0)
            {
                char *args[]={"cp", path, dst, NULL};
                execv("/bin/cp", args);
            }
            else{
                while((wait(&statese)) > 0);
                int LENGTH = strlen(path);
                memset(path,0,LENGTH);
            }
        }
      }
      (void) closedir (dp);
    } else perror ("Couldn't open the directory");
    return 0;
}
```

Fungsi cekmusik() diatas berguna untuk mengecek ekstensi dari musik yang diinginkan yaitu dengan ekstensi .mp3. Dan setelah itu dimasukkan ke dalam Folder Musyik.


(b) untuk musik Steven mendownloadnya dari link di bawah, film dari link di bawah lagi, dan foto dari link dibawah juga :). 
Jawbaan : 

![Image2](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1BA.jpeg)

![Image3](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1BB.jpeg)

``` c
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
            execl("/bin/wget", "wget", "--no-check-certificate", "https://drive.google.com/uc?id=1ZG8nRBRPquhYXq_sISdsVcXx5VdEgi-J&export=download", "-qO", "Musik_for_Stevany.zip", (char *)NULL);
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
                execl("/bin/wget", "wget", "--no-check-certificate", "https://drive.google.com/uc?id=1ktjGgDkL0nNpY-vT7rT7O6ZI47Ke9xcp&export=download", "-qO", "Film_for_Stevany.zip", (char *)NULL);
            }
            else
            {
                while((wait(&mantapb)) > 0);
                execl("/bin/wget", "wget", "--no-check-certificate", "https://drive.google.com/uc?id=1FsrAzb9B5ixooGUs0dGiBr-rC7TS9wTD&export=download", "-qO", "Photo_for_Stevany.zip", (char *)NULL);
            }
        } 
}

```

Dari Proses diatas saya membuat Proses Child, Parent dan Sub child. Hal ini dilakukan agar prosesnya menjadi terurut dan bisa mendownload 3 file yang diinginkan dari soal B. Disini saya menggunakan execl untuk mengakomodasi hal tersebut. 

Mendownload Musik_for_Stevany.zip
```c
execl("/bin/wget", "wget", "--no-check-certificate", "https://drive.google.com/uc?id=1ZG8nRBRPquhYXq_sISdsVcXx5VdEgi-J&export=download", "-qO", "Musik_for_Stevany.zip", (char *)NULL);
```

Mendownload Film_for_Stevany.zip
```c
 execl("/bin/wget", "wget", "--no-check-certificate", "https://drive.google.com/uc?id=1ktjGgDkL0nNpY-vT7rT7O6ZI47Ke9xcp&export=download", "-qO", "Film_for_Stevany.zip", (char *)NULL);
```

Mendownload Photo_for_Stevany.zip
```c
execl("/bin/wget", "wget", "--no-check-certificate", "https://drive.google.com/uc?id=1FsrAzb9B5ixooGUs0dGiBr-rC7TS9wTD&export=download", "-qO", "Photo_for_Stevany.zip", (char *)NULL);
```

Hal diatas merupakan command inti untuk menjawab soal B.

(c) Steven tidak ingin isi folder yang dibuatnya berisikan zip, sehingga perlu meng-extract-nya setelah didownload serta
Jawaban :

![Image4](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1CA.jpeg)

![Image5](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1CB.jpeg)

Berikut merupakan proses untuk melakukan unzip dari file-file yang sudah didownload diantaranya Musik_for_Stevany.zip, Photo_for_Stevany.zip dan Film_for_Stevany.zip. Dan Kodingan dibawah merupakan solusi untuk menjawab bagian C.

``` c 
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

```

(d) memindahkannya ke dalam folder yang telah dibuat (hanya file yang dimasukkan).
Jawaban :

![Image6](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1DA.jpeg)

![Image7](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1DB.jpeg)

![Image8](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1DC.jpeg)

![Image9](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1DD.jpeg)

![Image10](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1DE.jpeg)


Berikut Merupakan proses mencari file yang berekstensi sama yaitu untuk foto yaitu .jpg, film yaitu .mp4 dan musik yaitu .mp3. Berikut merupakan program yang dijalankan dan setelah itu program ini mengcopy dari folder yang sudah di unzip ke folder yang telah dibuat. Untuk contohnya dari folder MUSIK dengan ektensi .mp3 ke folder Musyik, folder FILM dengan ekstensi .mp4 ke folder Fylm dan folder FOTO dengan ekstensi .jpg ke folder Pyoto.

Folder FOTO dengan ektensi .jpg ke Folder Pyoto

``` c 
void cekpoto()
{
    DIR *dp;
    struct dirent *ep;
    char path[150] = "/home/fitraharie/Documents/Praktikum2/FOTO/";
    dp = opendir(path);
    if (dp != NULL)
    {
      while ((ep = readdir (dp))) {
        if(strstr(ep->d_name,"jpg")){
            char dst[150]= "/home/fitraharie/Documents/Praktikum2/Pyoto/";
            char hoho[200]= "/home/fitraharie/Documents/Praktikum2/FOTO/";
            pid_t mantapu;
            int statese;
            mantapu = fork();
            strcpy(path, hoho);
            strcat(path, ep->d_name);
            if(mantapu < 0)
            {
                exit(EXIT_FAILURE);
            }
            if(mantapu == 0)
            {
                char *args[]={"cp", path, dst, NULL};
                execv("/bin/cp", args);
            }
            else{
                while((wait(&statese)) > 0);
                int LENGTH = strlen(path);
                memset(path,0,LENGTH);
            }
        }
      }
      (void) closedir (dp);
    } else perror ("Couldn't open the directory");
    return 0;
}

```

Folder FILM dengan ektensi .mp4 ke Folder Fylm

```c
void cekpidio()
{
    DIR *dp;
    struct dirent *ep;
    char path[150] = "/home/fitraharie/Documents/Praktikum2/FILM/";
    dp = opendir(path);
    if (dp != NULL)
    {
      while ((ep = readdir (dp))) {
        if(strstr(ep->d_name,"mp4")){
            char dst[150]= "/home/fitraharie/Documents/Praktikum2/Fylm/";
            char hoho[200]= "/home/fitraharie/Documents/Praktikum2/FILM/";
            pid_t mantapu;
            int statese;
            mantapu = fork();
            strcpy(path, hoho);
            strcat(path, ep->d_name);
            if(mantapu < 0)
            {
                exit(EXIT_FAILURE);
            }
            if(mantapu == 0)
            {
                char *args[]={"cp", path, dst, NULL};
                execv("/bin/cp", args);
            }
            else{
                while((wait(&statese)) > 0);
                int LENGTH = strlen(path);
                memset(path,0,LENGTH);
            }
        }
      }
      (void) closedir (dp);
    } else perror ("Couldn't open the directory");
    return 0;
}
```

Folder MUSIK dengan ektensi .mp3 ke Folder Musyik

```c
void cekmusik()
{
    DIR *dp;
    struct dirent *ep;
    char path[150] = "/home/fitraharie/Documents/Praktikum2/MUSIK/";
    dp = opendir(path);
    if (dp != NULL)
    {
      while ((ep = readdir (dp))) {
        if(strstr(ep->d_name,"mp3")){
            char dst[150]= "/home/fitraharie/Documents/Praktikum2/Musyik/";
            char hoho[200]= "/home/fitraharie/Documents/Praktikum2/MUSIK/";
            pid_t mantapu;
            int statese;
            mantapu = fork();
            strcpy(path, hoho);
            strcat(path, ep->d_name);
            if(mantapu < 0)
            {
                exit(EXIT_FAILURE);
            }
            if(mantapu == 0)
            {
                char *args[]={"cp", path, dst, NULL};
                execv("/bin/cp", args);
            }
            else{
                while((wait(&statese)) > 0);
                int LENGTH = strlen(path);
                memset(path,0,LENGTH);
            }
        }
      }
      (void) closedir (dp);
    } else perror ("Couldn't open the directory");
    return 0;
}
```

(e) Untuk memudahkan Steven, ia ingin semua hal di atas berjalan otomatis 6 jam sebelum waktu ulang tahun Stevany). 
Jawaban :

![Image11](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1E.jpeg)


``` c 
//buat waktu
char arr[80];
//cek time
time_t cek = time(NULL);
//make timenow
struct tm timenow = *localtime(&cek);
//strftime biasa
strftime(arr, sizeof(arr)-1, "%d-%m_%H:%M", &timenow);
//keluarin jam
printf("%s\n", arr);
while(strcmp(arr,"09-04_16:22")!=0)
{
     sleep(2);
     cek = time(NULL);
     timenow = *localtime(&cek);
     strftime(arr, sizeof(arr)-1, "%d-%m_%H:%M", &timenow);
}
close(STDIN_FILENO);
close(STDOUT_FILENO);
close(STDERR_FILENO);
```

Kodingan diatas menjawab soal E yang dimana ia ingin berjalan tepat otomatis 6 jam sebelum waktu ulang tahun Stevany. 6 jam dari waktu ulang tahun Stevany yaitu pukul 16:22 pada tanggal 09 April. Fungsi kodingan diatas yaitu untuk mengecek dan sleep apabila belum sesuai waktunya. Sehingga sistem akan terus mengecek waktunya apakah sudah masuk pukul 16:22 atau belum apabila sudah maka akan dijalankan proses-proses yang sudah diselesaikan di point A-E. Kodingan ini juga mengatasi supaya tidak ada satupun yang berjalan di terminal tetapi hanya berjalan di latar belakang tanpa ada yang dijalankan di terminal. 

(f) Setelah itu pada waktu ulang tahunnya Stevany, semua folder akan di zip dengan nama Lopyu_Stevany.zip dan semua folder akan di delete(sehingga hanya menyisakan .zip).
Jawaban : 



Berikut merupakan proses zip folder serta remove folder yang diminta di soal f. Setelah itu membuat zip dengan nama Lopyu_Stevany.zip. Kodingan ini melakukan proses pada saat waktu 22:22 pada tanggal 9 April secara otomatis. Kodingan ini menjawab pertanyaan F.

![Image12](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1FA.jpeg)


``` c 
void zipur()
{
    char arr[80];
    time_t cek = time(NULL);
    struct tm timenow = *localtime(&cek);
    strftime(arr, sizeof(arr)-1, "%d-%m_%H:%M", &timenow);
    printf("%s\n", arr);
    while(strcmp(arr,"09-04_22:22")!=0)
    {
        sleep(2);
        cek = time(NULL);
        timenow = *localtime(&cek);
        strftime(arr, sizeof(arr)-1, "%d-%m_%H:%M", &timenow);
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

```

Kodingan diatas merupakan proses untuk zip beberapa folder yaitu folder Fylm, Pyoto, dan Musyik. Dengan catatan pada saat 22:22 pada tanggal 9 April proses tersebut berjalan serta meremove folder FILM, FOTO, MUSIK, Fylm, Pyoto, dan Musyik.


![Image13](https://github.com/Fitrah1812/soal-shift-sisop-modul-2-B10-2021/blob/main/Dokumentasi/Nomor1FB.jpeg)


```c
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
```

Setelah dilakukan proses zip maka diminta untuk remove folder FILM, FOTO, MUSIK, Fylm, Pyoto dan Musyik. Sehingga hanya menyisakan file .zip saja. Kodingan diatas menyelesaikan permasalahan tersebut. Sehingga permasalahan F telah terselesaikan.


Kendala : Pada saat penyelesaian permasalahan ini terdapat bingung pada saat penggunaan exec, serta lebih mendalami fork dengan memperhitungkan proses child dan parentnya.




**No. 2**  
  
Loba bekerja di sebuah petshop terkenal, suatu saat dia mendapatkan zip yang berisi banyak sekali foto peliharaan dan Ia diperintahkan untuk mengkategorikan foto-foto peliharaan tersebut. Loba merasa kesusahan melakukan pekerjaanya secara manual, apalagi ada kemungkinan ia akan diperintahkan untuk melakukan hal yang sama. Kamu adalah teman baik Loba dan Ia meminta bantuanmu untuk membantu pekerjaannya  
  
A. Pertama-tama program perlu mengextract zip yang diberikan ke dalam folder “/home/[user]/modul2/petshop”. Karena bos Loba teledor, dalam zip tersebut bisa berisi folder-folder yang tidak penting, maka program harus bisa membedakan file dan folder sehingga dapat memproses file yang seharusnya dikerjakan dan menghapus folder-folder yang tidak dibutuhkan.  
B. Foto peliharaan perlu dikategorikan sesuai jenis peliharaan, maka kamu harus membuat folder untuk setiap jenis peliharaan yang ada dalam zip. Karena kamu tidak mungkin memeriksa satu-persatu, maka program harus membuatkan folder-folder yang dibutuhkan sesuai dengan isi zip.  
C. Setelah folder kategori berhasil dibuat, programmu akan memindahkan foto ke folder dengan kategori yang sesuai dan di rename dengan nama peliharaan. Contoh: “/petshop/cat/joni.jpg”.  
D. Karena dalam satu foto bisa terdapat lebih dari satu peliharaan maka foto harus di pindah ke masing-masing kategori yang sesuai. Contoh: foto dengan nama “dog;baro;1_cat;joni;2.jpg” dipindah ke folder “/petshop/cat/joni.jpg” dan “/petshop/dog/baro.jpg”.  
E. Di setiap folder buatlah sebuah file "keterangan.txt" yang berisi nama dan umur semua peliharaan dalam folder tersebut.Format harus sesuai contoh.  
  
![image](https://user-images.githubusercontent.com/55240758/115696819-37fd5e80-a38d-11eb-87e4-9a961c62aa7b.png)  


Jawaban:  
(a) Maka pada program terlebih dahulu hal pertama yang perlu dilakukan yaitu membuat folder yang akan dituju yakni folder modul2 dengan sub folder yaitu petshop sebagai directori tujuan dari hasil proses unzip. Apabila pembuatan folder telah berhasil maka langkah selanjutnya yaitu mengekstrak file yang telah ditentukan ke dalam folder “/home/[user]/modul2/petshop” dan dilanjutkan dengan menghapus folder-folder yang tidak dibutuhkan.  

```
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
```
(b),(c) & (d) file yang telah di ekstrak dipindah kan kedalam folder sesuai dengan jenis hewan peliharaan yang ada di dalam file foto. Dimana dalam satu foto bisa terdapat lebih dari satu peliharaan maka foto harus di pindah ke masing-masing kategori yang sesuai dan dilakukan proses renaming sesuai dengan nama hewan peliharaan yang terdapat pada nama file. Maka pada pengerjaan ketiga poin ini, untuk mempermudah proses pengerjaan maka saya membagi program menjadi beberapa fungsi yaitu :  
  
***Fungsi Directory Listing*** | digunakan untuk melihat file apa saja yang ada di directori beserta mengambil nama dari setiap filenya pada statement "if" fungsi dibawah ini 
```
void dir(){
    char path[] = "/home/lathifa/modul2/petshop/";

    DIR *dir= opendir(path);
    struct dirent *dp;

    char name[100];

    if (dir != NULL)
    {
      while ((dp = readdir (dir))) {
          
        if(strcmp(dp->d_name, ".") !=0 && strcmp(dp->d_name, "..") !=0) {
           
            strcpy(name,dp->d_name); //nama yang telah didapat di copy kedalam variabel name
            split_name(name); //memanggil fungsi split name
        }
      }
     closedir(dir);
    }
  return ;
}
```
***Fungsi Split Name*** | untuk mempermudah proses program saya menggunakan fungsi splitname ini untuk mendapatkan informasi yang dibutuhkan dari nama file setiap foto. Informasi tersebut terdiri dari tipe hewan, nama hewan, dan umur. Nama file tersebut memiliki pola penulisan nama file (tipe hewan-nama hewan-umur hewan) yang dipisahkan dengan simbol "_;". 
```
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
    delete_file(name,path);
}
```
***Fungsi Membuat Folder*** | untuk membuat folder berdasarkan kategori tipe hewan, dimana informasi tipe hewan tersebut telah didapatkan melalui fungsi splitname apabila kata tersebut merupakan kata ke 0 atau 3.  
```
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
```
***Fungsi Move File*** | untuk memindahkan file ke dalam folder kategori yang sesuai dengan tipe hewan tersebut, sekaligus melalukan renaming nama file sesuai dengan nama hewan yang telah didapatkan pada fungsi splitname apabila kata tersebut merupakan kata ke 1 atau ke 4. Pada fungsi ini saya menggunakan perintah copy "cp" melalui execv. Hal tersebut dikarenakan untuk mengatasi suatu file foto dengan hewan peliharaan yang lebih dari satu. Sehingga foto tersebut terdapat pada setiap folder kategorinya.
```
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
```  
(e) Program akan membuat file dengan ekstensi .txt yang bernama "keterangan.txt" pada setiap folder kategori tipe hewan. File tesebut berisikan informasi mengenai nama beserta umur dari hewan peliharaan yang ada pada folder tersebut. Informasi nama dan umur tersebut didapatkan dari fungsi splitname. Namun pada hasil fungsi tersebut, kata terakhir yakni kata ke 2 atau kata ke 5 yang memuat informasi umur hewan mengandung ekstensi ".jpg". Maka saya menggunakan fungsi delete_jpg untuk mengahapus ekstensi tersebut.  

***Fungsi Membuat Keterangan*** | untuk membuat keterangan
```
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
```
  
***Fungsi Delete Ekstensi JPG*** | untuk menghapus ekstensi jpg pada variable yang menyimpan informasi mengenai umur 
```
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
```  
Hasil dari berjalannya fungsi untuk membuat keterangan :  
![image](https://user-images.githubusercontent.com/55240758/115716774-bbc24580-a3a3-11eb-8a07-66ed949a0dd5.png)
  
  
Setelah seluruh poin terlaksana, langkah terakhir yang saya lakukan yaitu menghapus file-file foto yang berada diluar folder kategori tipe hewan. Hal tersebut terjadi, dikarenakan pada saat pemindahan file, saya menggunakan perintah copy "cp" melalui execv. Oleh karena itu dapat diketahui bahwa file yang berda di dalam folder ketegori tipe hewan merupakan hasil copyan dari file utama yang berada diluar folder kategori. Sehingga dilakukan penghapusan file yang berada diluar folder kategori melalui fungsi :  

***Fungsi Hapus File***  | untuk menghapus file yang berada diluar folder kategori tipe hewan
```
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
```
  
Kendala yang saya alami yaitu pada saat merumuskan tahapan program dimana pada mulanya saya tidak menggunakan directory listing, sehingga saya kebingungan untuk mendapatkan nama dari file tersebut. Selain itu kendala yang saya alami saat pengerjaan program ini adalah linux saya yang sering error yang menyebabkan selama beberapa kali saya memrogram ulang dari awal untuk pengerjaan soal ini. Hingga menginstall ulang linux.
  
  
**No. 3**

Ranora adalah mahasiswa Teknik Informatika yang saat ini sedang menjalani magang di perusahan ternama yang bernama “FakeKos Corp.”, perusahaan yang bergerak dibidang keamanan data. Karena Ranora masih magang, maka beban tugasnya tidak sebesar beban tugas pekerja tetap perusahaan. Di hari pertama Ranora bekerja, pembimbing magang Ranora memberi tugas pertamanya untuk membuat sebuah program.

A. Ranora harus membuat sebuah program C yang dimana setiap 40 detik membuat sebuah direktori dengan nama sesuai timestamp [YYYY-mm-dd_HH:ii:ss].  
B. Setiap direktori yang sudah dibuat diisi dengan 10 gambar yang didownload dari https://picsum.photos/, dimana setiap gambar akan didownload setiap 5 detik. Setiap gambar yang didownload akan diberi nama dengan format timestamp [YYYY-mm-dd_HH:ii:ss] dan gambar tersebut berbentuk persegi dengan ukuran (n%1000) + 50 pixel dimana n adalah detik Epoch Unix.  
C. Setelah direktori telah terisi dengan 10 gambar, program tersebut akan membuat sebuah file “status.txt”, dimana didalamnya berisi pesan “Download Success” yang terenkripsi dengan teknik Caesar Cipher dan dengan shift 5. Caesar Cipher adalah Teknik enkripsi sederhana yang dimana dapat melakukan enkripsi string sesuai dengan shift/key yang kita tentukan. Misal huruf “A” akan dienkripsi dengan shift 4 maka akan menjadi “E”. Karena Ranora orangnya perfeksionis dan rapi, dia ingin setelah file tersebut dibuat, direktori akan di zip dan direktori akan didelete, sehingga menyisakan hanya file zip saja.  
D. Untuk mempermudah pengendalian program, pembimbing magang Ranora ingin program tersebut akan men-generate sebuah program “Killer” yang executable, dimana program tersebut akan menterminasi semua proses program yang sedang berjalan dan akan menghapus dirinya sendiri setelah program dijalankan. Karena Ranora menyukai sesuatu hal yang baru, maka Ranora memiliki ide untuk program “Killer” yang dibuat nantinya harus merupakan program bash.  
E. Pembimbing magang Ranora juga ingin nantinya program utama yang dibuat Ranora dapat dijalankan di dalam dua mode. Untuk mengaktifkan mode pertama, program harus dijalankan dengan argumen -z, dan Ketika dijalankan dalam mode pertama, program utama akan langsung menghentikan semua operasinya Ketika program Killer dijalankan. Sedangkan untuk mengaktifkan mode kedua, program harus dijalankan dengan argumen -x, dan Ketika dijalankan dalam mode kedua, program utama akan berhenti namun membiarkan proses di setiap direktori yang masih berjalan hingga selesai (Direktori yang sudah dibuat akan mendownload gambar sampai selesai dan membuat file txt, lalu zip dan delete direktori).  

Jawaban :

Untuk program utama dari permasalahan ini seperti ini
```c
int soal3(){
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
```
Program utama tersebut dimasukkan ke dalam program daemon agar bisa berjalan di background seperti ini
```c
int main(int argc, char *argv[]) {
  if(argcheck(argc, argv)) return 0;
  int this_pid = (int)getpid();

    pid_t pid, sid;
    pid = fork();

    if (pid < 0)
        exit(EXIT_FAILURE);
    if (pid > 0)
        exit(EXIT_SUCCESS);
    
    umask(0);
    sid = setsid();

    if (sid < 0)
        exit(EXIT_FAILURE);
    if ((chdir("/home/detechtive/")) < 0)
        exit(EXIT_FAILURE);
    
    close(STDIN_FILENO);
    close(STDOUT_FILENO);
    close(STDERR_FILENO);

    while (1) {
        soal3();
    }
}
```
Untuk permasalahan A, membuat folder setiap 40 detik sekali. Di program utama tadi ada sleep(40) agar tiap 40 detik. Untuk membuat programnya, saya membua fungsi seperti di bawah
```c
void crdir(char folder[]){
    char *argv[]={"mkdir", folder, NULL};
    execv("/bin/mkdir", argv);
}
```
Untuk nama folder tersebut diambil dari program utama tadi. Menggunakan library bahasa c, time.h, mengambil formatnya dari localtime() dengan format %Y-%m-%d_%H:%M:%S.
Agar bisa berjalan sendiri dan bisa mengulangi tiap 40 detik, saya menggunakan proses tersendiri dengan fork tersediri. Untuk permasallahan yang lain, dijadikan dalam satu proses.

Untuk permasalahan B, programnya seperti ini
```c
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
```
Agar namanya bisa sesuai dengan waktu downloadnya, seperti pembuatan folder tadi, menggunakan localtme(). Agar downloadnya bisa masuk ke folder tanpa chdir, saya menggunakan path untuk itu. Downloadnya menggunakan wget, dan option -q untuk menghilangkan log di terminal, dan -O untuk penamaan dan path direktorinya. Untuk masalah yang tiap 5 detik menggunakan fungsi sleep(5)

Untuk permasalahan C, membuat log dan mengubah isinya dengan chiper +5, programnya seperti di bawah ini
```c
void crlog(char folder[]){
    char statuslog[]={"Download Success"};
    char path[40];
    sprintf(path, "%s/status.txt", folder);
    caesar(statuslog,5);
    FILE *statusfile = fopen(path, "w+");
    fprintf(statusfile,"%s",statuslog);
    fclose(statusfile);
}
```
Dan untuk program Caesar Cipher seperti dibawah
```c
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
```
Untuk menggunakan fopen untuk membuat filenya, fprintf untuk menulis teksnya ke dalam filenya. Sebelum teksnya dimasukkan, diubah dengan Caesar Cipher terlebih dahulu. Dari "Download Success" menjadi "Itbsqtfi Xzhhjxx"
Setelah membuat file log, kemudian membuat zip dengan folder tersebut dan semua isinya, seperti di bawah ini
```c
void zipping(char folder[]){
    char zipname[40];
    sprintf(zipname, "%s.zip", folder);
    char *argv[]={"zip", "-qq", "-m", "-r", zipname, folder, NULL};
    execv("/bin/zip", argv);
}
```
Menggunakan perintah zip dengan option -qq untuk menghilangkan log dari terminal, -m agar file setelah melakukan zip terhapus, dan -r untuk rekrusif agar semua yang ada di dalam folder tersebut.

Untuk permasalahan D dan E, membuat file Killer.sh dan agar membuat programnya menjadi 2 mode program untuk membuat file killernya seperti di bawah
```c
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
```
crkillz untuk mode -z dan crkillx untuk mode -x. Untuk mode z, saya membuatnya untuk membunuh semua proses yang behubungan dengan program ini dengan sinyal -9 yang berarti SIGKILL. Untuk mode -x, saya hanya menterminate proses utamnya saja, agar proses yang lain bisa berjalan hingga selesai. Untuk mendapatkan PID dari program utamnya di sini saya menggunakan pgrep untuk mencari semua PID yang berhubungan dengan program ini, dan menyimpannya kedalam array menggunakan awk. Kemudian saya menterminate array indeks pertama karena itu adalah PID dari proses program utama. Untuk menghapus program ini setelah dijalankan kedua program ini memiliki perintah rm.
Untuk penyesuaian dari modenya, saya menggunakan check argumen dari program ini sebelum menjalankan programnya, bisa dilihat seperti dibawah
```c
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
```
Pada program utama tadi sebelum program berjalan dilakuka check
```c
if(argcheck(argc, argv)) return 0;
```
Jika tidak memenuhi maka program akan langsung berhenti tanpa menjalankan perintah dibawahnya. Jika tidak ada argumen yang dimasukkan, argumen yang dimasukkan terlalu banyak, atau argumen yang dimasukkan berbeda dari yang diminta, maka akan mengembalikan nilai true, sehingga program akan langsung berhenti. Jika argumen yang diamsukkan adalah -z, maka crkillz yang akan dijalankan, jika -x, maka crkillx yang djilakan. untuk checkignya menggunakan strcmp untuk membandingkan 2 string.

Kendala yang saya alami selama menyelesaikan masalah ini adalah pada pembuatan Killer.sh, terutama untuk perintah -x, saya kebingunan cara apa yang akan saya gunakan. Selain itu juga untuk membuat folder setiap 40 detik, sedangkan total durasi dari proses download adalah 50 detik. Sehingga harus ada proses yang berjalan secara bersamaan.
