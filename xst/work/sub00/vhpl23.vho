      H  >�        Z�G�         ��         :   
structural  � ��        +  Y�  �  ީ 8� �Y � �� �� n� �a 29 I� h� �) �i �	 �y �� �Y ) � � � 4	 SI r� �� �	 �I �� �Y � Q1 l� �� �	 � Q jq �� �	 �� �)  Z   +  ]�  ��  � <i �A �� �� � r� �I 6! M� l� � �Q �� �a � A 	 � �  � 7� W1 vq �� �� �1 �� �A � U pq �� �� �  9 nY �� �� ۹ �        .	 9� MI h� �� �! �� i f� �� �! �� �A  �       �  �     ��          Y  #)  :�  R	         A  '  >�  U�          ]�     v  ��          A     :   reset  A  �     p   :  Y      q          �     :   clk  '  �     p   ;  #)      q          �     @     .�     ' Q4     *�  2�      6�     @      .�     v  �[     .�      >�     :   addr_in  >�  �     p   <  :�      6�          �     @     FQ     ' Q4     Bi  J9      N!     @      FQ     v  �[     FQ      U�     :   addr_out  U�  �     p   =  R	     N!          �     :   program_counter  ]�  �        9  Y�  �  �          e�  ma  ��  �A         iy  qI  ��  �)          ��     :   reset  iy  a�     p   A  e�      q          a�     :   clk  qI  a�     p   B  ma      q          a�     @     y     ' Q4     u1  }      ��     @      y     v  �[     y      ��     :   addr_in  ��  a�     p   C  ��      ��          a�     @     ��     ' Q4     ��  �q      �Y     @      ��     v  �[     ��      �)     :   insn_out  �)  a�     p   D  �A     �Y          a�     :   instruction_memory  ��  �        @  �  a�  �          �i  ��         �Q  ��          �     @     ��     ' Q4     ��  ��      ��     @      ��     v  �[     ��      �Q     :   data_in  �Q  ��     p   H  �i      ��          ��     @     �!     ' Q4     �9  �	      ��     @      �!     v  �[     �!      ��     :   data_out  ��  ��     p   I  ��     ��          ��     :   sign_extend_4to16  �  �        G  ީ  ��  �          �a � A 0�         �I � ) 4�         <i     :   
mux_select  �I  �y     p   M  �a      q          �y     @     �     ' Q4     �1  �      ��     @      �     v  �[     �     �     :   data_a �  �y     p   N �      ��          �y     @    �     ' Q4    	� q     Y     @     �     v  �[    �     )     :   data_b )  �y     p   O A     Y          �y     @    $�     ' Q4    ! (�     ,�     @     $�     v  �[    $�     4�     :   data_out 4�  �y     p   P 0�    ,�          �y     :   mux_2to1_4b <i  �        L 8�  �y  �         D9 [� s ��        H! _� w �q         �A     :   
mux_select H! @Q     p   T D9      q         @Q     @    O�     ' Q4    L	 S�     W�     @     O�     v  �[    O�     _�     :   data_a _� @Q     p   U [�     W�         @Q     @    ga     ' Q4    cy kI     o1     @     ga     v  �[    ga     w     :   data_b w @Q     p   V s     o1         @Q     @    ~�     ' Q4    z� ��     ��     @     ~�     v  �[    ~�     �q     :   data_out �q @Q     p   W ��    ��         @Q     :   mux_2to1_16b �A  �        S �Y @Q  �         �� �� �Q �! ܑ �a �1        �� �i �9 �	 �y �I �         ��     @    ��     ' Q4    � ��     ��     @     ��     v  �[    ��     ��     :   opcode �� �)     p   [ ��     ��         �)     :   reg_dst �i �)     p   \ ��     q         �)     :   	reg_write �9 �)     p   ] �Q     q         �)     :   alu_src �	 �)     p   ^ �!     q         �)     @    ��     ' Q4    �� ��     ة     @     ��     v  �[    ��     �y     :   alu_op �y �)     p   _ ܑ    ة         �)     :   	mem_write �I �)     p   ` �a     q         �)     :   
mem_to_reg � �)     p   a �1     q         �)     :   control_unit ��  �        Z � �)  �        	 �� � � 6i >9 U� m �� ��       	 � q "� :Q B! Y� q �q ��         ��     :   reset � ��     p   e ��      q         ��     :   clk q ��     p   f �      q         ��     @    A     ' Q4    Y )          @     A     v  �[    A     "�     :   read_register_a "� ��     p   g �              ��     @    *�     ' Q4    &� .�     2�     @     *�     v  �[    *�     :Q     :   read_register_b :Q ��     p   h 6i     2�         ��     :   write_enable B! ��     p   i >9      q         ��     @    I�     ' Q4    F	 M�     Q�     @     I�     v  �[    I�     Y�     :   write_register Y� ��     p   j U�     Q�         ��     @    aa     ' Q4    ]y eI     i1     @     aa     v  �[    aa     q     :   
write_data q ��     p   k m     i1         ��     @    x�     ' Q4    t� |�     ��     @     x�     v  �[    x�     �q     :   read_data_a �q ��     p   l ��    ��         ��     @    �A     ' Q4    �Y �)     �     @     �A     v  �[    �A     ��     :   read_data_b �� ��     p   m ��    �         ��     :   register_file ��  �        d �� ��  �         �! ֑ � ��        �	 �y �� ��         �     @    �i     ' Q4    �� �Q     �9     @     �i     v  �[    �i     �	     :   src_a �	 ��     p   q �!     �9         ��     @    ��     ' Q4    �� ��     ҩ     @     ��     v  �[    ��     �y     :   src_b �y ��     p   r ֑     ҩ         ��     @    �I     ' Q4    �a �1     �     @     �I     v  �[    �I     ��     :   sum �� ��     p   s �    �         ��     :   	carry_out �� ��     p   t ��     q         ��     :   adder_4b �  �        p �� ��  �         � 0i G� _I g        � 4Q K� c1 k         r�     @    A     ' Q4    	Y )          @     A     v  �[    A     �     :   src_a � q     p   x �              q     @    $�     ' Q4     � (�     ,�     @     $�     v  �[    $�     4Q     :   src_b 4Q q     p   y 0i     ,�         q     @    <!     ' Q4    89 @	     C�     @     <!     v  �[    <!     K�     :   sum K� q     p   z G�    C�         q     @    S�     ' Q4    O� Wy     [a     @     S�     v  �[    S�     c1     :   alu_op c1 q     p   { _I     [a         q     :   	carry_out k q     p   | g     q         q     :   alu_16b r�  �        w n� q  �         z� �q �A �� �! Б        ~� �Y �) �� �	 �y         �I     :   reset ~� v�     p   � z�      q         v�     :   clk �Y v�     p   � �q      q         v�     :   write_enable �) v�     p   � �A      q         v�     @    ��     ' Q4    � ��     ��     @     ��     v  �[    ��     ��     :   
write_data �� v�     p   � ��     ��         v�     @    �i     ' Q4    �� �Q     �9     @     �i     v  �[    �i     �	     :   addr_in �	 v�     p   � �!     �9         v�     @    ��     ' Q4    �� ��     ̩     @     ��     v  �[    ��     �y     :   data_out �y v�     p   � Б    ̩         v�     :   data_memory �I  �         �a v�  �         � ) "� *i        ��  &� .Q         6!     @    �     ' Q4    � ��     ��     @     �     v  �[    �     ��     :   src_a �� �1     p   � �     ��         �1     @    �q     ' Q4    �� Y     A     @     �q     v  �[    �q          :   src_b  �1     p   � )     A         �1     @    �     ' Q4    � �     �     @     �     v  �[    �     &�     :   sum &� �1     p   � "�    �         �1     :   	carry_out .Q �1     p   � *i     q         �1     :   	adder_12b 6!  �        � 29 �1  �     @    =�     ' Q4    :	 A�     E�     @     =�     v  �[    =�     M�     :   sig_next_pc M�  �     p   � I�    E� Ua      �     
    =�  � Ua      E�    Qy M�     @    ]1     ' Q4    YI a     e     @     ]1     v  �[    ]1     l�     :   sig_curr_pc l�  �     p   � h�    e t�      �     
    ]1  � t�      e    p� l�     @    |q     ' Q4    x� �Y     �A     @     |q     v  �[    |q     �     :   
sig_one_4b �  �     p   � �)    �A ��      �     
    |q  � ��      �A    �� �     @    ��     ' Q4    �� ��     ��     @     ��     v  �[    ��     �Q     :   sig_one_12b �Q  �     p   � �i    �� �!      �     
    ��  � �!      ��    �9 �Q     :   sig_pc_carry_out ��  �     p   � �	     q  �      �     @    ��     ' Q4    �� Ʃ     ʑ     @     ��     v  �[    ��     �a     :   sig_insn �a  �     p   � �y    ʑ �1      �     
    ��  � �1      ʑ    �I �a     @    �     ' Q4    � ��     ��     @     �     v  �[    �     �     :   sig_sign_extended_offset �  �     p   � ��    �� �q      �     
    �  � �q      ��    �� �     :   sig_reg_dst A  �     p   � �Y     q  �      �     :   sig_reg_write 	  �     p   � )     q  �      �     :   sig_alu_src �  �     p   � �     q  �      �     :   sig_mem_write �  �     p   � �     q  �      �     :   sig_mem_to_reg  �  �     p   � �     q  �      �     @    (Q     ' Q4    $i ,9     0!     @     (Q     v  �[    (Q     7�     :   sig_write_register 7�  �     p   � 4	    0! ?�      �     
    (Q  � ?�      0!    ;� 7�     @    G�     ' Q4    C� Ky     Oa     @     G�     v  �[    G�     W1     :   sig_write_data W1  �     p   � SI    Oa _      �     
    G�  � _      Oa    [ W1     @    f�     ' Q4    b� j�     n�     @     f�     v  �[    f�     vq     :   sig_read_data_a vq  �     p   � r�    n� ~A      �     
    f�  � ~A      n�    zY vq     @    �     ' Q4    �) ��     ��     @     �     v  �[    �     ��     :   sig_read_data_b ��  �     p   � ��    �� ��      �     
    �  � ��      ��    �� ��     @    �Q     ' Q4    �i �9     �!     @     �Q     v  �[    �Q     ��     :   sig_alu_src_b ��  �     p   � �	    �! ��      �     
    �Q  � ��      �!    �� ��     @    đ     ' Q4    �� �y     �a     @     đ     v  �[    đ     �1     :   sig_alu_result �1  �     p   � �I    �a �      �     
    đ  � �      �a    � �1     :   sig_alu_carry_out ��  �     p   � ��     q  �      �     @    �     ' Q4    � �     �q     @     �     v  �[    �     �A     :   sig_data_mem_out �A  �     p   � �Y    �q       �     
    �  �       �q    �) �A     @    
�     ' Q4    � �     �     @     
�     v  �[    
�     �     :   
sig_alu_op �  �     p   � �    � "Q      �     
    
�  � "Q      �    i �     s   0001  �[ *!     � &9         .	        �     *! �)              �     s   000000000001  �[ 5�     � 1�         9�        �     5� �i              �     \     Y  ' MI     \     #)  .� MI     \     :� I� MI     \     R	 h� MI        � Q1  Y�    =� A� Ey Ia      �     :   pc U  �     E   � Q1 MI  �     \    � h� h�     \    ) �i h�     \    "� I� h�     \    *i �	 h�        � l� 29    Y \� `� d�      �     :   next_pc pq  �     E   � l� h�  �     \     e�  ' ��     \     ma  .� ��     \     �� h� ��     \     �A �y ��        � ��  �    tY xA |) �      �     :   insn_mem ��  �     E   � �� ��  �     @    ��     ' Q4    �� ��     �i     @     ��     q    �y �� �Q     \     �i �i �!     \     �� �� �!        � �	  ީ    �Q �9      �     :   sign_extend ��  �     E   � �	 �!  �     @    ��     ' Q4    �� ��     ��     @    ��     q    �y �� �y     \    �� �� ��     \    �� �Y ��     \    �Q ) ��     \    �! � ��     \    �a � ��     \    �1 � ��     \    ܑ � ��        � � �    �y �a �I �1 �� � �      �     :   	ctrl_unit �  �     E   � � ��  �     \     �a �Y i     @    �Y     ' Q4    �q �A     �)     @    �Y     q    �y �Y �     \    � �) i     @    �     ' Q4     � �     �     @     �     q    �y � �     \    A � i     \    0� 4	 i        � Q 8�    � � � �      �     :   mux_reg_dst  9  �     E   � Q i  �     \    ��  ' f�     \    �  .� f�     @    /�     ' Q4    +� 3�     7�     @    /�     q    �y /� ;�     \    � 7� f�     @    Ca     ' Q4    ?y GI     K1     @    Ca     q    �y Ca O     \    6i K1 f�     \    >9 ) f�     \    U� 4	 f�     \    m SI f�     \    �� r� f�     \    �� �� f�        � jq ��   	 $! (	 ;� O S V� Z� ^� b�      �     :   reg_file nY  �     E   � jq f�  �     \    D9 � ��     \    [� �� ��     \    s �� ��     \    �� �	 ��        � �� �Y    rA v) z }�      �     :   mux_alu_src ��  �     E   � �� ��  �     \    � r� �!     \    0i �	 �!     \    G� �I �!     \    _I � �!     \    g �� �!        � �	 n�    �� �� �i �Q �9      �     :   alu ��  �     E   � �	 �!  �     \    z�  ' ��     \    �q  .� ��     \    �A � ��     \    �� �� ��     @    �a     ' Q4    �y �I     �1     @     �a     q    �I �a �     \    �! �1 ��     \    Б �Y ��        � �� �a    �� �� �� �� � �      �     :   data_mem ۹  �     E   � �� ��  �     \    D9 � �A     \    [� �I �A     \    s �Y �A     \    �� SI �A        � �) �Y    ߡ � �q �Y      �     :   mux_mem_to_reg �  �     E   � �) �A  �     %     �  �  :�     � ��     �   2H:/Comp3211/Project/project1/single_cycle_core.vhd ��  �                single_cycle_core   
structural   work      single_cycle_core   
structural   work      single_cycle_core       work      std_logic_1164       IEEE      standard       std