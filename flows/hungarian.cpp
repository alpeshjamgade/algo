t e m p l a t e < t y p e n a m e   T >  
 c l a s s   h u n g a r i a n   {  
     p u b l i c :  
     v e c t o r < T >   u ,   v ;  
     v e c t o r < i n t >   p ;  
     i n t   m ;  
     T   c o s t ;  
     v e c t o r <   v e c t o r < T >   >   a ;  
  
     h u n g a r i a n ( i n t   m )   :   m ( m )   {  
         v   =   v e c t o r < i n t > ( m ,   - 1 ) ;  
         p   =   v e c t o r < i n t > ( m ,   - 1 ) ;  
     }  
  
     i n l i n e   v o i d   a d d _ r o w ( v e c t o r < T >   r o w )   {  
         a . p u s h _ b a c k ( r o w ) ;  
         a s s e r t ( ( i n t )   a . s i z e ( )   < =   m ) ;  
  
     }  
 } ;  
 