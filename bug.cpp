int main(){
    int x = 10;
    int *ptr = &x;
    *ptr = 20; 
    int y = *ptr;
    delete ptr; //Error: delete is used for dynamically allocated memory
}