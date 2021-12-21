import java.util.*;
                            public class pattern16{
                                public static void main(String[] args)
                                {
                                    Scanner scn = new Scanner(System.in);
                                    int n = scn.nextInt();
                                    int sp = 2*n-3;
                                    int st = 1;
                                    for(int i =1;i<=n;i++)
                                    {
                                        int val =1;     //since each row begins with 1
                                        for(int j=1;j<=st;j++)
                                        {
                                            System.out.print(val + "	");
                                            val++;
                                            // when it exit, val still get incremented
                                            // that why val-- is done 
                                            // before printing val in second star loop below
                                        }
                            
                                        for(int j =1;j<=sp;j++)
                                        {
                                            System.out.print("	");
                                        }
                                        if( i == n)     //Last Row check
                                        {
                                            st--;       //removing extra star
                                            val--;      //reducing val by 1
                                        }
                                        for(int j=1;j<=st;j++)
                                        {
                                            val--;      //reducing value first then printing
                                            System.out.print(val + "	");
                                            
                                        }
                                        st++;
                                        sp -= 2;
                                        System.out.println();
                                    }
                                }
                            }