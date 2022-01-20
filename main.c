#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ogrencisayisi;

typedef struct{
    char ad[20];// 20 byte
    char soyad[20];// 20 byte
    int okulno;// 4 byte
    float matvize;// 4 byte
    float matfinal;// 4 byte
    float fizikvize;// 4 byte
    float fizikfinal;// 4 byte
    float bilvize;// 4 byte
    float bilfinal;// 4 byte
    double matort;//8 byte
    double fizort;// 8 byte
    double bilort;// 8 byte
    double genelort;//8 byte
    double genelmat;//8 byte
    double genelfiz;// 8 byte
    double genelbil;// 8 byte
}ogrenciler;

void OkulNoEkranaVeHedefDosyaya(ogrenciler *ogr,FILE *hedefdosya){
    int i,j;
    //OKUL NUMARASINA GORE SIRALA ARTAN
    for (int i = 0; i < ogrencisayisi-1; i++){
       for (int j = 0; j < ogrencisayisi-i-1; j++){
           if (ogr[j].okulno > ogr[j+1].okulno){
                ogrenciler tempOgrenci = ogr[j];
                ogr[j]=ogr[j+1];
                ogr[j+1]=tempOgrenci;
           }
       }
    }//HEDEF DOSYAYA GONDER
    fprintf(hedefdosya,"OKUL NUMARASINA GORE ARTAN SIRALAMA\n");
    fprintf(hedefdosya,"Ad\t\tSoyad\tOkulNo\n");
    for(i=0;i<ogrencisayisi;i++){
        fprintf(hedefdosya,"%s\t",ogr[i].ad);
        fprintf(hedefdosya,"%s\t",ogr[i].soyad);
        fprintf(hedefdosya,"%d\t",ogr[i].okulno);
        fprintf(hedefdosya,"\n");
    }
    fprintf(hedefdosya,"\n");
    //KOD ICINDEKI SİYAH EKRANDA GOSTERMEK İCİN
    printf("OKUL NUMARASINA GORE ARTAN SIRALAMA\n");
    printf("Ad\tSoyad\tOkulNo\n");
    for(i=0;i<ogrencisayisi;i++){
        printf("%s\t",ogr[i].ad);
        printf("%s\t",ogr[i].soyad);
        printf("%d\t",ogr[i].okulno);
        printf("\n");
    }
    printf("\n");

    //OKUL NUMARASINA GORE SIRALA AZALAN
    for (int i = 0; i < ogrencisayisi-1; i++){
       for (int j = 0; j < ogrencisayisi-i-1; j++){
           if (ogr[j].okulno < ogr[j+1].okulno){
                ogrenciler tempOgrenci = ogr[j];
                ogr[j]=ogr[j+1];
                ogr[j+1]=tempOgrenci;
           }
       }
    }//HEDEF DOSYAYA GONDER
    fprintf(hedefdosya,"OKUL NUMARASINA GORE AZALAN SIRALAMA\n");
    fprintf(hedefdosya,"Ad\t\tSoyad\tOkulNo\n");
    for(i=0;i<ogrencisayisi;i++){
        fprintf(hedefdosya,"%s\t",ogr[i].ad);
        fprintf(hedefdosya,"%s\t",ogr[i].soyad);
        fprintf(hedefdosya,"%d\t",ogr[i].okulno);
        fprintf(hedefdosya,"\n");
    }
    fprintf(hedefdosya,"\n");
    //KOD ICINDEKI SİYAH EKRANDA GOSTERMEK İCİN
    printf("OKUL NUMARASINA GORE AZALAN SIRALAMA\n");
    printf("Ad\tSoyad\tOkulNo\n");
    for(i=0;i<ogrencisayisi;i++){
        printf("%s\t",ogr[i].ad);
        printf("%s\t",ogr[i].soyad);
        printf("%d\t",ogr[i].okulno);
        printf("\n");
    }
    printf("\n");
}
void AdEkranaVeHedefDosyaya(ogrenciler *ogr,FILE *hedefdosya){
    //ISME GORE SIRALAMA ARTAN
    int i,j;
    for (i = 0; i < ogrencisayisi-1; i++){
       for (j = 0; j < ogrencisayisi-i-1; j++){
           if (strcmp(ogr[j].ad,ogr[j+1].ad)>0){
                ogrenciler tempOgrenci = ogr[j];
                ogr[j]=ogr[j+1];
                ogr[j+1]=tempOgrenci;
           }
       }
    }//HEDEF DOSYAYA GONDER
    fprintf(hedefdosya,"ISME GORE ARTAN SIRALAMA\n");
    fprintf(hedefdosya,"Ad\t\tSoyad\tOkulNo\n");
    for(i=0;i<ogrencisayisi;i++){
        fprintf(hedefdosya,"%s\t",ogr[i].ad);
        fprintf(hedefdosya,"%s\t",ogr[i].soyad);
        fprintf(hedefdosya,"%d\t",ogr[i].okulno);
        fprintf(hedefdosya,"\n");
    }
    fprintf(hedefdosya,"\n");
    //KOD ICINDEKI SİYAH EKRANDA GOSTERMEK İCİN
    printf("ISME GORE ARTAN SIRALAMA\n");
    printf("Ad\tSoyad\tOkulNo\n");
    for(i=0;i<ogrencisayisi;i++){
        printf("%s\t",ogr[i].ad);
        printf("%s\t",ogr[i].soyad);
        printf("%d\t",ogr[i].okulno);
        printf("\n");
    }
    printf("\n");

}
void SoyadEkranaVeHedefDosyaya(ogrenciler *ogr,FILE *hedefdosya){
    //SOYADA GORE SIRALAMA ARTAN
     int i,j;
     for (i = 0; i < ogrencisayisi-1; i++){
       for (j = 0; j < ogrencisayisi-i-1; j++){
           if (strcmp(ogr[j].soyad,ogr[j+1].soyad)>0){
                ogrenciler tempOgrenci = ogr[j];
                ogr[j]=ogr[j+1];
                ogr[j+1]=tempOgrenci;
           }
       }
    }//HEDEF DOSYAYA GONDER
    fprintf(hedefdosya,"SOYADA GORE ARTAN SIRALAMA\n");
    fprintf(hedefdosya,"Soyad\t\tAd\tOkulNo\n");
    for(i=0;i<ogrencisayisi;i++){
        fprintf(hedefdosya,"%s\t",ogr[i].soyad);
        fprintf(hedefdosya,"%s\t",ogr[i].ad);
        fprintf(hedefdosya,"%d\t",ogr[i].okulno);
        fprintf(hedefdosya,"\n");
    }
    fprintf(hedefdosya,"\n");
    //KOD ICINDEKI SİYAH EKRANDA GOSTERMEK İCİN
    printf("SOYADA GORE ARTAN SIRALAMA\n");
    printf("Soyad\tAd\tOkulNo\n");
    for(i=0;i<ogrencisayisi;i++){
        printf("%s\t",ogr[i].soyad);
        printf("%s\t",ogr[i].ad);
        printf("%d\t",ogr[i].okulno);
        printf("\n");
    }
    printf("\n");
}
void GenelOrtEkranaVeHedefDosya(ogrenciler *ogr,FILE *hedefdosya){
    int i,j;
     //GENEL ORTALAMAYA GORE SIRALA ARTAN
    for(i=0;i<ogrencisayisi;i++){
        ogr[i].genelort=(ogr[i].matort+ogr[i].fizort+ogr[i].bilort)/3;
    }
     for (i = 0; i < ogrencisayisi-1; i++){
       for (j = 0; j < ogrencisayisi-i-1; j++){
           if (ogr[j].genelort > ogr[j+1].genelort){
                ogrenciler tempOgrenci = ogr[j];
                ogr[j]=ogr[j+1];
                ogr[j+1]=tempOgrenci;
           }
       }
    }//HEDEF DOSYAYA GONDER
    fprintf(hedefdosya,"TUM DERSLERIN ORTALAMASINA GORE ARTAN SIRALAMA(GENEL ORT. GORE)\n");
    fprintf(hedefdosya,"Ad\tSoyad\t\tOkulNo\tMat Ort.\tFiz Ort.\tBil Ort.\tGenel Ort.\n");
    for(i=0;i<ogrencisayisi;i++){
        fprintf(hedefdosya,"%s\t",ogr[i].ad);
        fprintf(hedefdosya,"%s\t",ogr[i].soyad);
        fprintf(hedefdosya,"%d\t",ogr[i].okulno);
        fprintf(hedefdosya,"%.2lf\t",ogr[i].matort);
        fprintf(hedefdosya,"%.2lf\t",ogr[i].fizort);
        fprintf(hedefdosya,"%.2lf\t",ogr[i].bilort);
        fprintf(hedefdosya,"%.2lf\t",ogr[i].genelort);
        fprintf(hedefdosya,"\n");
    }
    fprintf(hedefdosya,"\n");
    //KOD ICINDEKI SİYAH EKRANDA GOSTERMEK İCİN
    printf("TUM DERSLERIN ORTALAMASINA GORE ARTAN SIRALAMA(GENEL ORT. GORE)\n");
    printf("Ad\tSoyad\tOkulNo\tMat Ort.\tFiz Ort.\tBil Ort.\tGenel Ort.\n");
    for(i=0;i<ogrencisayisi;i++){
        printf("%s\t",ogr[i].ad);
        printf("%s\t",ogr[i].soyad);
        printf("%d\t",ogr[i].okulno);
        printf("%.2lf\t",ogr[i].matort);
        printf("%.2lf\t",ogr[i].fizort);
        printf("%.2lf\t",ogr[i].bilort);
        printf("%.2lf\t",ogr[i].genelort);
        printf("\n");
    }
}
void matKalanogrenciler(ogrenciler *ogr,double genelmat,FILE *hedefdosya){
    //HEDEF DOSYAYA GONDER
    fprintf(hedefdosya,"\nMAT DERSINDEN KALAN OGRENCILER\n");
    fprintf(hedefdosya,"Ad\tSoyad\tOkulNo\tMatOrt\tGenelOrt\n");
    for(int i=0;i<ogrencisayisi;i++){
        if(ogr[i].matort<genelmat){
            fprintf(hedefdosya,"%s\t",ogr[i].ad);
            fprintf(hedefdosya,"%s\t",ogr[i].soyad);
            fprintf(hedefdosya,"%d\t",ogr[i].okulno);
            fprintf(hedefdosya,"%.2lf\t",ogr[i].matort);
            fprintf(hedefdosya,"%.2lf",genelmat);
            fprintf(hedefdosya,"\n");
        }
    }
    printf("\nMAT DERSINDEN KALAN OGRENCILER\n");
    printf("Ad\tSoyad\tOkulNo\tMatOrt\tGenelOrt\n");
    for(int i=0;i<ogrencisayisi;i++){
        if(ogr[i].matort<genelmat){
            printf("%s\t",ogr[i].ad);
            printf("%s\t",ogr[i].soyad);
            printf("%d\t",ogr[i].okulno);
            printf("%.2lf\t",ogr[i].matort);
            printf("%.2lf",genelmat);
            printf("\n");
}
    }
}
void fizKalanogrenciler(ogrenciler *ogr,double genelfiz,FILE *hedefdosya){
    //HEDEF DOSYAYA GONDER
    fprintf(hedefdosya,"\nFIZ DERSINDEN KALAN OGRENCILER\n");
    fprintf(hedefdosya,"Ad\tSoyad\tOkulNo\tFizOrt\tGenelOrt\n");
    for(int i=0;i<ogrencisayisi;i++){
        if(ogr[i].fizort<genelfiz){
            fprintf(hedefdosya,"%s\t",ogr[i].ad);
            fprintf(hedefdosya,"%s\t",ogr[i].soyad);
            fprintf(hedefdosya,"%d\t",ogr[i].okulno);
            fprintf(hedefdosya,"%.2lf\t",ogr[i].fizort);
            fprintf(hedefdosya,"%.2lf",genelfiz);
            fprintf(hedefdosya,"\n");
        }
    }
    printf("FIZ DERSINDEN KALAN OGRENCILER\n");
    printf("Ad\tSoyad\tOkulNo\tFizOrt\tGenelOrt\n");
    for(int i=0;i<ogrencisayisi;i++){
        if(ogr[i].fizort<genelfiz){
            printf("%s\t",ogr[i].ad);
            printf("%s\t",ogr[i].soyad);
            printf("%d\t",ogr[i].okulno);
            printf("%.2lf\t",ogr[i].fizort);
            printf("%.2lf",genelfiz);
            printf("\n");
        }
    }
}
void bilKalanogrenciler(ogrenciler *ogr,double genelbil,FILE *hedefdosya){
    //HEDEF DOSYAYA GONDER
    fprintf(hedefdosya,"\nBIL DERSINDEN KALAN OGRENCILER\n");
    fprintf(hedefdosya,"Ad\tSoyad\tOkulNo\tBilOrt\tGenelOrt\n");
    for(int i=0;i<ogrencisayisi;i++){
        if(ogr[i].bilort<genelbil){
            fprintf(hedefdosya,"%s\t",ogr[i].ad);
            fprintf(hedefdosya,"%s\t",ogr[i].soyad);
            fprintf(hedefdosya,"%d\t",ogr[i].okulno);
            fprintf(hedefdosya,"%.2lf\t",ogr[i].bilort);
            fprintf(hedefdosya,"%.2lf",genelbil);
            fprintf(hedefdosya,"\n");
        }
    }
    printf("\nBIL DERSINDEN KALAN OGRENCILER\n");
    printf("Ad\tSoyad\tOkulNo\tBilOrt\tGenelOrt\n");
    for(int i=0;i<ogrencisayisi;i++){
        if(ogr[i].bilort<genelbil){
            printf("%s\t",ogr[i].ad);
            printf("%s\t",ogr[i].soyad);
            printf("%d\t",ogr[i].okulno);
            printf("%.2lf\t",ogr[i].bilort);
            printf("%.2lf",genelbil);
            printf("\n");
        }
    }
}
void DersortEkranaVeHedefDosyaya(ogrenciler *ogr, FILE *hedefdosya){
    int i;
    double genelmat=0,genelfiz=0,genelbil=0;
    for(i=0;i<ogrencisayisi;i++){
        genelmat+=ogr[i].matort;
    }//DERSLERİN DERS DERS ORTALAMALARINI AL
    genelmat=genelmat/ogrencisayisi;

    for(i=0;i<ogrencisayisi;i++){
        genelfiz+=ogr[i].fizort;
    }
    genelfiz=genelfiz/ogrencisayisi;

    for(i=0;i<ogrencisayisi;i++){
        genelbil+=ogr[i].bilort;
    }
    genelbil=genelbil/ogrencisayisi;
    //
    fprintf(hedefdosya,"SINIFIN DERS ORTALAMALARI\n");
    fprintf(hedefdosya,"Genel Mat:%.2lf\n",genelmat);
    fprintf(hedefdosya,"Genel Fiz:%.2lf\n",genelfiz);
    fprintf(hedefdosya,"Genel Bil:%.2lf\n",genelbil);

    printf("SINIFIN DERS ORTALAMALARI\n");
    printf("Genel Mat:%.2lf\n",genelmat);
    printf("Genel Fiz:%.2lf\n",genelfiz);
    printf("Genel Bil:%.2lf\n",genelbil);

    matKalanogrenciler(ogr,genelmat,hedefdosya);
    fizKalanogrenciler(ogr,genelfiz,hedefdosya);
    bilKalanogrenciler(ogr,genelbil,hedefdosya);
}
void bilgilerigir(FILE *hedefdosya){

    char var1[20],var2[20],var3[20],var4[20],var5[20],var6[20],var7[20],var8[20],var9[20];
    ogrencisayisi=0;
    FILE *fpboyut;
    if((fpboyut = fopen("c:\\kaynakdosya.txt", "r")) == NULL) {
        printf("Dosya bulunamadi.\n");
    }else{
        while (fscanf(fpboyut, "%s",var1)!=EOF) {
            ogrencisayisi++;
        }
        ogrencisayisi=ogrencisayisi/9;
    }
    fclose(fpboyut);

    ogrenciler *ogr=(ogrenciler*)malloc(sizeof(ogrenciler)*ogrencisayisi);
    FILE *fp;
    if((fp = fopen("c:\\kaynakdosya.txt", "r")) == NULL) {
        printf("dosyada hata oldu\n");
    }else{
        int i=0;
        while (fscanf(fp, "%s %s %s %s %s %s %s %s %s",ogr[i].ad,ogr[i].soyad,var3,var4,var5,var6,var7,var8,var9)!=EOF) {
            ogr[i].okulno=atoi(var3);
            ogr[i].matvize=atoi(var4);
            ogr[i].matfinal=atoi(var5);
            ogr[i].fizikvize=atoi(var6);
            ogr[i].fizikfinal=atoi(var7);
            ogr[i].bilvize=atoi(var8);
            ogr[i].bilfinal=atoi(var9);
            i++;
        }
    }
    fclose(fp);

    for(int i=0;i<ogrencisayisi;i++){
        ogr[i].matort=(ogr[i].matvize*0.40)+(ogr[i].matfinal*0.60);
        ogr[i].fizort=(ogr[i].fizikvize*0.40)+(ogr[i].fizikfinal*0.60);
        ogr[i].bilort=(ogr[i].bilvize*0.40)+(ogr[i].bilfinal*0.60);
    }
    OkulNoEkranaVeHedefDosyaya(ogr,hedefdosya);
    AdEkranaVeHedefDosyaya(ogr,hedefdosya);
    SoyadEkranaVeHedefDosyaya(ogr,hedefdosya);
    GenelOrtEkranaVeHedefDosya(ogr,hedefdosya);
    DersortEkranaVeHedefDosyaya(ogr,hedefdosya);
}
int main()
{
    FILE *hedefdosya=fopen("c:\\hedefdosya.txt","w");
    if(hedefdosya==NULL){
        fprintf(stderr,"hedef dosya bulunamadi.");//Dosyalar hatali ise
        exit(0);//Programdan cikis yapiliyor
    }
    bilgilerigir(hedefdosya);
    fclose(hedefdosya);

    return 0;
}
