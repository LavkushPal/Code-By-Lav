/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package evs;

import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.Collections;
import javax.swing.JOptionPane;

/**
 *
 * @author ADMIN
 */
public class evsCalculateVote extends javax.swing.JFrame {

    /**
     * Creates new form evsCalculateVoting
     */
    public evsCalculateVote() {
        initComponents();
        setVotes();
    }
    
    public int setVotes(){
     
        try{
            ResultSet rs=db.DB.st.executeQuery("select * from votes ");
            
            rs.next();
            String bjp=rs.getString("bjp");
            String congress=rs.getString("congress");
            String aap=rs.getString("aap");
            String sp=rs.getString("sp");
            String bsp=rs.getString("bsp");
            String nota=rs.getString("nota");
            
            int a=Integer.parseInt(bjp);   // a=0
            int b=Integer.parseInt(congress); // b=1
            int c=Integer.parseInt(aap);  // c=2
            int d=Integer.parseInt(sp);   // d=3
            int e=Integer.parseInt(bsp);  // e=4
            int f=Integer.parseInt(nota); // f=5
            
            ArrayList<Integer> arr1=new ArrayList<>(6);
            ArrayList<Integer> arr2=new ArrayList<>(6);
            
            int i=0;
            arr1.add(i++,a);
            arr1.add(i++,b);
            arr1.add(i++,c);
            arr1.add(i++,d);
            arr1.add(i++,e);
            arr1.add(i++,f);
            
            for(int x: arr1){
               System.out.println("before reverse :"+x);
            }
            
            Collections.sort(arr1,Collections.reverseOrder());
            
            int j=0;
            arr2.add(j++,a);
            arr2.add(j++,b);
            arr2.add(j++,c);
            arr2.add(j++,d);
            arr2.add(j++,e);
            arr2.add(j++,f);

            for(int y: arr1){
                   System.out.println("after reverse :"+y);
                  }            

             int Rank=0,prev=0;
             for(int p=0;p<6;p++)
             {
                 int x=arr1.get(p);                 
                 if(x!=prev)
                     Rank++;                     
                 for(int q=0;q<6;q++)
                 {
                     int y=arr2.get(q);                    
                     if(x==y)
                     {
                         if(q==0)
                         {  bjpRank.setText(Rank +"");
                         System.out.println("bjp rank "+Rank);}
                         else if(q==1)
                         { congressRank.setText(Rank +"");
                         System.out.println("congrss rank "+Rank);
                         }
                         else if(q==4)
                         {aapRank.setText(Rank +"");
                         System.out.println("bsp rank "+Rank);
                         }
                         else if(q==3)
                         { spRank.setText(Rank +"");
                         System.out.println("sp rank "+Rank);
                         }
                         else if(q==2)
                         {bspRank.setText(Rank +"");
                         System.out.println("aap rank "+Rank);
                         }
                         else if(q==5)
                         { notaRank.setText(Rank +""); 
                         System.out.println("nota rank "+Rank);
                         }
                         
                     }                     
                 }
                 prev=x;  
             }                  
            bjpVote.setText(bjp);
            congressVote.setText(congress);
            bspVote.setText(aap);
            spVote.setText(sp);
            aapVote.setText(bsp);
            notaVote.setText(nota);   
            
            int x=arr1.get(0);
                 
                if(x==a)
                      winner.setText("BJP");
                else if(x==b)
                      winner.setText("CONGRESS");
                else if(x==e)
                       winner.setText("AAP");
                else if(x==d)
                       winner.setText("SP");
                else if(x==c )
                       winner.setText("BSP");                     
                    
            
            
            
        }
        catch(Exception ex){
            JOptionPane.showMessageDialog(null, ex);
        }
        return 0;
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jPanel2 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jSeparator1 = new javax.swing.JSeparator();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jLabel8 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();
        jLabel10 = new javax.swing.JLabel();
        jLabel11 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        crossChecking = new javax.swing.JButton();
        logOut = new javax.swing.JButton();
        bjpVote = new javax.swing.JButton();
        bjpRank = new javax.swing.JButton();
        congressVote = new javax.swing.JButton();
        congressRank = new javax.swing.JButton();
        spRank = new javax.swing.JButton();
        aapVote = new javax.swing.JButton();
        aapRank = new javax.swing.JButton();
        spVote = new javax.swing.JButton();
        bspRank = new javax.swing.JButton();
        notaVote = new javax.swing.JButton();
        notaRank = new javax.swing.JButton();
        winner = new javax.swing.JButton();
        bspVote = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        jPanel1.setBackground(new java.awt.Color(255, 255, 255));

        jPanel2.setBackground(new java.awt.Color(204, 204, 204));

        jLabel1.setBackground(new java.awt.Color(102, 153, 255));
        jLabel1.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        jLabel1.setText("           Party's  Votes & Ranking ");

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addGap(151, 151, 151)
                .addComponent(jLabel1)
                .addContainerGap(193, Short.MAX_VALUE))
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel1, javax.swing.GroupLayout.DEFAULT_SIZE, 33, Short.MAX_VALUE)
        );

        jLabel2.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        jLabel2.setText("Party");

        jLabel3.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        jLabel3.setText("Rank");

        jLabel4.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        jLabel4.setText("Vote");

        jLabel6.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel6.setText("B J P");

        jLabel7.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel7.setText("CONGRESS");

        jLabel8.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel8.setText("B S P");

        jLabel9.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel9.setText("S P");

        jLabel10.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel10.setText("A A P");

        jLabel11.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel11.setText("NOTA");

        jLabel5.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        jLabel5.setText("Winner");

        crossChecking.setBackground(new java.awt.Color(255, 255, 255));
        crossChecking.setText("Cross Checking ");
        crossChecking.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                crossCheckingActionPerformed(evt);
            }
        });

        logOut.setBackground(new java.awt.Color(255, 255, 255));
        logOut.setText("Log Out");
        logOut.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                logOutActionPerformed(evt);
            }
        });

        bjpVote.setBackground(new java.awt.Color(204, 204, 204));

        bjpRank.setBackground(new java.awt.Color(204, 204, 204));

        congressVote.setBackground(new java.awt.Color(204, 204, 204));

        congressRank.setBackground(new java.awt.Color(204, 204, 204));

        spRank.setBackground(new java.awt.Color(204, 204, 204));
        spRank.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                spRankActionPerformed(evt);
            }
        });

        aapVote.setBackground(new java.awt.Color(204, 204, 204));

        aapRank.setBackground(new java.awt.Color(204, 204, 204));
        aapRank.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                aapRankActionPerformed(evt);
            }
        });

        spVote.setBackground(new java.awt.Color(204, 204, 204));
        spVote.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                spVoteActionPerformed(evt);
            }
        });

        bspRank.setBackground(new java.awt.Color(204, 204, 204));
        bspRank.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                bspRankActionPerformed(evt);
            }
        });

        notaVote.setBackground(new java.awt.Color(204, 204, 204));
        notaVote.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                notaVoteActionPerformed(evt);
            }
        });

        notaRank.setBackground(new java.awt.Color(204, 204, 204));
        notaRank.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                notaRankActionPerformed(evt);
            }
        });

        winner.setBackground(new java.awt.Color(204, 204, 204));
        winner.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                winnerActionPerformed(evt);
            }
        });

        bspVote.setBackground(new java.awt.Color(204, 204, 204));
        bspVote.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                bspVoteActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(75, 75, 75)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel7)
                            .addComponent(jLabel10)
                            .addComponent(jLabel6, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                .addComponent(jLabel11)
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(jLabel9)
                                    .addComponent(jLabel8))))
                        .addGap(161, 161, 161)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(aapRank, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(spRank, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(bspRank, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(notaRank, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(congressRank, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addComponent(aapVote, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(congressVote, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(spVote, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(bspVote, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(notaVote, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE)))
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(bjpRank, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(bjpVote, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(112, 112, 112))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(jLabel2)
                        .addGap(208, 208, 208)
                        .addComponent(jLabel3)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jLabel4)
                        .addGap(143, 143, 143))))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addContainerGap(48, Short.MAX_VALUE)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jSeparator1, javax.swing.GroupLayout.PREFERRED_SIZE, 625, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                        .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                            .addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGap(43, 43, 43))
                        .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                            .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                .addGroup(jPanel1Layout.createSequentialGroup()
                                    .addGap(64, 64, 64)
                                    .addComponent(crossChecking, javax.swing.GroupLayout.PREFERRED_SIZE, 139, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addGap(32, 32, 32)
                                    .addComponent(logOut))
                                .addGroup(jPanel1Layout.createSequentialGroup()
                                    .addGap(18, 18, 18)
                                    .addComponent(winner, javax.swing.GroupLayout.PREFERRED_SIZE, 367, javax.swing.GroupLayout.PREFERRED_SIZE)))
                            .addGap(112, 112, 112)))))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(jLabel3)
                    .addComponent(jLabel4))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jSeparator1, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(bjpVote, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(bjpRank, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel6))
                .addGap(29, 29, 29)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(congressVote, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(congressRank, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel7))
                .addGap(28, 28, 28)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                        .addComponent(aapVote, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(aapRank, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(jLabel10))
                .addGap(29, 29, 29)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel9)
                    .addComponent(spRank, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(spVote, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(32, 32, 32)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                        .addComponent(bspRank, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(bspVote, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(jLabel8))
                .addGap(36, 36, 36)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel11)
                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                        .addComponent(notaRank, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(notaVote, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(45, 45, 45)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabel5)
                    .addComponent(winner, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(21, 21, 21)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(crossChecking)
                    .addComponent(logOut))
                .addContainerGap(22, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void logOutActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_logOutActionPerformed
        
        int yes=JOptionPane.showConfirmDialog(null,"Do you want Exit ? ","Confirmation", JOptionPane.YES_NO_CANCEL_OPTION);
        
        if(yes==0)
            System.exit(0);
                
    }//GEN-LAST:event_logOutActionPerformed

    
    private void spRankActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_spRankActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_spRankActionPerformed

    private void aapRankActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_aapRankActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_aapRankActionPerformed

    private void spVoteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_spVoteActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_spVoteActionPerformed

    private void bspRankActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bspRankActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_bspRankActionPerformed

    private void notaVoteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_notaVoteActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_notaVoteActionPerformed

    private void notaRankActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_notaRankActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_notaRankActionPerformed

    private void winnerActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_winnerActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_winnerActionPerformed

    private void bspVoteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bspVoteActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_bspVoteActionPerformed

    private void crossCheckingActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_crossCheckingActionPerformed
       evsCrossCheckingVote crossChecking=new evsCrossCheckingVote();
        crossChecking.setVisible(true);
    }//GEN-LAST:event_crossCheckingActionPerformed

   

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton aapRank;
    private javax.swing.JButton aapVote;
    private javax.swing.JButton bjpRank;
    private javax.swing.JButton bjpVote;
    private javax.swing.JButton bspRank;
    private javax.swing.JButton bspVote;
    private javax.swing.JButton congressRank;
    private javax.swing.JButton congressVote;
    private javax.swing.JButton crossChecking;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel10;
    private javax.swing.JLabel jLabel11;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JSeparator jSeparator1;
    private javax.swing.JButton logOut;
    private javax.swing.JButton notaRank;
    private javax.swing.JButton notaVote;
    private javax.swing.JButton spRank;
    private javax.swing.JButton spVote;
    private javax.swing.JButton winner;
    // End of variables declaration//GEN-END:variables
}