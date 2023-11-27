#include <stdio.h>
#include <string.h>
//Nhap vao mot chuoi va in ra so lan xuat hien cua moi ky tu trong chuoi
int main(){
    char string[100];
    int i, j, cout, length; //length : chieu dai
    int count[100] = {0};
    
    printf("Nhap vao mot chuoi: ");
    scanf("%s",&string);
    length = strlen(string); //length_of_string: do dai chuoi(strlen)
    for(i = 0; i < length; i++) {
        if (string[i] == ' ') {
            continue;
        }
        cout = 1;
        for (j = i + 1; j < length; j++) {
            if (string[i] == string[j]) { //chuoi
                cout++;
                count[j] = 1; //Count : dem
            }
        }
        if (count[i] == 0){ //dem
            printf("%c: %d\n", string[i], cout);
        }
    }
}
