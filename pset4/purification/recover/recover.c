#include<stdio.h>
#include<cs50.h>
#include<stdint.h>

int main(int argc, char* argv[]){
    
    if(argc != 2){
        
        fprintf(stderr,"Usage: /recover image.\n");
        return 1;
    }
    
    FILE *file = fopen(argv[1],"r");
    
    if(file == NULL){
        fprintf(stderr,"Could not open %s.\n", argv[1]);
        return 2;
    }
    
    uint8_t buffer[512];
    
    char filename[8];
    int count = 0;
    
    FILE *img = NULL;
    
    while(fread(buffer,512,1,file)){
        
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0 ){
            
            if(img != NULL){
                fclose(img);
            }
            
            sprintf(filename, "%03i.jpg", count);
            
            count++;
            
            img = fopen(filename,"w");
            
        }
        
        if(count>0){
            fwrite(buffer, 512, 1, img);
            
        }
    }
    
    if(img!=NULL){
        fclose(img);
    }
    
    fclose(file);
    
    return 0;
    
}