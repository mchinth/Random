
char xor_c(char a, char b) {return (a==b)? '0' :'1';  }
char flip (char a) { return a=='1' ? '0':'1';}

binarytogray(string binary ){
String gray="";
gray+=binary[0];
for(i=1;i<gray.length();i++)
{
	gray+=xor_c(binary[i-1], binary[i]);
}
return gray;
}

graytobinary(string gray)
{
String binary="";
binary+=gray[0];
for(i=1;i<gray.length();i++)
{
if(gray[i]=0)
{
binary+=gray[i-1];
}
else
binary+=flip(gary[i-1]);

}
}int main()
{
    string binary = "01001";
    cout << "Gray code of " << binary << " is "
         << binarytoGray(binary) << endl;
 
    string gray = "01101";
    cout << "Binary code of " << gray << " is "
         << graytoBinary(gray) << endl;
    return 0;
}
