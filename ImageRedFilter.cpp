#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std ;

void red_filter(){
    ofstream filtered_image;
    ifstream image;

    
    image.open("test.ppm");
    filtered_image.open("filtered_image.ppm");
    string type = "", width="", height = "", RGB = "";
    int r = 0 , g= 0 , b= 0 ; 
    string red = "", green = "" , blue = "";

    image>>type ;
    image>>height;
    image>>width;
    image>>RGB;


    filtered_image<<type<<endl<<height<<endl<<width<<endl<<RGB<<endl;
    while(!image.eof()){
        image>>red;
        image>>green;
        image>>blue;

        stringstream redstream(red);
        stringstream greenstream(green);
        stringstream bluestream(blue);
        redstream >> r;
        greenstream >> g;
        bluestream >> b;

        if (r+=50>255){
            r= 40;
        }
        else{r+=30;}
        filtered_image<<r<<" "<<g<<" "<<b<<endl;
    }
    filtered_image.close();
    image.close();
    
}

int main(){
    red_filter();
    return 0;
}