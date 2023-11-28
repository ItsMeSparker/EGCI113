#include <stdio.h>

struct book{
    char bname[30];
    int price, ISBN;
};

void insert();
void print_menu();
void getbook();
void print_book();
void searchbyprice();
void searchbyname();

int main()
{
    int numb, see1, see2, n, SIZE;
    struct book f[SIZE];
    int choice,age;
        
    printf("Input all the book information\n");
    printf("**********************************\n");
    printf("How many book?: \n");
    scanf("%d", &SIZE);
    getbook (f, SIZE); //get all books information include a number of books
    
    
    printf("Do you want to see the book\n1.Yes\n2.No\n"); //display a single book information
    scanf("%d", &see1);
    if (see1==1){
            for(int j=0;j<SIZE;j++){
            printf("Which book do you want to see?(1-%d): ", SIZE);
            scanf("%d", numb);
            printf("Book %d\nName: %s\nPrice: %d\nISBN:%d",j+1, f[numb].bname,f[numb].price, f[numb].ISBN);
            printf("Do you want to see more books?\n1.Yes\n2.No\n");
            scanf("%d", see2);
                if (see2==1) printf("Okay");
                else if (see2==2) break;
    }
        }
    else if (see1==2) break;
}
       print_menu();
       scanf("%d", &choice);
       
            switch(choice){

            case 1:searchbyprice(f,n);

                    break;

            case 2:
                    searchbyname(f,n);

                    break;

            default:

        }

    }while(choice!=3);
       
        return 0;

}

void print_menu(){
       printf("What would you like to do?\n");
       printf("1.Search by price\n");
       printf("2.Search by title\n");
       printf("3.Exit\n");
}

void getbook(struct book f[], int SIZE){
        for(int i=0; i<SIZE; i++){
         printf("Input book %d name: ", i+1);
         scanf("%s", &f[i].bname);
         printf("Price: \n");
         scanf("%d", &f[i].price);
         printf("ISBN: \n");
         scanf("%d", &f[i].ISBN);
        }
}

void searchbyprice(struct book f[], int SIZE){
    printf("Search price between (a-b): ");
    scanf("%d and %d", %a, %b);
    for (int k=1; k>SIZE; k++){
        if(f[k].price>f[k+1].price)
        }
    }
}