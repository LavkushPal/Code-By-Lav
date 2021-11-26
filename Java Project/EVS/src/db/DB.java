
package db;

import java.sql.Statement;
import java.sql.Connection;
import java.sql.DriverManager;
import javax.swing.JOptionPane;

public class DB {
    
    public static Connection con;
    public static Statement st;
    
    static{
        
        try{
            con=DriverManager.getConnection("jdbc:mysql://localhost:3306/evs"+"?useSSL=false","root","");
            st=con.createStatement();
           // JOptionPane.showMessageDialog(null,"evs db succesfully connected");

        }
        catch(Exception ex){
            JOptionPane.showMessageDialog(null,"Some Issues found in Data Base");
        }
    }
    
    
}
