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




**No. 3**
