#include<stdio.h>
struct Book
{
    int Book_id;
    char book_name[30];
    int price;
    char Author[20];
};
int main(){
    struct Book s1;
    printf("Enter Book id ");
    scanf("%d",&s1.Book_id);
    printf("Enter Book name ");
    scanf("%s",s1.book_name);
    printf("Enter Price");
    scanf("%d",&s1.price);
    printf("Enter Author Name");
   scanf("%s",s1.Author);
   printf("\n");
   printf("Book info.\n");
   printf("Book_id:%d\n",s1.Book_id);
   printf("Book name:%s\n",s1.book_name);
   printf("Price:%d\n",s1.price);
   printf("Author:%s\n",s1.Author);

}