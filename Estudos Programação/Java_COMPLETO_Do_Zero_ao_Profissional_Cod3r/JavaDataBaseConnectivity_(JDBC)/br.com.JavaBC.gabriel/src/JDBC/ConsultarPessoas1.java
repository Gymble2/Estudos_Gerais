package JDBC;

import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;
import java.io.IOException;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;

public class ConsultarPessoas1 {
    public static void main(String[] args) throws SQLException, IOException{
        Connection conexao = FabricaConexao.getConexao();
        String sql ="SELECT * FROM pessoas";

        Statement stmt = conexao.createStatement();
        ResultSet result = stmt.executeQuery(sql);

        List<Pessoa> pessoas = new ArrayList<>();

        while (result.next()) {
            int codigo = result.getInt("codigo");
            String nome = result.getString("nome");
            pessoas.add(new Pessoa(codigo, nome));
        }

        for (Pessoa p : pessoas) {
                System.out.println(p.getCodigo() +" - "+ p.getNome());
        }
        
        stmt.close();
        conexao.close();
    }
}
