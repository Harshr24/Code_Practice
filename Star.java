class star
{
	public static void  main (String args[])
	{
        /*
        for(int i=1;i<=5;i++){
            for(int k=5;k>i;k--){
                System.out.print(" ");
            }
            for(int j=0;j<i;j++){
                System.out.print("* ");
            }
            System.out.println("");
        } 
        for(int i=4;i>=0;i--){
            for(int k=i;k<5;k++){
                System.out.print(" ");
            }
            for(int j=0;j<i;j++){
                System.out.print("* ");
            }
            System.out.println("");
        } 
        */
        for(int i=1;i<=5;i++){
            for(int k=5;k>i;k--){
                System.out.print(" ");
            }
            for(int j=0;j<i;j++){
                if ((j+1)%2==0){
                    System.out.print("* ");
                }
                else {
                    System.out.print(" ");
                }
            }
            System.out.println("");
        } 
        for(int i=4;i>0;i--){
            for(int k=i;k<5;k++){
                System.out.print(" ");
            }
            for(int j=0;j<i;j++){
                if ((j+1)%2==0){
                    System.out.print("* ");
                }
                else {
                    System.out.print(" ");
                }
            }
            System.out.println("");
        } 
	}
}