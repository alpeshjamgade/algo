v e c t o r < i n t >   z _ f u n c t i o n ( c o n s t   s t r i n g   & s )   {  
     i n t   n   =   s . l e n g t h ( ) ;  
     v e c t o r < i n t >   z ( n ,   0 ) ;  
     i n t   l   =   0 ,   r   =   0 ;  
     z [ 0 ]   =   n ;  
     f o r   ( i n t   i   =   1 ;   i   <   n ;   i + + )   {  
         z [ i ]   =   ( i   >   r   ?   0   :   m i n ( r   -   i   +   1 ,   z [ i   -   l ] ) ) ;  
         w h i l e   ( i   +   z [ i ]   <   n   & &   s [ z [ i ] ]   = =   s [ i   +   z [ i ] ] )   {  
             z [ i ] + + ;  
         }  
         i f   ( i   +   z [ i ]   -   1   >   r )   {  
             l   =   i ;  
             r   =   i   +   z [ i ]   -   1 ;  
         }  
     }  
     r e t u r n   z ;  
 } 