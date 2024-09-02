//this is a ppm file generation program . The results are attached in the name "resultPPMImage1"
#include <cstdio>
#include <cstdint>
#include <fstream>
#include <iostream>

using namespace  std;

void image(){
    ofstream image;
    image.open("Image.ppm");

    if(image.is_open()){
        image<<"P3"<<endl;
        image<<"250 250"<<endl;
        image<<"255"<<endl;
        for(int i = 0 ; i<250 ; i++){
            for(int j = 0 ; j<250 ; j++){
                image<<i<<" "<<j*i+i<<" "<<j<<endl;
            }
        }
    }
    image.close();  
}
int main(){
image();
    
}
